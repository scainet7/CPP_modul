#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("Herold");
	ClapTrap trap("Monster");
	ScavTrap scav("Castle");
	FragTrap frag("frag");

	clap.attack(trap.getPerson_Name());
	frag.attack(clap.getPerson_Name());
	trap.takeDamage(clap.getAtack_Damage());
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);
	scav.attack(trap.getPerson_Name());
	scav.takeDamage(3);
	scav.beRepaired(3);
	frag.takeDamage(trap.getAtack_Damage());
	frag.beRepaired(3);
	trap.getInfo();
	clap.getInfo();
	scav.getInfo();
	frag.getInfo();
}
