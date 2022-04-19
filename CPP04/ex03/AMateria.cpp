#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) {

	std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria( AMateria const &src ) {

	*this = src;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria( std::string const &type ) : _type(type) {

	std::cout << "AMateria type <" << _type << "> constructor called" << std::endl;
}

AMateria::~AMateria( void ) {

	std::cout << "AMateria destructor called" << std::endl;
}

std::string	const & AMateria::getType( void ) const {

	return _type;
}

void	AMateria::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria	&AMateria::operator=( AMateria const &rhs ) {

	_type = rhs._type;
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, AMateria const &i ) {

//	return (o);
//}
