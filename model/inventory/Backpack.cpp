#include "Backpack.h"

#include "items/potions/HealthPotion.h"
#include "items/potions/StrengthPotion.h"

Backpack::Backpack()
{
	_items = {};
}

void Backpack::AddItem(Item* item)
{
	_items.emplace_back(item);
}

void Backpack::RemoveItem(Item* item)
{
	_items.erase(std::remove(_items.begin(), _items.end(), item), _items.end());
}

void Backpack::UseHealthPotion()
{
	auto* healthPotion = GetItem<HealthPotion>();

	if (healthPotion != nullptr)
	{
		healthPotion->Use();
		RemoveItem(healthPotion);
	}
}

void Backpack::UseStrengthPotion()
{
	auto* strengthPotion = GetItem<StrengthPotion>();

	if (strengthPotion != nullptr)
	{
		strengthPotion->Use();
		RemoveItem(strengthPotion);
	}
}
