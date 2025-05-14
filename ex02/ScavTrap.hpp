#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class ScavTrap : public ClapTrap
{
	private:

	public:
		void attack(const std::string& target);
		void guardGate();

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &f);
		~ScavTrap(void);
};

#endif