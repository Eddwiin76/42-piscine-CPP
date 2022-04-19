#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const &src );
	~Dog( void );

	void	makeSound( void ) const;

	// Dog	&operator=( Dog const &rhs );

protected:

};

//std::ostream	&operator<<( std::ostream &o, Dog const &i );

#endif
