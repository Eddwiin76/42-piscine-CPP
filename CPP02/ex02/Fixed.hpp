#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

public:

	Fixed( void );
	Fixed( Fixed const &src );
	Fixed( const int nb);
	Fixed( const float nb);
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator=( Fixed const &rhs );

	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed	&operator++( void );
	Fixed	&operator--( void );
	Fixed	operator++(int);
	Fixed	operator--(int);

	static const Fixed	&min( const Fixed &lhs, const Fixed &rhs);
	static const Fixed	&max( const Fixed &lhs, const Fixed &rhs);

	Fixed	&min(Fixed &lhs, Fixed &rhs);
	Fixed	&max(Fixed &lhs, Fixed &rhs);

private:

	int						_fixe;
	static const int		_bits = 8;

};

std::ostream	&operator<<( std::ostream &o, Fixed const &i );

#endif
