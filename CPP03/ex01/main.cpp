#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav_trap("Will");

	scav_trap.beRepaired(10);
	for (int i = 0; i < 50; i++)
		scav_trap.attack("Phil");	
	scav_trap.beRepaired(10);
	scav_trap.guardGate();
	return 0;
}
