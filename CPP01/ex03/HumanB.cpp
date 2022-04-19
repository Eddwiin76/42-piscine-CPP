#include "HumanB.hpp"

HumanB::HumanB( std::string const &name): _name(name){

}

HumanB::~HumanB( void ) {

}

void	HumanB::attack( void ) {

	if (!_weapon)
		std::cout << _name << " attacks with his fists (no weapon)" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon const &weapon) {

	_weapon = &weapon;
}
