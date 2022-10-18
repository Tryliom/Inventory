#pragma once
#include "../Item.h"

class Map : public Item
{
public:
	Map() : Item("Map") {}

	void Use() override;
};

