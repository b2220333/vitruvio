﻿#pragma once

#include "IDetailCustomization.h"
#include "PRTActor.h"

class FPRTActorDetails : public IDetailCustomization
{
public:
	FPRTActorDetails();
	~FPRTActorDetails();

	static TSharedRef<IDetailCustomization> MakeInstance();

	void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	void CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder) override;

	void OnAttributesChanged(UObject* Object, struct FPropertyChangedEvent& Event);

private:
	TArray<TWeakObjectPtr<>> ObjectsBeingCustomized;
	TWeakPtr<IDetailLayoutBuilder> CachedDetailBuilder;
	TSharedPtr<SWidget> ColorPickerParentWidget;
};

template <typename T> class SPropertyComboBox : public SComboBox<TSharedPtr<T>>
{
public:
	SLATE_BEGIN_ARGS(SPropertyComboBox)
	{
	}
	SLATE_ATTRIBUTE(TArray<TSharedPtr<T>>, ComboItemList)
	SLATE_EVENT(SComboBox<TSharedPtr<T>>::FOnSelectionChanged, OnSelectionChanged)
	SLATE_ATTRIBUTE(TSharedPtr<T>, InitialValue)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

private:
	TArray<TSharedPtr<T>> ComboItemList;

	TSharedRef<SWidget> OnGenerateComboWidget(TSharedPtr<T> InValue) const;
};
