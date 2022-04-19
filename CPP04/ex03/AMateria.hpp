#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	ICharacter;

class	AMateria {

protected:

	std::string _type;

public:

	AMateria( void );
	AMateria( AMateria const &src );
	AMateria( std::string const &type );
	virtual ~AMateria( void );

	std::string const & getType( void ) const; //Returns the materia type
	virtual AMateria* clone( void ) const = 0;
	virtual void use(ICharacter& target);

	AMateria &operator=( AMateria const &rhs );
};

//std::ostream	&operator<<( std::ostream &o, AMateria const &i );

#endif
