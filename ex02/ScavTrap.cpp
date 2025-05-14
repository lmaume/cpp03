#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = ScavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoint == 0 || _hitPoint == 0)
		std::cout << "scavrtap no atack no energy or life" << std::endl;
	else
	{
		_energyPoint--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;	
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
