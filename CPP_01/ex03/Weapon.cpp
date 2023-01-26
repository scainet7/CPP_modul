#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string const &Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
