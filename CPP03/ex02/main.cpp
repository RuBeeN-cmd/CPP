#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag_trap("Will");

	frag_trap.beRepaired(10);
	for (int i = 0; i < 100; i++)
		frag_trap.attack("Phil");	
	frag_trap.beRepaired(10);
	frag_trap.highFivesGuys();
	return 0;
}
