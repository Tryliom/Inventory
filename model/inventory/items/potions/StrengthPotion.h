#pragma once
#include "../Potion.h"

class StrengthPotion : public Potion
{
private:
	int _attack;

public:
	explicit StrengthPotion(const int attack) : Potion("Strength Potion"), _attack(attack) {}

	void Use() override;

	explicit operator std::string() override;
};

