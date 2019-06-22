// Copyright Ali El Saleh 2019

#pragma once

#include "Blueprint/UserWidget.h"
#include "MenuSetting.generated.h"

/**
 * Base class for any menu setting type
 */
UCLASS()
class MENUSYSTEM_API UMenuSetting : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void Apply();

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Video Setting")
		FText SettingLabel;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Video Setting")
		FText SettingTooltipText;
};
