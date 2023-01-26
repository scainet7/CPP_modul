#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << MAG "FragTrap - default constructor called!\n" END;
	setHealth_Points(100);
	setEnergy_Points(100);
	setAtack_Damage(30);
	getInfo();
}

FragTrap::~FragTrap()
{
	std::cout << MAG "FragTrap - destructor called!\n" END;
}

FragTrap::FragTrap(std::string _person_name) : ClapTrap(_person_name)
{
	std::cout << MAG "FragTrap - constructor called!\n" END;
	setHealth_Points(100);
	setEnergy_Points(100);
	setAtack_Damage(30);
	getInfo();
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << MAG "FragTrap - coppy constructor called!\n" END;
	*this = other;
}

FragTrap &FragTrap::operator = (const FragTrap &other)
{
	std::cout << "FragTrap - copy assignment operator called\n";
	setPerson_Name(other.getPerson_Name());
	setHealth_Points(other.getHealth_Points());
	setEnergy_Points(other.getEnergy_Points());
	setAtack_Damage(other.getAtack_Damage());
	return (*this);
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << this->getPerson_Name() << "giv me five!\n";
}
