#include "Backpack.h"

#include <iostream>

#include "items/potions/HealthPotion.h"
#include "items/potions/StrengthPotion.h"

Backpack::Backpack()
{
	_items = {};
	_equipedWeapon = nullptr;
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
	else
	{
		std::cout << "No health potions in backpack" << std::endl;
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
	else
	{
		std::cout << "No strength potions in backpack" << std::endl;
	}
}

void Backpack::EquipWeapon(Weapon* weapon)
{
	if (_equipedWeapon != nullptr)
	{
		std::cout << "You already have a weapon equipped!" << std::endl;
	}
	else if (weapon == nullptr)
	{
		std::cout << "This is not a weapon !" << std::endl;
	}
	else
	{
		_equipedWeapon = weapon;
		_equipedWeapon->Equip();
	}
}

void Backpack::UnequipWeapon()
{
	if (_equipedWeapon == nullptr)
	{
		std::cout << "You don't have a weapon equipped!" << std::endl;
	}
	else
	{
		_equipedWeapon = nullptr;
		std::cout << "You unequipped your weapon!" << std::endl;
	}
}

void Backpack::UseWeapon() const
{
	if (_equipedWeapon != nullptr)
	{
		_equipedWeapon->Use();
	}
	else
	{
		std::cout << "You don't have a weapon equipped!" << std::endl;
	}
}

void Backpack::ShowItems() const
{
	std::cout << "Items in backpack:" << std::endl;

	for (auto* item : _items)
	{
		std::cout << static_cast<std::string>(*item) << std::endl;
	}
}
