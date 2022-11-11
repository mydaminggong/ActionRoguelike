// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGameplayInterface.generated.h"

// This class does not need to be modified.
// UINTERFACE类不是实际的接口；它是一个空白类，它的存在只是为了向虚幻引擎反射系统确保可见性,其他实现的接口必须有相同的类名，且首字母以"I"开头。
UINTERFACE(MinimalAPI)
class USGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONROGUELIKE_API ISGameplayInterface	// 实际接口名字
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	// 在这里声明继承该接口，必须实现的函数。
public:
	// BlueprintNativeEvent		该修饰符表示函数可以被蓝图覆盖实现，但也可以有本地实现。
	// BlueprintCallable		表示该函数可以被在蓝图中被调用
	UFUNCTION(BlueprintCallable ,BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
