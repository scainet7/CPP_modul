#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << MAG "DiamondTrap - default constructor called!\n" END;
	this->_person_name = "_";
	ClapTrap::_person_name = this->_person_name + "_clap_name";
	this->_health_points = FragTrap::getHealth_Points();
	this->_energy_points = ScavTrap::getEnergy_Points();
	this->_attack_damage = FragTrap::getAtack_Damage();
	getInfo();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << MAG "DiamondTrap - destructor called!\n" END;
}

DiamondTrap::DiamondTrap(std::string _person_name) : ClapTrap(_person_name)
{
	std::cout << MAG "DiamondTrap - constructor called!\n" END;
	this->_person_name = _person_name;
	ClapTrap::_person_name = this->_person_name + "_clap_name";
	this->_health_points = FragTrap::getHealth_Points();
	this->_energy_points = ScavTrap::getEnergy_Points();
	this->_attack_damage = FragTrap::getAtack_Damage();
	getInfo();
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << MAG "DiamondTrap - coppy constructor called!\n" END;
	*this = other;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
	std::cout << "DiamondTrap - copy assignment operator called\n";
	this->_person_name = other.getPerson_Name();
	this->_health_points = other.getHealth_Points();
	this->_energy_points = other.getEnergy_Points();
	this->_attack_damage = other.getAtack_Damage();
	this->_take_damage = other.getTake_Damage();
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_person_name << "ClapTrap name: " << ClapTrap::getPerson_Name() << std::endl;
}
