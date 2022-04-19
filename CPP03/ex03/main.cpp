#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {

	// ClapTrap	Bernard;
	// ClapTrap	Luc("Luc");

	// Bernard.attack("Luc");
	// Luc.takeDamage(2);
	// Luc.attack("Bernard");
	// Bernard.takeDamage(5);
	// Luc.beRepaired(1);
	// Luc.attack("Bernard");
	// Bernard.takeDamage(3);
	// Bernard.attack("Luc");
	// Luc.takeDamage(8);
	// Bernard.attack("Luc");
	// Luc.takeDamage(2);
	// Luc.beRepaired(500);
	// Luc.attack("Bernard");
	// Bernard.takeDamage(1000000);

	// ScavTrap	Janette("Janette");
	// ScavTrap	Mickael;

	// Janette.attack("Mickael");
	// Janette.guardGate();

	// FragTrap	Jean("Jean");
	// FragTrap	Jack;

	// Jean.highFivesGuys();


	DiamondTrap	Rihanna("Rihanna");
	DiamondTrap	thief("thief");

	Rihanna.attack("thief");
	thief.takeDamage(30);
	Rihanna.attack("thief");
	thief.takeDamage(30);
	thief.beRepaired(50);
	Rihanna.attack("thief");
	thief.takeDamage(30);
	Rihanna.guardGate();
	Rihanna.highFivesGuys();
	Rihanna.whoAmI();


}
