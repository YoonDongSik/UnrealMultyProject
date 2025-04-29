#include "ItemDataAsset.h"

UItemDataAsset::UItemDataAsset()
{
	ItemName = FText::FromString(TEXT("아이템"));
	ItemDescription = FText::FromString(TEXT("아이템 설명"));
	ItemIcon = nullptr;
	ItemMesh = nullptr;

	// ✅ 기본 타입 None
	ItemType = EItemType::None;

	ItemScale = FVector(1.0f, 1.0f, 1.0f);
}
