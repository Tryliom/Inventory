#include "Map.h"

#include <iostream>

std::string treasureMap = R"(
	===============================================
	|                                             |
	|                                             |
	|                                             |
	|                                             |
	|       o <- you are here                     |
	|                                             |
	|                                             |
	|                                             |
	|                                             |
	|                                             |
	|                                             |
	===============================================
	)";

void Map::Use()
{
	std::cout << "You have open the map" << std::endl;
	std::cout << treasureMap << std::endl;
}
