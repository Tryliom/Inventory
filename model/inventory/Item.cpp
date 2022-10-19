#include "Item.h"

Item::Item(const std::string& name)
{
	_name = name;
}

Item::operator std::string()
{
	return _name;
}

