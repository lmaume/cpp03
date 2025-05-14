#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap Clap("John");
	ScavTrap Skav("SKAVEN");
	FragTrap fag("SKAVEN");

	Clap.attack("Jane");
	Clap.takeDamage(120);
	Clap.beRepaired(4);

	std::cout << "\n\n";

	Skav.attack("Jane");
	Skav.takeDamage(120);
	Skav.beRepaired(26);
	Skav.guardGate();

	std::cout << "\n\n";

	fag.attack("Jane");
	fag.takeDamage(120);
	fag.beRepaired(26);
	fag.highFivesGuys();
}
