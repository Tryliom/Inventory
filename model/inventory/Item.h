#pragma once
#include <string>

class Item
{
protected:
	std::string _name;

public:
	explicit Item(const std::string& name);

	virtual void Use() = 0;

	explicit virtual operator std::string();
};

