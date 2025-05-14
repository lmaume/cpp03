#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class FragTrap : public ClapTrap
{
	private:

	public:
		void attack(const std::string& target);
		void highFivesGuys();

		FragTrap(std::string name);
		FragTrap(const FragTrap &f);
		~FragTrap(void);
};

#endif