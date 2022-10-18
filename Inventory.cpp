#include "model/inventory/Backpack.h"
#include "model/inventory/items/Map.h"
#include "model/inventory/items/Weapon.h"
#include "model/inventory/items/potions/HealthPotion.h"
#include "model/inventory/items/potions/StrengthPotion.h"

int main()
{
	Backpack backpack;

	backpack.AddItem(new Sword());
	backpack.AddItem(new Bow());
	backpack.AddItem(new HealthPotion(50));
	backpack.AddItem(new StrengthPotion(10));
	backpack.AddItem(new Map());

	backpack.GetItem<Sword>()->Equip();
	backpack.GetItem<Bow>()->Equip();

	backpack.GetItem<Sword>()->Use();
	backpack.GetItem<Bow>()->Use();

	backpack.UseHealthPotion();
	backpack.UseStrengthPotion();

	backpack.GetItem<Map>()->Use();
}
