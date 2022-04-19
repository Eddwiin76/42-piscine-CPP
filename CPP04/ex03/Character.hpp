#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character : public ICharacter {

public:

	Character( void );
	Character( Character const &src );
	Character( std::string const &name );
	~Character( void );

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character	&operator=( Character const &rhs );

protected:

	std::string	_name;
	AMateria	*_inventory[4];
};

//std::ostream	&operator<<( std::ostream &o, Character const &i );

#endif
