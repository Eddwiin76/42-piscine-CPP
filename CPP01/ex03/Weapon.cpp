#include "Weapon.hpp"

Weapon::Weapon( std::string const &type ) : _type(type) {

}

Weapon::~Weapon( void ) {

}

std::string	const &Weapon::getType( void ) const {

	return (_type);
}

void	Weapon::setType( std::string const &type ) {

	_type = type;
}

