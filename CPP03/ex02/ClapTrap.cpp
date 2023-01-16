#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Construtor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clap_trap)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = clap_trap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap_trap)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->_name = clap_trap._name;
	this->_hit_point = clap_trap._hit_point;
	this->_energy_point = clap_trap._energy_point;
	this->_attack_damage = clap_trap._attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) 
{
	if (!this->_energy_point || !this->_hit_point)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack!" << std::endl;
		return ;
	}
	this->_energy_point--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attack_damage << " points of damage!" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) 
{
	if (!this->_hit_point)
	{
		std::cout << "ClapTrap " << this->_name << " can't take damage!" << std::endl;
		return ;
	}
	if (this->_hit_point > amount)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << "points of damage!" << std::endl;
		this->_hit_point -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		this->_hit_point = 0;
	}
}

void 	ClapTrap::beRepaired(unsigned int amount) 
{
	if (!this->_energy_point || !this->_hit_point)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of hit!" << std::endl;
	this->_energy_point--;
	this->_hit_point += amount;
}

