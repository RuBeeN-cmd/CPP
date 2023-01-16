#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap - Constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 30;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->_name << " - " << ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &diamond_trap): ClapTrap(diamond_trap), ScavTrap(diamond_trap), FragTrap(diamond_trap)
{
	std::cout << "DiamondTrap - Copy Constructor called" << std::endl;
	*this = diamond_trap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap - Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond_trap)
{
	std::cout << "DiamondTrap - Copy Assignment Operator called" << std::endl;
	ClapTrap::_name = diamond_trap.ClapTrap::_name;
	this->_hit_point = diamond_trap.FragTrap::_hit_point;
	this->_energy_point = diamond_trap.ScavTrap::_energy_point;
	this->_attack_damage = diamond_trap.FragTrap::_attack_damage;
	return (*this);
}