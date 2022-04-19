#include "Dog.hpp"

Dog::Dog( void ) {

	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const &src ) {

	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound( void ) const {

	std::cout << "Woof-Woof" << std::endl;
}

// Dog	&Dog::operator=( Dog const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, Dog const &i ) {

//	return (o);
//}
