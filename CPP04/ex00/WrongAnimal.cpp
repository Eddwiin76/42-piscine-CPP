#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {

	std::cout << _type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {

	*this = src;
	std::cout << _type << " copy constructor called" << std::endl;

}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << _type << " destructor called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return _type;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "WrongAnimal make an unknown sound" << std::endl;
}


WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	if (this != &rhs)
		*this = rhs;
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, WrongAnimal const &i ) {

//	return (o);
//}
