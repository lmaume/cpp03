#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap Clap("John");
	ScavTrap Skav("SKAVEN");

	Clap.attack("Jane");
	Clap.takeDamage(8);
	Clap.beRepaired(4);

	std::cout << "\n\n";

	Skav.attack("Jane");
	Skav.takeDamage(12);
	Skav.beRepaired(26);
	Skav.guardGate();
}
