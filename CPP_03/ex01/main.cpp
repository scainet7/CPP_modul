#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ClapTrap clap("Herold");
	ClapTrap trap("Monster");
	ScavTrap scav("Castle");

	clap.attack(trap.getPerson_Name());
	trap.takeDamage(3);
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);
	scav.attack(trap.getPerson_Name());
	scav.takeDamage(3);
	scav.beRepaired(3);
	trap.getInfo();
	clap.getInfo();
	scav.getInfo();

}
