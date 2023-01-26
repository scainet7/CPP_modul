#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static const int _hit_points = 100;
		int guard;

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string  _person_name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);
		void attack(const std::string &target);
		void guardGate();
		
};

#endif
