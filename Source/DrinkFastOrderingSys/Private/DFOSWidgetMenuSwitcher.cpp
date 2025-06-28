// Fill out your copyright notice in the Description page of Project Settings.


#include "DFOSWidgetMenuSwitcher.h"

FString UDFOSWidgetMenuSwitcher::OrderConfirmed(FString drinkType, FString withSugar, FString withMilk)
{	
	FString completeOrder = drinkType + withSugar + withMilk;

	return completeOrder;
}
