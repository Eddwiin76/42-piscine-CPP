#include <iostream>
#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	Bernard;
	ClapTrap	Luc("Luc");

	Bernard.attack("Luc");
	Luc.takeDamage(2);
	Luc.attack("Bernard");
	Bernard.takeDamage(5);
	Luc.beRepaired(1);
	Luc.attack("Bernard");
	Bernard.takeDamage(3);
	Bernard.attack("Luc");
	Luc.takeDamage(8);
	Bernard.attack("Luc");
	Luc.takeDamage(2);
	Luc.beRepaired(500);
	Luc.attack("Bernard");
	Bernard.takeDamage(1000000);
}
