// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// #include "Components/SphereComponent.h"
// #include "GameFramework/ProjectileMovementComponent.h"
// #include "Particles/ParticleSystemComponent.h"
#include "SMagicProjectile.generated.h"


class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent; 

UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMagicProjectile();

protected:

	// 添加球形组件
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	// 添加物体移动组件
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;

	// 添加系统特效组件
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* EffectComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
