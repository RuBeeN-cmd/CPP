#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &diamond_trap);
		DiamondTrap(DiamondTrap &diamond_trap);
		using ScavTrap::attack;
		void	whoAmI(void);
};

#endif