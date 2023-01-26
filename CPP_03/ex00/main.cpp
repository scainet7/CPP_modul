#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Herold");
	ClapTrap trap("Monster");

	clap.attack(trap.getPerson_Name());
	trap.takeDamage(5);
	trap.attack(clap.getPerson_Name());
	clap.takeDamage(7);
	trap.beRepaired(2);
	clap.beRepaired(3);
	trap.getInfo();
	clap.getInfo();
}
