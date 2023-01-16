#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

void HumanA::attack(void)
{
	std::cout << BLU << _name << END << RED " attacks with their " END << MAG << _weapon.getType() << END << std::endl;
}