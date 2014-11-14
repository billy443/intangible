// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Public/Practice.h"
#include "Practice.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodePractice() {}
	void APracticeCharacter::StaticRegisterNativesAPracticeCharacter()
	{
	}
	IMPLEMENT_CLASS(APracticeCharacter);
	void APracticeGameMode::StaticRegisterNativesAPracticeGameMode()
	{
	}
	IMPLEMENT_CLASS(APracticeGameMode);
	void ATrap::StaticRegisterNativesATrap()
	{
	}
	IMPLEMENT_CLASS(ATrap);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	PRACTICE_API class UClass* Z_Construct_UClass_APracticeCharacter_NoRegister();
	PRACTICE_API class UClass* Z_Construct_UClass_APracticeCharacter();
	PRACTICE_API class UClass* Z_Construct_UClass_APracticeGameMode_NoRegister();
	PRACTICE_API class UClass* Z_Construct_UClass_APracticeGameMode();
	PRACTICE_API class UClass* Z_Construct_UClass_ATrap_NoRegister();
	PRACTICE_API class UClass* Z_Construct_UClass_ATrap();
	PRACTICE_API class UPackage* Z_Construct_UPackage_Practice();
	UClass* Z_Construct_UClass_APracticeCharacter_NoRegister()
	{
		return APracticeCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APracticeCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_Practice();
			OuterClass = APracticeCharacter::StaticClass();
			UObjectForceRegistration(OuterClass);
			OuterClass->ClassFlags |= 0x00800080;


			UProperty* NewProp_CameraBoom = new(OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, APracticeCharacter), 0x00000000044a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
			UProperty* NewProp_SideViewCameraComponent = new(OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, APracticeCharacter), 0x00000000044a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
			OuterClass->ClassConfigName = FName(TEXT("Game"));
			OuterClass->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
			MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation AI|Navigation Pawn|Character|InternalEvents"));
			MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PracticeCharacter.h"));
			MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/PracticeCharacter.h"));
			MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
			MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("Public/PracticeCharacter.h"));
			MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
			MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
			MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/PracticeCharacter.h"));
			MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APracticeCharacter(Z_Construct_UClass_APracticeCharacter);
	UClass* Z_Construct_UClass_APracticeGameMode_NoRegister()
	{
		return APracticeGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APracticeGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_Practice();
			OuterClass = APracticeGameMode::StaticClass();
			UObjectForceRegistration(OuterClass);
			OuterClass->ClassFlags |= 0x008802A4;


			OuterClass->ClassConfigName = FName(TEXT("Game"));
			OuterClass->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
			MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
			MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PracticeGameMode.h"));
			MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/PracticeGameMode.h"));
			MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APracticeGameMode(Z_Construct_UClass_APracticeGameMode);
	UClass* Z_Construct_UClass_ATrap_NoRegister()
	{
		return ATrap::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrap()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_Practice();
			OuterClass = ATrap::StaticClass();
			UObjectForceRegistration(OuterClass);
			OuterClass->ClassFlags |= 0x00900080;


			UProperty* NewProp_RotationRate = new(OuterClass, TEXT("RotationRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(RotationRate, ATrap), 0x0000000000010001);
			UProperty* NewProp_TouchSphere = new(OuterClass, TEXT("TouchSphere"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(TouchSphere, ATrap), 0x00000000044b0009, Z_Construct_UClass_USphereComponent_NoRegister());
			OuterClass->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
			MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Trap.h"));
			MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Trap.h"));
			MetaData->SetValue(NewProp_RotationRate, TEXT("Category"), TEXT("Trap"));
			MetaData->SetValue(NewProp_RotationRate, TEXT("ModuleRelativePath"), TEXT("Public/Trap.h"));
			MetaData->SetValue(NewProp_TouchSphere, TEXT("Category"), TEXT("Trap"));
			MetaData->SetValue(NewProp_TouchSphere, TEXT("ModuleRelativePath"), TEXT("Public/Trap.h"));
#endif
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrap(Z_Construct_UClass_ATrap);
	UPackage* Z_Construct_UPackage_Practice()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Practice")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xE0E4EF11;
			Guid.B = 0x6142BA34;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif

