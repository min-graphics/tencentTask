// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class UCustomCreateSessionCallbackProxy;
#ifdef NETSHOOT_CustomCreateSessionCallbackProxy_generated_h
#error "CustomCreateSessionCallbackProxy.generated.h already included, missing '#pragma once' in CustomCreateSessionCallbackProxy.h"
#endif
#define NETSHOOT_CustomCreateSessionCallbackProxy_generated_h

#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_SPARSE_DATA
#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateCustomSession);


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateCustomSession);


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomCreateSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UCustomCreateSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Netshoot"), NO_API) \
	DECLARE_SERIALIZER(UCustomCreateSessionCallbackProxy)


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUCustomCreateSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UCustomCreateSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Netshoot"), NO_API) \
	DECLARE_SERIALIZER(UCustomCreateSessionCallbackProxy)


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomCreateSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomCreateSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomCreateSessionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomCreateSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomCreateSessionCallbackProxy(UCustomCreateSessionCallbackProxy&&); \
	NO_API UCustomCreateSessionCallbackProxy(const UCustomCreateSessionCallbackProxy&); \
public:


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomCreateSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomCreateSessionCallbackProxy(UCustomCreateSessionCallbackProxy&&); \
	NO_API UCustomCreateSessionCallbackProxy(const UCustomCreateSessionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomCreateSessionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomCreateSessionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomCreateSessionCallbackProxy)


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_PRIVATE_PROPERTY_OFFSET
#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_32_PROLOG
#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_PRIVATE_PROPERTY_OFFSET \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_SPARSE_DATA \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_RPC_WRAPPERS \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_INCLASS \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_PRIVATE_PROPERTY_OFFSET \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_SPARSE_DATA \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_INCLASS_NO_PURE_DECLS \
	task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomCreateSessionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETSHOOT_API UClass* StaticClass<class UCustomCreateSessionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID task3_Source_Netshoot_Private_CustomCreateSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
