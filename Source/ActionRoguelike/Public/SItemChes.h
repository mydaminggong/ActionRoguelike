// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SItemChes.generated.h"

class UStaticMeshComponent;

UCLASS()
class ACTIONROGUELIKE_API ASItemChes : public AActor, public ISGameplayInterface	// 宝箱类 继承 接口类 ISGameplayInterface（游戏玩法接口），然后在该类中实现接口中的声明函数 Interact（交互）
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASItemChes();

protected:
	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UStaticMeshComponent* LidMesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere)		// EditAnywhere 修饰符表示该变量在编辑器中可见。
	float TargetPitch;			// 声明一个浮点变量，用来处理宝箱打开角度。

	// BlueprintNativeEvent 修饰的接口函数在本机实现，需要添加后缀"_Implementation"，在蓝图中可以选择要不要重写该函数。
	// 声明Interact（交互）函数的实现。
	void Interact_Implementation(APawn* InstigatorPawn) override;

};
