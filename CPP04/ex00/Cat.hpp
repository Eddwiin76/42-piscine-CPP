#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"

class	Cat : public Animal{

public:

	Cat( void );
	Cat( Cat const &src );
	~Cat( void );

	void	makeSound( void ) const;

	// Cat	&operator=( Cat const &rhs );

protected:

};

//std::ostream	&operator<<( std::ostream &o, Cat const &i );

#endif
