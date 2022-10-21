// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SItemChes.generated.h"

class UStaticMeshComponent;

UCLASS()
class ACTIONROGUELIKE_API ASItemChes : public AActor, public ISGameplayInterface	// ������ �̳� �ӿ��� ISGameplayInterface����Ϸ�淨�ӿڣ���Ȼ���ڸ�����ʵ�ֽӿ��е��������� Interact��������
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

	UPROPERTY(EditAnywhere)		// EditAnywhere ���η���ʾ�ñ����ڱ༭���пɼ���
	float TargetPitch;			// ����һ���������������������򿪽Ƕȡ�

	// BlueprintNativeEvent ���εĽӿں����ڱ���ʵ�֣���Ҫ��Ӻ�׺"_Implementation"������ͼ�п���ѡ��Ҫ��Ҫ��д�ú�����
	// ����Interact��������������ʵ�֡�
	void Interact_Implementation(APawn* InstigatorPawn) override;

};
