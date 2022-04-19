#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	_type = "WrongCat";
	std::cout << _type << " default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src ) {

	*this = src;
	std::cout << _type << " copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {

	std::cout << _type << " destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const {

	std::cout << "WrongCat make an unknown sound" << std::endl;
}

// WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, WrongCat const &i ) {

//	return (o);
//}
