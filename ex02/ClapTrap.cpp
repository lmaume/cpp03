#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
		this->_name = claptrap.getName();
	return *this;
}

std::string	ClapTrap::getName() const
{return this->_name;}


void ClapTrap::attack(const std::string& target)
{
	if (_energyPoint == 0 || _hitPoint == 0)
		std::cout << "claprtap no atack no energy or life" << std::endl;
	else
	{
		_energyPoint--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "No damage taken by ClapTrap " << _name << "." << std::endl;
	else if (amount >= _hitPoint || _energyPoint == 0)
	{
		_hitPoint = 0;
		_energyPoint--;
		std::cout << "ClapTrap " << _name << " dies due to his woundes. " << _hitPoint << " HP left." << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damages, letting him at " << _hitPoint << " HP!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0 || _energyPoint == 0 || _hitPoint == 0)
		std::cout << "No reparation for ClapTrap " << _name << "." << std::endl;
	else
	{
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "ClapTrap " << _name << " is repaired of " << amount << " hit points, letting him at " << _hitPoint << " HP!" << std::endl;
	}
}

