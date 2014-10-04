

#pragma once

#include "GameFramework/Actor.h"
#include "Trap.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICE_API ATrap : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Trap) 
	TSubobjectPtr<USphereComponent> TouchSphere;

	UPROPERTY(EditDefaultsOnly, Category = Trap)
	float RotationRate;


	virtual void Tick(float DeltaTime) OVERRIDE;
	
};
