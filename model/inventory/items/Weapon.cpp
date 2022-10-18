#include "Weapon.h"

#include <iostream>

std::string Weapon::getWeaponTypeString() const
{
	std::unordered_map<WeaponType, std::string> _weaponTypeToString = {
		{ WeaponType::MELEE, "Melee" },
		{ WeaponType::RANGED, "Ranged" }
	};

	return _weaponTypeToString.at(_weaponType);
}

Weapon::Weapon(const std::string& name, int attackDamage, WeaponType weaponType) : Item(name)
{
	_attackDamage = attackDamage;
	_weaponType = weaponType;
}

void Weapon::Equip() const
{
	std::cout << "Equipped " << "a " << getWeaponTypeString() << " weapon named "
	          << _name << " with " << _attackDamage << " attack damage" << std::endl;
}

void Weapon::Use()
{
	std::cout << "Inflict " << _attackDamage << " attack damage with a " << _name << std::endl;
}
