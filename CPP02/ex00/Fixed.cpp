#include "Fixed.hpp"

Fixed::Fixed( void ): _fixe(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_fixe);
}

void	Fixed::setRawBits( int const raw ) {

	_fixe = raw;
}

Fixed	&Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	_fixe = rhs.getRawBits();
	return (*this);
}

// std::ostream	&operator<<( std::ostream &o, Fixed const &i ) {

// 	return (o);
// }
