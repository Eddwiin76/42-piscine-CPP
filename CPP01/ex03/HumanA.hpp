#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
#include "Weapon.hpp"

class	HumanA {

public:

	HumanA( std::string const &name, Weapon const &weapon );
	~HumanA( void );

	void	attack( void );

private:

	std::string	const _name;
	Weapon	const &_weapon;

};

#endif
