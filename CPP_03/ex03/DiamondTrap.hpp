#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _person_name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string _person_name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		void attack(const std::string &target);
		void whoAmI();
};

#endif
