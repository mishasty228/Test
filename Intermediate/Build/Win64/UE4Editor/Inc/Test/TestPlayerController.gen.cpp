// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/TestPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayerController() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_ATestPlayerController_NoRegister();
	TEST_API UClass* Z_Construct_UClass_ATestPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void ATestPlayerController::StaticRegisterNativesATestPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATestPlayerController_NoRegister()
	{
		return ATestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed_4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestPlayerController.h" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1 = { "Speed_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_1), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2 = { "Speed_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_2), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3 = { "Speed_3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_3), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4 = { "Speed_4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_4), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerController_Statics::ClassParams = {
		&ATestPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestPlayerController, 1549428251);
	template<> TEST_API UClass* StaticClass<ATestPlayerController>()
	{
		return ATestPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestPlayerController(Z_Construct_UClass_ATestPlayerController, &ATestPlayerController::StaticClass, TEXT("/Script/Test"), TEXT("ATestPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
