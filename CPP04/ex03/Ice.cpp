#include "Ice.hpp"

Ice::Ice( void ) {

	_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice const &src ) {

	*this = src;
	std::cout << "Ice copy constructor called" << std::endl;

}

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone( void ) const {

	AMateria *clone = new Ice();
	return clone;
}

void	Ice::use(ICharacter & target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Ice	&Ice::operator=( Ice const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, Ice const &i ) {

//	return (o);
//}
