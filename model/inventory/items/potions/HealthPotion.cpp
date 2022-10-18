#include "HealthPotion.h"

#include <iostream>
#include <ostream>

void HealthPotion::Use()
{
	std::cout << "You drink the " << _name << " and gain " << _hp << " health." << std::endl;
}
