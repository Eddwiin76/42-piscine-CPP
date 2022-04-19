#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("unnamed_clap_name"), _name("unnamed") {

	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap <" << _name << " (" << ClapTrap::_name << ")> default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), _name(name) {

	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "DiamondTrap <" << _name << " (" << ClapTrap::_name << ")> initialization constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) {

	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap <" << _name << " (" << ClapTrap::_name << ")> destructor called" << std::endl;
}

void	DiamondTrap::whoAmI() {

	std::cout << "My name is <" << _name << "> and my ClapTrap name is <" << ClapTrap::_name << ">." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	if (this != &rhs )
		ClapTrap::operator=( rhs );
	return (*this);
}

// std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i ) {

// 	return (o);
// }
