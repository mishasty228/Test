// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/TestPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPawn() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_ATestPawn_NoRegister();
	TEST_API UClass* Z_Construct_UClass_ATestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Test();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATestPawn::StaticRegisterNativesATestPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPawn);
	UClass* Z_Construct_UClass_ATestPawn_NoRegister()
	{
		return ATestPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestPawn.h" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "TestPawn" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPawn_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPawn, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::NewProp_HitMultiplier_MetaData[] = {
		{ "Category", "TestPawn" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPawn_Statics::NewProp_HitMultiplier = { "HitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPawn, HitMultiplier), METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::NewProp_HitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::NewProp_HitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::NewProp_Cube_MetaData[] = {
		{ "Category", "TestPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPawn_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPawn, Cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::NewProp_Cube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::NewProp_Cube_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "TestPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "TestPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPawn_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPawn_Statics::NewProp_HitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPawn_Statics::NewProp_Cube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPawn_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPawn_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPawn_Statics::ClassParams = {
		&ATestPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPawn()
	{
		if (!Z_Registration_Info_UClass_ATestPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPawn.OuterSingleton, Z_Construct_UClass_ATestPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPawn.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATestPawn>()
	{
		return ATestPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPawn);
	struct Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPawn, ATestPawn::StaticClass, TEXT("ATestPawn"), &Z_Registration_Info_UClass_ATestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPawn), 1678268272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPawn_h_1510267817(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_5_0_Source_Test_TestPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
