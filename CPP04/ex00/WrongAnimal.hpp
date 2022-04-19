#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const &src );
	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

	WrongAnimal	&operator=( WrongAnimal const &rhs );

protected:

	std::string	_type;
};

//std::ostream	&operator<<( std::ostream &o, WrongAnimal const &i );

#endif
