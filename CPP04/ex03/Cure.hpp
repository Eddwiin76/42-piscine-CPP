#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria{

public:

	Cure( void );
	Cure( Cure const &src );
	~Cure( void );

	virtual AMateria* clone( void ) const;
	virtual void use(ICharacter& target);
	// Cure	&operator=( Cure const &rhs );

protected:

};

//std::ostream	&operator<<( std::ostream &o, Cure const &i );

#endif
