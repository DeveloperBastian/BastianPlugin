// Fill out your copyright notice in the Description page of Project Settings.

#include "BA_NeuralNetworkAdapter.h"

#include "Camera/CameraComponent.h"
#include "Engine/TextureRenderTarget2D.h"



TArray<FString> UBA_NeuralNetworkAdapter::GetRuntimeNames()
{
	using namespace UE::NNECore;

	TArray<FString> Result;
	TArrayView<TWeakInterfacePtr<INNERuntime>> Runtimes = GetAllRuntimes();
	for (int32 i = 0; i < Runtimes.Num(); i++)
	{
		if (Runtimes[i].IsValid() && Cast<INNERuntimeCPU>(Runtimes[i].Get()))
		{
			Result.Add(Runtimes[i]->GetRuntimeName());
		}
	}
	return Result;
}

UBA_NeuralNetworkAdapter* UBA_NeuralNetworkAdapter::CreateModel(UObject* Parent, FString RuntimeName, UNNEModelData* ModelData)
{
	using namespace UE::NNECore;

	if (!ModelData)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid model data"));
		return nullptr;
	}

	TWeakInterfacePtr<INNERuntimeCPU> Runtime = GetRuntime<INNERuntimeCPU>(RuntimeName);
	if (!Runtime.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("No CPU runtime '%s' found"), *RuntimeName);
		return nullptr;
	}
	
	TUniquePtr<IModelCPU> UniqueModel = Runtime->CreateModelCPU(ModelData);
	if (!UniqueModel.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Could not create the CPU model"));
		return nullptr;
	}

	UBA_NeuralNetworkAdapter* Result = NewObject<UBA_NeuralNetworkAdapter>(Parent);
	if (Result)
	{
		Result->Model = TSharedPtr<IModelCPU>(UniqueModel.Release());
		return Result;
	}

	return nullptr;
}

bool UBA_NeuralNetworkAdapter::CreateTensor(TArray<int32> Shape, UPARAM(ref)FNeuralNetworkTensor& Tensor)
{
	if (Shape.Num() == 0)
	{
		return false;
	}

	int32 Volume = 1;
	for (int32 i = 0; i < Shape.Num(); i++)
	{
		if (Shape[i] < 1)
		{
			return false;
		}
		Volume *= Shape[i];
	}

	Tensor.Shape = Shape;
	Tensor.Data.SetNum(Volume);
	return true;
}

int32 UBA_NeuralNetworkAdapter::NumInputs()
{
	check(Model.IsValid())
	return Model->GetInputTensorDescs().Num();
}

int32 UBA_NeuralNetworkAdapter::NumOutputs()
{
	check(Model.IsValid())
	return Model->GetOutputTensorDescs().Num();
}

TArray<int32> UBA_NeuralNetworkAdapter::GetInputShape(int32 Index)
{
	check(Model.IsValid())

	using namespace UE::NNECore;
	TConstArrayView<FTensorDesc> Desc = Model->GetInputTensorDescs();
	if (Index < 0 || Index >= Desc.Num())
	{
		return TArray<int32>();
	}

	return TArray<int32>(Desc[Index].GetShape().GetData());
}

TArray<int32> UBA_NeuralNetworkAdapter::GetOutputShape(int32 Index)
{
	check(Model.IsValid())

	using namespace UE::NNECore;
	TConstArrayView<FTensorDesc> Desc = Model->GetOutputTensorDescs();
	if (Index < 0 || Index >= Desc.Num())
	{
		return TArray<int32>();
	}

	return TArray<int32>(Desc[Index].GetShape().GetData());
}

