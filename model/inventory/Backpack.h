#pragma once
#include "Item.h"

#include <vector>

#include "items/Weapon.h"

class Backpack
{
private:
	std::vector<Item*> _items;
	Weapon* _equipedWeapon;

public:
	Backpack();

	void AddItem(Item* item);
	void RemoveItem(Item* item);

	void UseHealthPotion();
	void UseStrengthPotion();

	void EquipWeapon(Weapon* weapon);
	void UnequipWeapon();
	void UseWeapon() const;

	void ShowItems() const;

	template<class T>
	T* GetItem()
	{
		for (Item* item : _items)
		{
			T* castedItem = dynamic_cast<T*>(item);
			if (castedItem != nullptr)
			{
				return castedItem;
			}
		}

		return nullptr;
	}
};

