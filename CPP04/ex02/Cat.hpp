#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal{

public:

	Cat( void );
	Cat( Cat const &src );
	~Cat( void );

	void	makeSound( void ) const;

	// Cat	&operator=( Cat const &rhs );

protected:

	Brain	*_brain;
};

//std::ostream	&operator<<( std::ostream &o, Cat const &i );

#endif
