// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetBlueprint.h"
#include "Components/WidgetSwitcher.h"
#include "DFOSWidgetMenuSwitcher.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnOrderConfirmed, FString, DrinkType, FString, WithSugar, FString, WithMilk);

UCLASS()
class UDFOSWidgetMenuSwitcher : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FOnOrderConfirmed OnOrderConfirmed;

private:

	UFUNCTION(BlueprintCallable)
	FString OrderConfirmed(FString drinkType, FString withSugar, FString withMilk);
};
