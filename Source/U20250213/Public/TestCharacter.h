// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class U20250213_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	//Camera Boom
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "U|Test", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "U|Test", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> PlayerCamera;

	//UPROPERTY TEST
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "U|Test", Meta = (AllowPrivateAccess = "true"))
	float testLen;

	//Input
	UPROPERTY(EditDefaultsOnly, Category = "Input");
	TObjectPtr<UInputMappingContext> DefaultMapping;

	UPROPERTY(EditDefaultsOnly, Category = "Input");
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input");
	TObjectPtr<UInputAction> LookAction;

public:
	// Sets default values for this character's properties
	ATestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UFUNCTION TEST
	UFUNCTION(BlueprintCallable, Category = "U|Test")
	void CallTestFunc();

	UFUNCTION(BlueprintPure, Category = "U|Test")
	bool PureFunc();

	//BLUEPRINTPROPERTY TEST
	UFUNCTION(BlueprintImplementableEvent, Category = "U|Test")
	void MyBlueprintFunction();

	//Move and Look
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
