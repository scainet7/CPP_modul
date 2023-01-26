#include "Zombie.hpp"


Zombie *zombieHorde( int N, std::string name )
{
	Zombie *zombie;

	if (N < 0)
		return (NULL);
	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].new_name(name);
	return (zombie);
}
