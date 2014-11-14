// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef PRACTICE_PracticeCharacter_generated_h
#error "PracticeCharacter.generated.h already included, missing '#pragma once' in PracticeCharacter.h"
#endif
#define PRACTICE_PracticeCharacter_generated_h

#define APracticeCharacter_EVENTPARMS
#define APracticeCharacter_RPC_WRAPPERS
#define APracticeCharacter_CALLBACK_WRAPPERS
#define APracticeCharacter_INCLASS \
	private: \
	static void StaticRegisterNativesAPracticeCharacter(); \
	friend PRACTICE_API class UClass* Z_Construct_UClass_APracticeCharacter(); \
	public: \
	DECLARE_CLASS(APracticeCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, Practice, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API APracticeCharacter(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(APracticeCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME APracticeCharacter


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
APracticeCharacter_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	APracticeCharacter_RPC_WRAPPERS \
	APracticeCharacter_CALLBACK_WRAPPERS \
	APracticeCharacter_INCLASS \
public:


