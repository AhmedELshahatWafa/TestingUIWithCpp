// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextWidget.generated.h"


/**
 * 
 */
UCLASS()
class TESTINGUIWITHCPP_API UTextWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	void GenerateRandomNumber();


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel;

	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* InputText;


	UPROPERTY(meta = (BindWidget))
		class UButton* GenerateButton;

	UFUNCTION()
		void OnGenerateButtonClicked();




	void NativeConstruct() override;
};
