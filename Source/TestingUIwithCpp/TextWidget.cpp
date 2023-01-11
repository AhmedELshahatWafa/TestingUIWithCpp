// Fill out your copyright notice in the Description page of Project Settings.


#include "TextWidget.h"
#include "Runtime/UMG/Public/UMG.h"


void UTextWidget::NativeConstruct()
{
	Super::NativeConstruct();

	GenerateRandomNumber();

	GenerateButton->OnClicked.AddUniqueDynamic(this, &UTextWidget::OnGenerateButtonClicked);
}


void UTextWidget::GenerateRandomNumber()
{
	int32 RandomNumber = FMath::RandRange(0, 100);

	//RandomNumberLabel->SetText(FText::AsNumber(RandomNumber));


	RandomNumberLabel->SetText(InputText->Text);
}

void UTextWidget::OnGenerateButtonClicked()
{
	UTextWidget::GenerateRandomNumber();
}
