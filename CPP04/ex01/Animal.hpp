#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {

public:

	Animal( void );
	Animal( Animal const &src );
	virtual ~Animal( void );

	std::string		getType( void ) const;
	void			setType( const std::string type);
	virtual void	makeSound( void ) const;

	Animal	&operator=( Animal const &rhs );

protected:

	std::string	_type;
};

//std::ostream	&operator<<( std::ostream &o, Animal const &i );

#endif
