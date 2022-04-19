#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &src ) {

	*this = src;
	std::cout << "MateriaSource copy constructor called" << std::endl;

}

MateriaSource::~MateriaSource( void ) {

	for ( int i = 3; i >= 0; i-- ) {
		if ( _inventory[i])
			delete _inventory[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria( AMateria *m ) {

	if (m)
	{
		int i = 0;
		while (_inventory[i])
			i++;
		if (i < 4)
			_inventory[i] = m;
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {

	for (int i = 0; i < 4; i++) {
		if (_inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	return 0;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs ) {

	for (int i = 0; i < 4; i++) {
		_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, MateriaSource const &i ) {

//	return (o);
//}
