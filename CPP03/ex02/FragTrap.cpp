#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap - Construtor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &frag_trap): ClapTrap(frag_trap)
{
	std::cout << "FragTrap - Copy Constructor called" << std::endl;
	*this = frag_trap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap - Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &frag_trap)
{
	std::cout << "FragTrap - Copy Assignment Operator called" << std::endl;
	this->_name = frag_trap._name;
	this->_hit_point = frag_trap._hit_point;
	this->_energy_point = frag_trap._energy_point;
	this->_attack_damage = frag_trap._attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " makes High Fives!" << std::endl;
}