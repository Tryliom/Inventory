#include "StrengthPotion.h"

#include <iostream>
#include <ostream>

void StrengthPotion::Use()
{
	std::cout << "You drink the " << _name << " and gain " << _attack << " attack." << std::endl;
}
