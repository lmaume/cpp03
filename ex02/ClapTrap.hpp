#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
	public:
		std::string	getName(void) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
		ClapTrap& operator=(const ClapTrap &claptrap);

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &f);
		~ClapTrap(void);
};
	
#endif