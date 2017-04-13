// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Slate/SlateBrushAsset.h"

class FAssetTypeActions_SlateBrush : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_SlateBrush", "Slate Brush"); }
	virtual FColor GetTypeColor() const override { return FColor(105, 165, 60); }
	virtual UClass* GetSupportedClass() const override { return USlateBrushAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::UI; }
	virtual bool HasActions ( const TArray<UObject*>& InObjects ) const override { return false; }
};