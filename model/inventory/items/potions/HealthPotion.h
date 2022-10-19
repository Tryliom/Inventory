#pragma once
#include "../Potion.h"

class HealthPotion : public Potion
{
private:
	int _hp;

public:
	HealthPotion(int hp) : Potion("Health Potion"), _hp(hp) {}

	void Use() override;

	explicit operator std::string() override;
};

