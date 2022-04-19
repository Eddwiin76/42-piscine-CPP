#include "Cat.hpp"

Cat::Cat( void ) {

	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( Cat const &src ) {

	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const {

	std::cout << "Meoooowwwwwww" << std::endl;
}

// Cat	&Cat::operator=( Cat const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, Cat const &i ) {

//	return (o);
//}
