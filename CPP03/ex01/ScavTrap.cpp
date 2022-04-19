#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("unnamed") {

	_hp = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap <" << _name << "> default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {

	_hp = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap <" << _name << "> initialization constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src ) {

	*this = src;
	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap <" << _name << "> destructor called" << std::endl;
}

void	ScavTrap::attack( std::string const &target ) {

	std::cout << "ScavTrap <" << _name << "> punched <" << target
			<< "> causing " << _attack << " points of domage!" << std::endl;
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap <" << _name << "> have entered in Gate keeper mode" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	if (this != &rhs )
		ClapTrap::operator=( rhs );
	return (*this);
}

// std::ostream	&operator<<( std::ostream &o, ScavTrap const &i ) {

// 	return (o);
// }
