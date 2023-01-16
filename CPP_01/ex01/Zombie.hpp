#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

class Zombie
{
	private:
		
		std::string name;
	public:
		
		Zombie ();
		void announce(void);
		void new_name(std::string name);
		~Zombie();
};

Zombie *zombieHorde( int N, std::string name );

#endif