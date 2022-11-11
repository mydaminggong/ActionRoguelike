// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGameplayInterface.generated.h"

// This class does not need to be modified.
// UINTERFACE�಻��ʵ�ʵĽӿڣ�����һ���հ��࣬���Ĵ���ֻ��Ϊ����������淴��ϵͳȷ���ɼ���,����ʵ�ֵĽӿڱ�������ͬ��������������ĸ��"I"��ͷ��
UINTERFACE(MinimalAPI)
class USGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONROGUELIKE_API ISGameplayInterface	// ʵ�ʽӿ�����
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	// �����������̳иýӿڣ�����ʵ�ֵĺ�����
public:
	// BlueprintNativeEvent		�����η���ʾ�������Ա���ͼ����ʵ�֣���Ҳ�����б���ʵ�֡�
	// BlueprintCallable		��ʾ�ú������Ա�����ͼ�б�����
	UFUNCTION(BlueprintCallable ,BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
