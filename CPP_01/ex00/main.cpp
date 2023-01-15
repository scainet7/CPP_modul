#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	randomChump("Ivan");
	zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;
	return (0);
}