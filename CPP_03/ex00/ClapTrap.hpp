#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"


class ClapTrap
{
	private:
		std::string	_person_name;
		int			_health_points;
		int			_energy_points;
		int			_attack_damage;
		
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		ClapTrap(std::string  _person_name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getPerson_Name() const;
		int getHealth_Points() const;
		int getEnergy_Points() const;
		int getAtack_Damage() const;
		void getInfo();
};

#endif 
