#include "StrengthPotion.h"

#include <iostream>
#include <ostream>

void StrengthPotion::Use()
{
	std::cout << "You drink the " << _name << " and gain " << _attack << " attack." << std::endl;
}

StrengthPotion::operator std::string()
{
	return _name + " - " + std::to_string(_attack) + " attack";
}
