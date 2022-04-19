#include "Character.hpp"

Character::Character( void ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character( Character const &src ) {

	*this = src;
	std::cout << "Character copy constructor called" << std::endl;
}

Character::Character( std::string const &name) : _name(name) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
	std::cout << "Character initialization constructor called" << std::endl;
}

Character::~Character( void ) {

	for ( int i = 3; i >= 0; i-- ) {
		if ( _inventory[i])
			delete _inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName(void) const {

	return _name;
}

void	Character::equip( AMateria *m) {

	if (m)
	{
		int i = 0;
		while (_inventory[i])
			i++;
		if (i < 4)
			_inventory[i] = m;
		else
			std::cout << "Inventory is full" << std::endl;
	}
}

void	Character::unequip( int idx ) {

	if (idx > 0 && idx <= 4)
		_inventory[idx - 1] = NULL;
}

void	Character::use( int idx, ICharacter &target ) {

	if (idx >= 0 && idx < 4)
		_inventory[idx]->use(target);
}

Character	&Character::operator=( Character const &rhs ) {

	_name = rhs._name;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Character const &i ) {

//	return (o);
//}
