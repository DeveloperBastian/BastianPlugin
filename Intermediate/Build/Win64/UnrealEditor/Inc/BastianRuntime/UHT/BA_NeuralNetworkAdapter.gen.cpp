// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BastianRuntime/Public/BA_NeuralNetworkAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBA_NeuralNetworkAdapter() {}
// Cross Module References
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UBA_NeuralNetworkAdapter();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UBA_NeuralNetworkAdapter_NoRegister();
	BASTIANRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkTensor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	NNECORE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BastianRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralNetworkTensor;
class UScriptStruct* FNeuralNetworkTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralNetworkTensor, (UObject*)Z_Construct_UPackage__Script_BastianRuntime(), TEXT("NeuralNetworkTensor"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.OuterSingleton;
}
template<> BASTIANRUNTIME_API UScriptStruct* StaticStruct<FNeuralNetworkTensor>()
{
	return FNeuralNetworkTensor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "BA Neural Network" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralNetworkTensor>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// for YOLO, the shape should be [1, 3, 416, 416] = [1 image, 3 channels, width, height]\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "for YOLO, the shape should be [1, 3, 416, 416] = [1 image, 3 channels, width, height]" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkTensor, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// data are represented as array [416, 416] of float\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "data are represented as array [416, 416] of float" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkTensor, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
		nullptr,
		&NewStructOps,
		"NeuralNetworkTensor",
		sizeof(FNeuralNetworkTensor),
		alignof(FNeuralNetworkTensor),
		Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkTensor()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.InnerSingleton, Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralNetworkTensor.InnerSingleton;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execTakeScreenshot)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->TakeScreenshot(Z_Param_CameraComp,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execRunSync)
	{
		P_GET_TARRAY_REF(FNeuralNetworkTensor,Z_Param_Out_Outputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunSync(Z_Param_Out_Outputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execSetInputs)
	{
		P_GET_TARRAY_REF(FNeuralNetworkTensor,Z_Param_Out_Inputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputs(Z_Param_Out_Inputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execGetOutputShape)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetOutputShape(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execGetInputShape)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputShape(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execNumOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumOutputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execNumInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execCreateTensor)
	{
		P_GET_TARRAY(int32,Z_Param_Shape);
		P_GET_STRUCT_REF(FNeuralNetworkTensor,Z_Param_Out_Tensor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBA_NeuralNetworkAdapter::CreateTensor(Z_Param_Shape,Z_Param_Out_Tensor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execCreateModel)
	{
		P_GET_OBJECT(UObject,Z_Param_Parent);
		P_GET_PROPERTY(FStrProperty,Z_Param_RuntimeName);
		P_GET_OBJECT(UNNEModelData,Z_Param_ModelData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBA_NeuralNetworkAdapter**)Z_Param__Result=UBA_NeuralNetworkAdapter::CreateModel(Z_Param_Parent,Z_Param_RuntimeName,Z_Param_ModelData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBA_NeuralNetworkAdapter::execGetRuntimeNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBA_NeuralNetworkAdapter::GetRuntimeNames();
		P_NATIVE_END;
	}
	void UBA_NeuralNetworkAdapter::StaticRegisterNativesUBA_NeuralNetworkAdapter()
	{
		UClass* Class = UBA_NeuralNetworkAdapter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateModel", &UBA_NeuralNetworkAdapter::execCreateModel },
			{ "CreateTensor", &UBA_NeuralNetworkAdapter::execCreateTensor },
			{ "GetInputShape", &UBA_NeuralNetworkAdapter::execGetInputShape },
			{ "GetOutputShape", &UBA_NeuralNetworkAdapter::execGetOutputShape },
			{ "GetRuntimeNames", &UBA_NeuralNetworkAdapter::execGetRuntimeNames },
			{ "NumInputs", &UBA_NeuralNetworkAdapter::execNumInputs },
			{ "NumOutputs", &UBA_NeuralNetworkAdapter::execNumOutputs },
			{ "RunSync", &UBA_NeuralNetworkAdapter::execRunSync },
			{ "SetInputs", &UBA_NeuralNetworkAdapter::execSetInputs },
			{ "TakeScreenshot", &UBA_NeuralNetworkAdapter::execTakeScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics
	{
		struct BA_NeuralNetworkAdapter_eventCreateModel_Parms
		{
			UObject* Parent;
			FString RuntimeName;
			UNNEModelData* ModelData;
			UBA_NeuralNetworkAdapter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateModel_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_RuntimeName = { "RuntimeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateModel_Parms, RuntimeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_ModelData = { "ModelData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateModel_Parms, ModelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateModel_Parms, ReturnValue), Z_Construct_UClass_UBA_NeuralNetworkAdapter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_RuntimeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_ModelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "CreateModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::BA_NeuralNetworkAdapter_eventCreateModel_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics
	{
		struct BA_NeuralNetworkAdapter_eventCreateTensor_Parms
		{
			TArray<int32> Shape;
			FNeuralNetworkTensor Tensor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tensor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateTensor_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Tensor = { "Tensor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventCreateTensor_Parms, Tensor), Z_Construct_UScriptStruct_FNeuralNetworkTensor, METADATA_PARAMS(nullptr, 0) }; // 1705193968
	void Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BA_NeuralNetworkAdapter_eventCreateTensor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BA_NeuralNetworkAdapter_eventCreateTensor_Parms), &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_Tensor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "CreateTensor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::BA_NeuralNetworkAdapter_eventCreateTensor_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics
	{
		struct BA_NeuralNetworkAdapter_eventGetInputShape_Parms
		{
			int32 Index;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventGetInputShape_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventGetInputShape_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// Input shape for YOLO 2 is (1x3x416x416) (batch x channels x height x width)\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "Input shape for YOLO 2 is (1x3x416x416) (batch x channels x height x width)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "GetInputShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::BA_NeuralNetworkAdapter_eventGetInputShape_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics
	{
		struct BA_NeuralNetworkAdapter_eventGetOutputShape_Parms
		{
			int32 Index;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventGetOutputShape_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventGetOutputShape_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// The output for YOLO 2 is a (1x125x13x13) tensor where 13x13 is the number of grid cells that the image gets divided into. \n// Each grid cell corresponds to 125 channels, made up of the 5 bounding boxes predicted by the grid cell and the 25 data elements that describe each bounding box (5x25=125).\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "The output for YOLO 2 is a (1x125x13x13) tensor where 13x13 is the number of grid cells that the image gets divided into.\nEach grid cell corresponds to 125 channels, made up of the 5 bounding boxes predicted by the grid cell and the 25 data elements that describe each bounding box (5x25=125)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "GetOutputShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::BA_NeuralNetworkAdapter_eventGetOutputShape_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics
	{
		struct BA_NeuralNetworkAdapter_eventGetRuntimeNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventGetRuntimeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "GetRuntimeNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::BA_NeuralNetworkAdapter_eventGetRuntimeNames_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics
	{
		struct BA_NeuralNetworkAdapter_eventNumInputs_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventNumInputs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// number of Input tensors\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "number of Input tensors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "NumInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::BA_NeuralNetworkAdapter_eventNumInputs_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics
	{
		struct BA_NeuralNetworkAdapter_eventNumOutputs_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventNumOutputs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// number of Output tensors\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "number of Output tensors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "NumOutputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::BA_NeuralNetworkAdapter_eventNumOutputs_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics
	{
		struct BA_NeuralNetworkAdapter_eventRunSync_Parms
		{
			TArray<FNeuralNetworkTensor> Outputs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralNetworkTensor, METADATA_PARAMS(nullptr, 0) }; // 1705193968
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventRunSync_Parms, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1705193968
	void Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BA_NeuralNetworkAdapter_eventRunSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BA_NeuralNetworkAdapter_eventRunSync_Parms), &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// Run a model and return the output tensors. Will run synchronously in game thread \n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "Run a model and return the output tensors. Will run synchronously in game thread" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "RunSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::BA_NeuralNetworkAdapter_eventRunSync_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics
	{
		struct BA_NeuralNetworkAdapter_eventSetInputs_Parms
		{
			TArray<FNeuralNetworkTensor> Inputs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralNetworkTensor, METADATA_PARAMS(nullptr, 0) }; // 1705193968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventSetInputs_Parms, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs_MetaData)) }; // 1705193968
	void Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BA_NeuralNetworkAdapter_eventSetInputs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BA_NeuralNetworkAdapter_eventSetInputs_Parms), &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// Set the Array of Tensors for Input\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "Set the Array of Tensors for Input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "SetInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::BA_NeuralNetworkAdapter_eventSetInputs_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics
	{
		struct BA_NeuralNetworkAdapter_eventTakeScreenshot_Parms
		{
			UCameraComponent* CameraComp;
			int32 Resolution;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_CameraComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventTakeScreenshot_Parms, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_CameraComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventTakeScreenshot_Parms, Resolution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BA_NeuralNetworkAdapter_eventTakeScreenshot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "BA Neural Network" },
		{ "Comment", "// Take a screenshot using the current camera components transform and PoV and return an array to be used as initializer for a Tensor\n" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
		{ "ToolTip", "Take a screenshot using the current camera components transform and PoV and return an array to be used as initializer for a Tensor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBA_NeuralNetworkAdapter, nullptr, "TakeScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::BA_NeuralNetworkAdapter_eventTakeScreenshot_Parms), Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBA_NeuralNetworkAdapter);
	UClass* Z_Construct_UClass_UBA_NeuralNetworkAdapter_NoRegister()
	{
		return UBA_NeuralNetworkAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateModel, "CreateModel" }, // 2505475113
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_CreateTensor, "CreateTensor" }, // 3711819643
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetInputShape, "GetInputShape" }, // 2905737381
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetOutputShape, "GetOutputShape" }, // 3888514694
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_GetRuntimeNames, "GetRuntimeNames" }, // 1466044685
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumInputs, "NumInputs" }, // 492566145
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_NumOutputs, "NumOutputs" }, // 1302211147
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_RunSync, "RunSync" }, // 3210479060
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_SetInputs, "SetInputs" }, // 2083264781
		{ &Z_Construct_UFunction_UBA_NeuralNetworkAdapter_TakeScreenshot, "TakeScreenshot" }, // 3738108169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "BA Neural Network" },
		{ "IncludePath", "BA_NeuralNetworkAdapter.h" },
		{ "ModuleRelativePath", "Public/BA_NeuralNetworkAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBA_NeuralNetworkAdapter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::ClassParams = {
		&UBA_NeuralNetworkAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBA_NeuralNetworkAdapter()
	{
		if (!Z_Registration_Info_UClass_UBA_NeuralNetworkAdapter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBA_NeuralNetworkAdapter.OuterSingleton, Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBA_NeuralNetworkAdapter.OuterSingleton;
	}
	template<> BASTIANRUNTIME_API UClass* StaticClass<UBA_NeuralNetworkAdapter>()
	{
		return UBA_NeuralNetworkAdapter::StaticClass();
	}
	UBA_NeuralNetworkAdapter::UBA_NeuralNetworkAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBA_NeuralNetworkAdapter);
	UBA_NeuralNetworkAdapter::~UBA_NeuralNetworkAdapter() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ScriptStructInfo[] = {
		{ FNeuralNetworkTensor::StaticStruct, Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics::NewStructOps, TEXT("NeuralNetworkTensor"), &Z_Registration_Info_UScriptStruct_NeuralNetworkTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralNetworkTensor), 1705193968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBA_NeuralNetworkAdapter, UBA_NeuralNetworkAdapter::StaticClass, TEXT("UBA_NeuralNetworkAdapter"), &Z_Registration_Info_UClass_UBA_NeuralNetworkAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBA_NeuralNetworkAdapter), 1857891218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_4180099735(TEXT("/Script/BastianRuntime"),
		Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
