#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << MAG "ScavTrap - default constructor called!\n" END;
	this->setPerson_Name("None_Name");
	this->setHealth_Points(100);
	this->setEnergy_Points(50);
	this->setAtack_Damage(20);
	this->guard = 0;
	this->getInfo();
}

ScavTrap::~ScavTrap()
{
	std::cout << MAG "ScavTrap - destructor called!\n" END;
}

ScavTrap::ScavTrap(std::string _person_name) : ClapTrap(_person_name)
{
	std::cout << MAG "ScavTrap - constructor called!\n" END;
	this->setPerson_Name(_person_name);
	this->setHealth_Points(100);
	this->setEnergy_Points(50);
	this->setAtack_Damage(20);
	this->guard = 0;
	this->getInfo();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap - copy assignment operator called\n";
	this->setPerson_Name(other.getPerson_Name());
	this->setHealth_Points(other.getHealth_Points());
	this->setEnergy_Points(other.getEnergy_Points());
	this->setAtack_Damage(other.getAtack_Damage());
	return (*this);
}

ScavTrap::ScavTrap (const ScavTrap &other)
{
	std::cout << MAG "ScavTrap - coppy constructor called!\n" END;
	*this = other;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getEnergy_Points() > 0 && this->getHealth_Points() > 0)
		std::cout << BLU << this->getPerson_Name() << " attacks " << target << "\n" END;
	else if (this->getHealth_Points() < 1)
		std::cout << RED << this->getPerson_Name() << " died!\n" END;
	else if (this->getEnergy_Points() <= 0)
		std::cout << RED << "The " << this->getPerson_Name() << " has no energy!\n\n" END;
}

void ScavTrap::guardGate()
{
	if (this->guard == 1)
	{
		this->guard = 0;
		std::cout << this->getPerson_Name() << " exited the Gate keeper mode.\n";
	}
	else if (this->guard == 0)
	{
		this->guard = 1;
		std::cout << this->getPerson_Name() << " the Gate keeper mode activated.\n";
	}
}
