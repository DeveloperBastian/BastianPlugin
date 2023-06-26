// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Components/SceneCaptureComponent2D.h>
#include "NNECore.h"
#include "NNECoreRuntimeCPU.h"
#include "NNECoreModelData.h"

#include "BA_NeuralNetworkAdapter.generated.h"


USTRUCT(BlueprintType, Category = "BA Neural Network")
struct FNeuralNetworkTensor
{
	GENERATED_BODY()

public:
	// for YOLO, the shape should be [1, 3, 416, 416] = [1 image, 3 channels, width, height]
	UPROPERTY(BlueprintReadWrite, Category = "BA Neural Network")
		TArray<int32> Shape = TArray<int32>();

	// data are represented as array [416, 416] of float
	UPROPERTY(BlueprintReadWrite, Category = "BA Neural Network")
		TArray<float> Data = TArray<float>();
};

UCLASS(BlueprintType, Category = "BA Neural Network")
class BASTIANRUNTIME_API UBA_NeuralNetworkAdapter : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		static TArray<FString> GetRuntimeNames();

	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		static UBA_NeuralNetworkAdapter* CreateModel(UObject* Parent, FString RuntimeName, UNNEModelData* ModelData);

	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		static bool CreateTensor(TArray<int32> Shape, UPARAM(ref) FNeuralNetworkTensor& Tensor);

public:
	
	// number of Input tensors
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		int32 NumInputs();

	// number of Output tensors
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		int32 NumOutputs();

	// Input shape for YOLO 2 is (1x3x416x416) (batch x channels x height x width)
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		TArray<int32> GetInputShape(int32 Index);

	// The output for YOLO 2 is a (1x125x13x13) tensor where 13x13 is the number of grid cells that the image gets divided into. 
	// Each grid cell corresponds to 125 channels, made up of the 5 bounding boxes predicted by the grid cell and the 25 data elements that describe each bounding box (5x25=125).
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		TArray<int32> GetOutputShape(int32 Index);

	// Set the Array of Tensors for Input
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		bool SetInputs(const TArray<FNeuralNetworkTensor>& Inputs);

	// Run a model and return the output tensors. Will run synchronously in game thread 
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		bool RunSync(UPARAM(ref) TArray<FNeuralNetworkTensor>& Outputs);

	// Take a screenshot using the current camera components transform and PoV and return an array to be used as initializer for a Tensor
	UFUNCTION(BlueprintCallable, Category = "BA Neural Network")
		TArray<float> TakeScreenshot(UCameraComponent* CameraComp, int32 Resolution);

private:

	TSharedPtr<UE::NNECore::IModelCPU> Model;

	TArray<UE::NNECore::FTensorBindingCPU> InputBindings;

	TArray<UE::NNECore::FTensorShape> InputShapes;

	float FColorToFloat(FColor color, float part);
};