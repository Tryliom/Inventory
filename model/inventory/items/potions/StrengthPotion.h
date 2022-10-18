#pragma once
#include "../Potion.h"

class StrengthPotion : public Potion
{
private:
	int _attack;

public:
	StrengthPotion(int attack) : Potion("Strength Potion"), _attack(attack) {}

	void Use() override;
};

