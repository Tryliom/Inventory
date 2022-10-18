#pragma once
#include "../Item.h"

class Potion : public Item
{
private:

public:
	Potion(const std::string& name) : Item(name) {}
};

