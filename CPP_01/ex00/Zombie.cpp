#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << BLU << this->name << " - this zombie is destroyed!\n" END;
}

void Zombie::announce()
{
	std::cout << RED << this->name << ": " << GRE "BraiiiiiiinnnzzzZ...\n" END;
}
