#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( Animal const &src ) {

	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;

}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType( void ) const {

	return _type;
}

void	Animal::setType( const std::string type) {

	_type = type;
}

void	Animal::makeSound( void ) const {

	std::cout << "Animal make an unknown sound" << std::endl;
}

Animal	&Animal::operator=( Animal const &rhs ) {

	_type = rhs._type;
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Animal const &i ) {

//	return (o);
//}
