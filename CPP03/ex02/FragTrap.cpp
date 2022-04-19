#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("unnamed") {

	_hp = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap <" << _name << "> default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {

	_hp = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap <" << _name << "> initialization constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ) {

	*this = src;
	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap <" << _name << "> destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap <" << _name << "> : \"GIVE ME FIVE GUYS\"" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {

	if (this != &rhs )
		ClapTrap::operator=( rhs );
	return (*this);
}

// std::ostream	&operator<<( std::ostream &o, FragTrap const &i ) {

// 	return (o);
// }
