#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &scav_trap);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &scav_trap);

		void	attack(const std::string& target);
		void	guardGate();
};

#endif