// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGAS/SimpleGASCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGASCharacter() {}
// Cross Module References
	SIMPLEGAS_API UFunction* Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleGAS();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	SIMPLEGAS_API UEnum* Z_Construct_UEnum_SimpleGAS_AbilityInput();
	SIMPLEGAS_API UClass* Z_Construct_UClass_ASimpleGASCharacter_NoRegister();
	SIMPLEGAS_API UClass* Z_Construct_UClass_ASimpleGASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SIMPLEGAS_API UClass* Z_Construct_UClass_UWarlockAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleGAS_eventAbilityComponentSetDelegate_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SimpleGAS_eventAbilityComponentSetDelegate_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleGAS, nullptr, "AbilityComponentSetDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SimpleGAS_eventAbilityComponentSetDelegate_Parms), Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* AbilityInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleGAS_AbilityInput, Z_Construct_UPackage__Script_SimpleGAS(), TEXT("AbilityInput"));
		}
		return Singleton;
	}
	template<> SIMPLEGAS_API UEnum* StaticEnum<AbilityInput>()
	{
		return AbilityInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AbilityInput(AbilityInput_StaticEnum, TEXT("/Script/SimpleGAS"), TEXT("AbilityInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleGAS_AbilityInput_Hash() { return 551887389U; }
	UEnum* Z_Construct_UEnum_SimpleGAS_AbilityInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleGAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AbilityInput"), 0, Get_Z_Construct_UEnum_SimpleGAS_AbilityInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AbilityInput::Attack", (int64)AbilityInput::Attack },
				{ "AbilityInput::Movement", (int64)AbilityInput::Movement },
				{ "AbilityInput::Defense", (int64)AbilityInput::Defense },
				{ "AbilityInput::UseAbility1", (int64)AbilityInput::UseAbility1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.DisplayName", "Attack" },
				{ "Attack.Name", "AbilityInput::Attack" },
				{ "BlueprintType", "true" },
				{ "Defense.DisplayName", "Defense" },
				{ "Defense.Name", "AbilityInput::Defense" },
				{ "ModuleRelativePath", "SimpleGASCharacter.h" },
				{ "Movement.DisplayName", "Movement" },
				{ "Movement.Name", "AbilityInput::Movement" },
				{ "UseAbility1.DisplayName", "Use Spell 1" },
				{ "UseAbility1.Name", "AbilityInput::UseAbility1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleGAS,
				nullptr,
				"AbilityInput",
				"AbilityInput",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASimpleGASCharacter::StaticRegisterNativesASimpleGASCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASimpleGASCharacter_NoRegister()
	{
		return ASimpleGASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleGASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilitySystemComponentSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilitySystemComponentSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleGASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleGAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SimpleGASCharacter.h" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_OnAbilitySystemComponentSet_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_OnAbilitySystemComponentSet = { "OnAbilitySystemComponentSet", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, OnAbilitySystemComponentSet), Z_Construct_UDelegateFunction_SimpleGAS_AbilityComponentSetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_OnAbilitySystemComponentSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_OnAbilitySystemComponentSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, StartupEffects), METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, AttributeSet), Z_Construct_UClass_UWarlockAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, Abilities), METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimpleGASCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleGASCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleGASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_OnAbilitySystemComponentSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_StartupEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleGASCharacter_Statics::NewProp_CameraBoom,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASimpleGASCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASimpleGASCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleGASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleGASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimpleGASCharacter_Statics::ClassParams = {
		&ASimpleGASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASimpleGASCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimpleGASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleGASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleGASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimpleGASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimpleGASCharacter, 2774139323);
	template<> SIMPLEGAS_API UClass* StaticClass<ASimpleGASCharacter>()
	{
		return ASimpleGASCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimpleGASCharacter(Z_Construct_UClass_ASimpleGASCharacter, &ASimpleGASCharacter::StaticClass, TEXT("/Script/SimpleGAS"), TEXT("ASimpleGASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleGASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
