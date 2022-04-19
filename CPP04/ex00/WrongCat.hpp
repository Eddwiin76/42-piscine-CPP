#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const &src );
	~WrongCat( void );

	void	makeSound( void ) const;

	// WrongCat	&operator=( WrongCat const &rhs );

protected:

};

//std::ostream	&operator<<( std::ostream &o, WrongCat const &i );

#endif
