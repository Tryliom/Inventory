#pragma once
#include "Item.h"

#include <vector>

class Backpack
{
private:
	std::vector<Item*> _items;

public:
	Backpack();

	void AddItem(Item* item);
	void RemoveItem(Item* item);

	void UseHealthPotion();
	void UseStrengthPotion();

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

