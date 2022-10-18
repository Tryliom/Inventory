#pragma once
#include "../Item.h"

#include <string>
#include <unordered_map>

enum class WeaponType
{
	MELEE,
	RANGED
};

class Weapon : public Item
{
protected:
	int _attackDamage;
	WeaponType _weaponType;

	std::string getWeaponTypeString() const;
public:
	Weapon(const std::string& name, int attackDamage, WeaponType weaponType);

	void Equip() const;
	void Use() override;
};

class Sword : public Weapon
{
public:
	Sword() : Weapon("Sword", 10, WeaponType::MELEE) {}
};

class Bow : public Weapon
{
public:
	Bow() : Weapon("Bow", 5, WeaponType::RANGED) {}
};