// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netshoot/Private/CustomCreateSessionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCreateSessionCallbackProxy() {}
// Cross Module References
	NETSHOOT_API UClass* Z_Construct_UClass_UCustomCreateSessionCallbackProxy_NoRegister();
	NETSHOOT_API UClass* Z_Construct_UClass_UCustomCreateSessionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_Netshoot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCustomCreateSessionCallbackProxy::execCreateCustomSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomCreateSessionCallbackProxy**)Z_Param__Result=UCustomCreateSessionCallbackProxy::CreateCustomSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_bUseLAN);
		P_NATIVE_END;
	}
	void UCustomCreateSessionCallbackProxy::StaticRegisterNativesUCustomCreateSessionCallbackProxy()
	{
		UClass* Class = UCustomCreateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCustomSession", &UCustomCreateSessionCallbackProxy::execCreateCustomSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics
	{
		struct CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 PublicConnections;
			bool bUseLAN;
			UCustomCreateSessionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms), &Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms, ReturnValue), Z_Construct_UClass_UCustomCreateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_PublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Creates a session with the default online subsystem\n" },
		{ "ModuleRelativePath", "Private/CustomCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Creates a session with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomCreateSessionCallbackProxy, nullptr, "CreateCustomSession", nullptr, nullptr, sizeof(CustomCreateSessionCallbackProxy_eventCreateCustomSession_Parms), Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomCreateSessionCallbackProxy_NoRegister()
	{
		return UCustomCreateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Netshoot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomCreateSessionCallbackProxy_CreateCustomSession, "CreateCustomSession" }, // 293485058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomCreateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Private/CustomCreateSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was created successfully\n" },
		{ "ModuleRelativePath", "Private/CustomCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was created successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomCreateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error creating the session\n" },
		{ "ModuleRelativePath", "Private/CustomCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error creating the session" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomCreateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCreateSessionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::ClassParams = {
		&UCustomCreateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomCreateSessionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomCreateSessionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomCreateSessionCallbackProxy, 2621918465);
	template<> NETSHOOT_API UClass* StaticClass<UCustomCreateSessionCallbackProxy>()
	{
		return UCustomCreateSessionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomCreateSessionCallbackProxy(Z_Construct_UClass_UCustomCreateSessionCallbackProxy, &UCustomCreateSessionCallbackProxy::StaticClass, TEXT("/Script/Netshoot"), TEXT("UCustomCreateSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCreateSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