bool UBA_NeuralNetworkAdapter::SetInputs(const TArray<FNeuralNetworkTensor>& Inputs)
{
	check(Model.IsValid())

	using namespace UE::NNECore;
	InputBindings.Reset();
	InputShapes.Reset();

	TConstArrayView<FTensorDesc> InputDescs = Model->GetInputTensorDescs();
	if (InputDescs.Num() != Inputs.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid number of input tensors provided"));
		return false;
	}

	InputBindings.SetNum(Inputs.Num());
	InputShapes.SetNum(Inputs.Num());
	for (int32 i = 0; i < Inputs.Num(); i++)
	{
		InputBindings[i].Data = (void*)Inputs[i].Data.GetData();
		InputBindings[i].SizeInBytes = Inputs[i].Data.Num() * sizeof(float);
		InputShapes[i] = FTensorShape::MakeFromSymbolic(FSymbolicTensorShape::Make(Inputs[i].Shape));
	}

	if (Model->SetInputTensorShapes(InputShapes) != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to set the input shapes"));
		return false;
	}

	return true;
}

bool UBA_NeuralNetworkAdapter::RunSync(UPARAM(ref)TArray<FNeuralNetworkTensor>& Outputs)
{
	check(Model.IsValid());

	using namespace UE::NNECore;
	TConstArrayView<FTensorDesc> OutputDescs = Model->GetOutputTensorDescs();
	if (OutputDescs.Num() != Outputs.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid number of output tensors provided"));
		return false;
	}
	
	TArray<FTensorBindingCPU> OutputBindings;
	OutputBindings.SetNum(Outputs.Num());
	for (int32 i = 0; i < Outputs.Num(); i++)
	{
		OutputBindings[i].Data = (void*)Outputs[i].Data.GetData();
		OutputBindings[i].SizeInBytes = Outputs[i].Data.Num() * sizeof(float);
	}
	
	return Model->RunSync(InputBindings, OutputBindings) == 0;
}

TArray<float> UBA_NeuralNetworkAdapter::TakeScreenshot(UCameraComponent* CameraComp, int32 Resolution)
{
	TArray<FColor> RawData; TArray<float> TargetArray;
	
	if (!IsValid(CameraComp))
	{
		UE_LOG(LogTemp, Error, TEXT("UBA_NeuralNetworkAdapter::TakeScreenshot - No valid camera found"));
		return TargetArray;
	}
	// reserve memory
	RawData.Reserve(Resolution * Resolution);
	TargetArray.Reserve(Resolution * Resolution);

	TObjectPtr<USceneCaptureComponent2D> CaptureComp = NewObject<USceneCaptureComponent2D>(CameraComp, USceneCaptureComponent2D::StaticClass());
	// Create a temporary UTextureRenderTarget2D to capture data
	UTextureRenderTarget2D* TextureRenderTarget = NewObject<UTextureRenderTarget2D>();
	TextureRenderTarget->InitCustomFormat(Resolution, Resolution, PF_B8G8R8A8, false);
	// set transform
	CaptureComp->SetWorldLocationAndRotation(
		CameraComp->GetComponentLocation(),
		CameraComp->GetComponentRotation()
	);
	CaptureComp->FOVAngle = CameraComp->FieldOfView;

	// Capture scene
	CaptureComp->TextureTarget = TextureRenderTarget;
	CaptureComp->CaptureScene();
		
	if (!TextureRenderTarget->GameThread_GetRenderTargetResource()->ReadPixels(RawData))
	{
		UE_LOG(LogTemp, Error, TEXT("UBA_NeuralNetworkAdapter::TakeScreenshot - ReadPixels failed"));
		return TargetArray;
	}
	RawData.Shrink();
	
	// Convert captured image to array of float for Tensor
	TargetArray.Reserve(Resolution * Resolution);
	auto part = static_cast<float>(255);
	for (int i = 0; i < TargetArray.Num(); i++) 
	{
		TargetArray[i] = FColorToFloat(RawData[i], part);
	}
	RawData.Empty();

	UE_LOG(LogTemp, Verbose, TEXT("UBA_NeuralNetworkAdapter::TakeScreenshot - Returned valid screenshot"));
	return TargetArray;
}

float UBA_NeuralNetworkAdapter::FColorToFloat(FColor color, float part)
{
	return (color.R / part) * (color.G / part) * (color.B / part);
}


