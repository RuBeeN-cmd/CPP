#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap - Construtor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &scav_trap): ClapTrap(scav_trap)
{
	std::cout << "ScavTrap - Copy Constructor called" << std::endl;
	*this = scav_trap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap - Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav_trap)
{
	std::cout << "ScavTrap - Copy Assignment Operator called" << std::endl;
	this->_name = scav_trap._name;
	this->_hit_point = scav_trap._hit_point;
	this->_energy_point = scav_trap._energy_point;
	this->_attack_damage = scav_trap._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) 
{
	if (!this->_energy_point || !this->_hit_point)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
		return ;
	}
	this->_energy_point--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is in Gate Keeper Mode!" << std::endl;
}
