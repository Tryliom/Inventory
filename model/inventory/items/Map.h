#pragma once
#include "../Item.h"

class Map : public Item
{
public:
	explicit Map(const std::string& name) : Item(name) {}

	void Use() override;
};

