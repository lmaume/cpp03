#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = ScavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	if (this != &ScavTrap)
		this->_name = ScavTrap.getName();
	return *this;
}

std::string	ScavTrap::getName() const
{return this->_name;}


void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "No damage taken by ScavTrap " << _name << "." << std::endl;
	else if (amount >= _hitPoint || _energyPoint == 0)
	{
		_hitPoint = 0;
		_energyPoint--;
		std::cout << "ScavTrap " << _name << " dies due to his woundes. " << _hitPoint << " HP left." << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "ScavTrap " << _name << " takes " << amount << " damages, letting him at " << _hitPoint << " HP!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0 || _energyPoint == 0)
		std::cout << "No reparation for ScavTrap " << _name << "." << std::endl;
	else
	{
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "ScavTrap " << _name << " is repaired of " << amount << " hit points, letting him at " << _hitPoint << " HP!" << std::endl;
	}
}

