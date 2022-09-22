// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
	//创建静态网格体对象
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	// 设置物理碰撞模拟为真
	MeshComp->SetSimulatePhysics(true);
	// 将其设置在根组件上
	RootComponent = MeshComp;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

