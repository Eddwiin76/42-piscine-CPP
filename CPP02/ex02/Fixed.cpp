#include "Fixed.hpp"

Fixed::Fixed( void ): _fixe(0) {

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int nb ) {

	// std::cout << "Int constructor called" << std::endl;
	_fixe = nb << _bits;
}

Fixed::Fixed( const float nb ) {

	// std::cout << "Float constructor called" << std::endl;
	_fixe = roundf(nb * (1 << _bits));
	return ;
}

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixe);
}

void	Fixed::setRawBits( int const raw ) {

	_fixe = raw;
}

float	Fixed::toFloat( void ) const {

	return ((float)_fixe / (float)(1 << _bits));
}

int	Fixed::toInt( void ) const {

	return (_fixe >> _bits);
}

Fixed	&Fixed::operator=( Fixed const &rhs ) {

	// std::cout << "Assignation operator called" << std::endl;
	_fixe = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &i ) {

	o << i.toFloat();
	return (o);
}

bool	Fixed::operator>( Fixed const &rhs ) const {

	return (_fixe > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const &rhs ) const {

	return (_fixe < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const &rhs ) const {

	return (_fixe >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const &rhs ) const {

	return (_fixe <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const &rhs ) const {

	return (_fixe == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const &rhs ) const {

	return (_fixe != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs) const {

	return (Fixed(_fixe + rhs.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const {

	return (Fixed(_fixe - rhs.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const {

	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const {

	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++( void ) {

	_fixe++;
	return (*this);
}

Fixed	&Fixed::operator--( void ) {

	_fixe--;
	return (*this);
}

Fixed	Fixed::operator++( int ) {

	Fixed copy = *this;
	_fixe++;
	return (copy);
}

Fixed	Fixed::operator--( int ) {

	Fixed copy = *this;
	_fixe--;
	return (copy);
}

const Fixed	&Fixed::min( const Fixed &lhs, const Fixed &rhs) {

	return (lhs.getRawBits() <= rhs.getRawBits() ? lhs : rhs);
}

const Fixed	&Fixed::max( const Fixed &lhs, const Fixed &rhs) {

	return (lhs.getRawBits() >= rhs.getRawBits() ? lhs : rhs);
}

Fixed	&Fixed::min( Fixed &lhs, Fixed &rhs ) {

	return (lhs.getRawBits() <= rhs.getRawBits() ? lhs : rhs);
}

Fixed	&Fixed::max( Fixed &lhs, Fixed &rhs ) {

	return (lhs.getRawBits() <= rhs.getRawBits() ? lhs : rhs);
}
