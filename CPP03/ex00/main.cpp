#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap_trap_a("Bill");
	ClapTrap clap_trap_b(clap_trap_a);
	ClapTrap clap_trap_c = clap_trap_b;

	clap_trap_a.beRepaired(10);
	for (int i = 0; i < 10; i++)
		clap_trap_a.attack("Will");	
	clap_trap_a.beRepaired(10);
	return 0;
}
