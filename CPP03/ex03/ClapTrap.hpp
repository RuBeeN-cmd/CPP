#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &clap_trap);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &clap_trap);

		void	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
};

#endif