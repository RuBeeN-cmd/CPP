#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond_trap("Will");

	diamond_trap.whoAmI();
	diamond_trap.beRepaired(10);
	for (int i = 0; i < 50; i++)
		diamond_trap.attack("Phil");	
	diamond_trap.beRepaired(10);
	diamond_trap.guardGate();
	return 0;
}
