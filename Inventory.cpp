#include <iostream>
#include <ostream>

#include "model/inventory/Backpack.h"
#include "model/inventory/items/Map.h"
#include "model/inventory/items/Weapon.h"
#include "model/inventory/items/potions/HealthPotion.h"
#include "model/inventory/items/potions/StrengthPotion.h"

int main()
{
	Backpack backpack;

	// Add items to backpack
	backpack.AddItem(new Sword());
	backpack.AddItem(new HealthPotion(50));
	backpack.AddItem(new StrengthPotion(10));
	backpack.AddItem(new Map("Treasure map"));

	// Show items in the backpack
	backpack.ShowItems();

	std::cout << std::endl << std::endl;

	// Try to use a weapon while none is equipped
	backpack.UseWeapon();
	// Equip a sword found in the backpack
	backpack.EquipWeapon(backpack.GetItem<Sword>());
	// Use the newly equipped sword
	backpack.UseWeapon();

	std::cout << std::endl << std::endl;

	// Unequip the sword
	backpack.UnequipWeapon();
	// Try to equip a bow while there is no bow in the backpack
	backpack.EquipWeapon(backpack.GetItem<Bow>());
	// Add a bow in the backpack
	backpack.AddItem(new Bow());
	// Equip the bow
	backpack.EquipWeapon(backpack.GetItem<Bow>());
	// Use the bow
	backpack.UseWeapon();
	// Try to equip a sword while a bow is already equipped
	backpack.EquipWeapon(backpack.GetItem<Sword>());

	std::cout << std::endl << std::endl;

	// Use health and strength potions
	backpack.UseHealthPotion();
	backpack.UseStrengthPotion();

	// Use incorrectly health and strength potions, there are no potions in backpack
	backpack.UseHealthPotion();
	backpack.UseStrengthPotion();

	std::cout << std::endl << std::endl;

	// Use the map
	backpack.GetItem<Map>()->Use();
}
