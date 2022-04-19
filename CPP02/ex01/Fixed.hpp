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

private:

	int						_fixe;
	static const int		_bits = 8;

};

std::ostream	&operator<<( std::ostream &o, Fixed const &i );

#endif
