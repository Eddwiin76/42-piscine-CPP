#include "HumanA.hpp"

HumanA::HumanA( std::string const &name, Weapon const &weapon ): _name(name), _weapon(weapon) {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack( void ) {

	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
