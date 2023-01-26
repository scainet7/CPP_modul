#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dima;
	ClapTrap clap;

	dima = DiamondTrap("Foo");
	clap = ClapTrap("Clap");
	dima.whoAmI();
	dima.attack(clap.getPerson_Name());
	dima.takeDamage(10);
	dima.beRepaired(10);
	dima.whoAmI();
	dima.getInfo();
	clap.getInfo();
}
