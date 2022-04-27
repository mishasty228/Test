// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/TestPlayerController.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPlayerController);
	UClass* Z_Construct_UClass_ATestPlayerController_NoRegister()
	{
		return ATestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_4_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed_4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TestPlayerController.h" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1 = { "Speed_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_1), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2 = { "Speed_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_2), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3 = { "Speed_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_3), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData[] = {
		{ "Category", "TestPlayerController" },
		{ "ModuleRelativePath", "TestPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4 = { "Speed_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPlayerController, Speed_4), METADATA_PARAMS(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerController_Statics::NewProp_Speed_4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerController_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton, Z_Construct_UClass_ATestPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATestPlayerController>()
	{
		return ATestPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerController);
	struct Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayerController, ATestPlayerController::StaticClass, TEXT("ATestPlayerController"), &Z_Registration_Info_UClass_ATestPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayerController), 2858799029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPlayerController_h_2059223441(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
