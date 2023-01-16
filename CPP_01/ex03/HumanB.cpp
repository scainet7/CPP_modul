#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void HumanB::setWeapon (Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (!_weapon)
		std::cout << GRE << _name << END YEL " unarmed attack " END << std::endl;
	else
		std::cout << GRE << _name << END RED " attacks with their " END << MAG << _weapon->getType() << END << std::endl;
}