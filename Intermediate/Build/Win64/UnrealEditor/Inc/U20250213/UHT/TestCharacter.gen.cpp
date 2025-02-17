// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U20250213/Public/TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
U20250213_API UClass* Z_Construct_UClass_ATestCharacter();
U20250213_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_U20250213();
// End Cross Module References

// Begin Class ATestCharacter Function CallTestFunc
struct Z_Construct_UFunction_ATestCharacter_CallTestFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "U|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION TEST\n" },
#endif
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION TEST" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_CallTestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "CallTestFunc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_CallTestFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_CallTestFunc_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestCharacter_CallTestFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_CallTestFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execCallTestFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallTestFunc();
	P_NATIVE_END;
}
// End Class ATestCharacter Function CallTestFunc

// Begin Class ATestCharacter Function MyBlueprintFunction
static FName NAME_ATestCharacter_MyBlueprintFunction = FName(TEXT("MyBlueprintFunction"));
void ATestCharacter::MyBlueprintFunction()
{
	ProcessEvent(FindFunctionChecked(NAME_ATestCharacter_MyBlueprintFunction),NULL);
}
struct Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "U|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BLUEPRINTPROPERTY TEST\n" },
#endif
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BLUEPRINTPROPERTY TEST" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "MyBlueprintFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATestCharacter Function MyBlueprintFunction

// Begin Class ATestCharacter Function PureFunc
struct Z_Construct_UFunction_ATestCharacter_PureFunc_Statics
{
	struct TestCharacter_eventPureFunc_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "U|Test" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TestCharacter_eventPureFunc_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TestCharacter_eventPureFunc_Parms), &Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "PureFunc", nullptr, nullptr, Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::TestCharacter_eventPureFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::TestCharacter_eventPureFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestCharacter_PureFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_PureFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execPureFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PureFunc();
	P_NATIVE_END;
}
// End Class ATestCharacter Function PureFunc

// Begin Class ATestCharacter
void ATestCharacter::StaticRegisterNativesATestCharacter()
{
	UClass* Class = ATestCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallTestFunc", &ATestCharacter::execCallTestFunc },
		{ "PureFunc", &ATestCharacter::execPureFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
{
	return ATestCharacter::StaticClass();
}
struct Z_Construct_UClass_ATestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestCharacter.h" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "U|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Boom\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Boom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "U|Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_testLen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "U|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY TEST\n" },
#endif
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY TEST" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMapping_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input\n" },
#endif
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_testLen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestCharacter_CallTestFunc, "CallTestFunc" }, // 4069302709
		{ &Z_Construct_UFunction_ATestCharacter_MyBlueprintFunction, "MyBlueprintFunction" }, // 4129455720
		{ &Z_Construct_UFunction_ATestCharacter_PureFunc, "PureFunc" }, // 819799878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_testLen = { "testLen", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, testLen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testLen_MetaData), NewProp_testLen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_DefaultMapping = { "DefaultMapping", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, DefaultMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMapping_MetaData), NewProp_DefaultMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_testLen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_DefaultMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_U20250213,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
	&ATestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestCharacter()
{
	if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
}
template<> U20250213_API UClass* StaticClass<ATestCharacter>()
{
	return ATestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
ATestCharacter::~ATestCharacter() {}
// End Class ATestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 599069744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_759660980(TEXT("/Script/U20250213"),
	Z_CompiledInDeferFile_FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
