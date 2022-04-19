#include "Cure.hpp"

Cure::Cure( void ) {

	_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( Cure const &src ) {

	*this = src;
	std::cout << "Cure copy onstructor called" << std::endl;

}

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone( void ) const {

	AMateria *clone = new Cure();
	return clone;
}

void	Cure::use(ICharacter & target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

// Cure	&Cure::operator=( Cure const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, Cure const &i ) {

//	return (o);
//}
