#include "Zombie.hpp"

int main()
{
	int		N;
	Zombie	*zombie;

	N = 2;
	zombie = NULL;
	zombie = zombieHorde(N, "Foo");
	if (!zombie)
		return (1);
	for (int i  = 0; i < N; i++)
		zombie->announce();
	delete[] zombie;
	return (0);
}
