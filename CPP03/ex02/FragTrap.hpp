#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &frag_trap);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &frag_trap);

		void	highFivesGuys(void);
};

#endif