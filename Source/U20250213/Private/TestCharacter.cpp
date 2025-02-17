// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set CameraBoom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetRelativeRotation(FRotator(-30.0f, 20.0f, 0.0f));

	//Camera Attach to Boom
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	
	//Attach to Any Socket
	//PlayerCamera->SetupAttachment(GetMesh(), FName("RootSocket"));

}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	MyBlueprintFunction();

	UE_LOG(
		LogTemp, Warning,
		TEXT("BeginPlay")
	);
	UE_LOG(
		LogTemp, Warning,
		TEXT("CameraBoom: TargetArmLength: %f"),
		CameraBoom->TargetArmLength
	);
	GEngine->AddOnScreenDebugMessage(
		-1, 5.f, FColor::Green,
		FString::Printf(
			TEXT("CameraBoom: RelativeRotation: TEST")
		)
	);
}

void ATestCharacter::CallTestFunc()
{
	UE_LOG(LogTemp, Warning, TEXT("CallTestFunc"));
}

bool ATestCharacter::PureFunc()
{
	return false;
}

//void ATestCharacter::MyBlueprintFunc()
//{
//	UE_LOG(LogTemp, Warning, TEXT("MyBlueprintEvent"));
//}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

