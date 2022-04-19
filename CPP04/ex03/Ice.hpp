#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria {

public:

	Ice( void );
	Ice( Ice const &src );
	~Ice( void );

	virtual AMateria* clone( void ) const;
	virtual void use(ICharacter& target);
	// Ice	&operator=( Ice const &rhs );

protected:

};

//std::ostream	&operator<<( std::ostream &o, Ice const &i );

#endif
