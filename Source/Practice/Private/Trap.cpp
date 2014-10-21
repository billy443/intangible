

#include "Practice.h"
#include "Trap.h"


ATrap::ATrap(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PrimaryActorTick.bCanEverTick = true;

	TouchSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("TouchSphereComponent"));
	TouchSphere->SetSphereRadius(20.f, false);
	RootComponent = TouchSphere;

	RotationRate = 180.f;

}

void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator MyRot = GetActorRotation();
	MyRot.Yaw += RotationRate * DeltaTime;
	SetActorRotation(MyRot);
}
