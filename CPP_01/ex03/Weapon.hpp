#ifndef WEAPON_HPP
#define WEAPON_HPP 

#include <iostream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	std::string const &getType();
	void setType(std::string type);
};



#endif 
