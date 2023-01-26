#include "Zombie.hpp"

Zombie::Zombie ()
{
}

Zombie::~Zombie()
{
	std::cout << BLU << this->name << " - this zombie is destroyed!\n" END;
}

void Zombie::announce()
{
	std::cout << RED << this->name << ": " << GRE "BraiiiiiiinnnzzzZ...\n" END;
}

void Zombie::new_name(std::string name)
{
	this->name = name;
}
