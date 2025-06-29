// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "DFOSViewModel.generated.h"

/**
 * 
 */
UCLASS()
class DRINKFASTORDERINGSYS_API UDFOSViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
	FString SelectedDrink;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
	bool bAddSugar;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
	bool bAddMilk;

public:

	/*SelectedDrink*/

	void SetSelectedDrink(FString NewSelectedDrink)
	{
		UE_MVVM_SET_PROPERTY_VALUE(SelectedDrink, NewSelectedDrink);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(OrderSummary);
	}

	FString GetSelectedDrink() const
	{
		return SelectedDrink;
	}

	/*bAddSugar*/

	void SetbAddSugar(bool NewbAddSugar)
	{
		UE_MVVM_SET_PROPERTY_VALUE(bAddSugar, NewbAddSugar);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(OrderSummary);
	}

	bool GetbAddSugar() const
	{
		return bAddSugar;
	}

	/*bAddMilk*/

	void SetbAddMilk(bool NewbAddMilk)
	{
		UE_MVVM_SET_PROPERTY_VALUE(bAddMilk, NewbAddMilk);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(OrderSummary);
	}

	bool GetbAddMilk() const
	{
		return bAddMilk;
	}

	/*OrderSummary*/

	UFUNCTION(BlueprintPure, FieldNotify)
	FString OrderSummary() const
	{
		return "Your order is " + GetSelectedDrink() + (GetbAddSugar() ? TEXT(" with sugar") : TEXT(" without sugar")) + (GetbAddMilk() ? TEXT(" and with milk") : TEXT(" and without milk"));
	}
};
