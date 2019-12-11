// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEGAS_SimpleGASCharacter_generated_h
#error "SimpleGASCharacter.generated.h already included, missing '#pragma once' in SimpleGASCharacter.h"
#endif
#define SIMPLEGAS_SimpleGASCharacter_generated_h

#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_RPC_WRAPPERS
#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleGASCharacter(); \
	friend struct Z_Construct_UClass_ASimpleGASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASimpleGASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleGAS"), NO_API) \
	DECLARE_SERIALIZER(ASimpleGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASimpleGASCharacter*>(this); }


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASimpleGASCharacter(); \
	friend struct Z_Construct_UClass_ASimpleGASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASimpleGASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleGAS"), NO_API) \
	DECLARE_SERIALIZER(ASimpleGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASimpleGASCharacter*>(this); }


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimpleGASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimpleGASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleGASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleGASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleGASCharacter(ASimpleGASCharacter&&); \
	NO_API ASimpleGASCharacter(const ASimpleGASCharacter&); \
public:


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleGASCharacter(ASimpleGASCharacter&&); \
	NO_API ASimpleGASCharacter(const ASimpleGASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleGASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleGASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleGASCharacter)


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASimpleGASCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASimpleGASCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(ASimpleGASCharacter, AbilitySystem); }


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_20_PROLOG
#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_RPC_WRAPPERS \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_INCLASS \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_INCLASS_NO_PURE_DECLS \
	SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEGAS_API UClass* StaticClass<class ASimpleGASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleGAS_Source_SimpleGAS_SimpleGASCharacter_h


#define FOREACH_ENUM_ABILITYINPUT(op) \
	op(AbilityInput::Attack) \
	op(AbilityInput::Movement) \
	op(AbilityInput::Defense) \
	op(AbilityInput::UseAbility1) 

enum class AbilityInput : uint8;
template<> SIMPLEGAS_API UEnum* StaticEnum<AbilityInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
