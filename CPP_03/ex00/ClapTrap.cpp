#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << MAG "Default constructor called!\n" END;
}

ClapTrap::~ClapTrap()
{
	std::cout << MAG "Destructor called!\n" END;
}

ClapTrap::ClapTrap(std:: string _person_name)
{
	this->_person_name = _person_name;
	this->_health_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << MAG "Constructor called!\n" END;
	getInfo();
}

void ClapTrap::getInfo()
{
	std::cout << YEL "Person_name: " END << this->_person_name << std::endl;
	std::cout << YEL "Health_Point: " END << this->_health_points << std::endl;
	std::cout << YEL "Energgy: " END << this->_energy_points << std::endl;
	std::cout << YEL "Damage: " END << this->_attack_damage << std::endl;
	std::cout << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called\n";
	this->_person_name = other.getPerson_Name();
	this->_health_points = other.getHealth_Points();
	this->_energy_points = other.getEnergy_Points();
	this->_attack_damage = other.getAtack_Damage();
	return (*this);
}

ClapTrap::ClapTrap (const ClapTrap &other)
{
	std::cout << MAG "Coppy constructor called!\n" END;
	*this = other;
}

std::string ClapTrap::getPerson_Name() const
{
	return (this->_person_name);
}

int ClapTrap::getHealth_Points() const
{
	return (this->_health_points);
}

int ClapTrap::getEnergy_Points() const
{
	return (this->_energy_points);
}

int ClapTrap::getAtack_Damage() const
{
	return (this->_attack_damage);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_health_points > 0)
		std::cout << BLU << this->getPerson_Name() << " attacks " << target << "\n" END;
	else if (this->_health_points < 1)
		std::cout << RED << this->getPerson_Name() << " died!\n" END;
	else if (this->_energy_points <= 0)
		std::cout << RED << "The " << this->getPerson_Name() << " has no energy!\n\n" END;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health_points > 0)
	{
		if (this->_health_points <= amount)
			{
				this->_health_points = 0;
				this->_energy_points--;
				this->_attack_damage += amount;
				std::cout << BLU << this->getPerson_Name() << " took " << amount << " damage\n" END;
			}
		else
			{
				this->_health_points -= amount;
				this->_energy_points--;
				this->_attack_damage += amount;
				std::cout << BLU << this->getPerson_Name() << " took " << amount << " damage\n" END;
			}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health_points < 1)
	{
		std::cout << RED << this->getPerson_Name() << " died!\n\n" END;
		return;
	}
	if (this->_health_points < 10 && this->_energy_points > 0)
	{
		if (this->_health_points + amount > 10)
		{
			this->_health_points = 10;
		}
		else
		{
			this->_health_points += amount;
		}
		std::cout << GRE << this->getPerson_Name() << " recovered!\n\n" END;
	}
	else if (this->_energy_points < 0)
	{
		std::cout << RED << "The " << this->getPerson_Name() << " has no energy!\n\n" END;
	}
	else if (this->_health_points <= 10)
	{
		std::cout << RED << "The " << this->getPerson_Name() << " full health points!\n\n" END;
	}
}
