#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = FragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoint == 0 || _hitPoint == 0)
		std::cout << "fragrtap no atack no energy or life" << std::endl;
	else
	{
		_energyPoint--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is now asking for a High Five !" << std::endl;
}
