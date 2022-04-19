#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{

public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const &src );
	~DiamondTrap( void );

	void	whoAmI();

	DiamondTrap	&operator=( DiamondTrap const &rhs );

private:

	std::string	_name;
};

// std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i );

#endif
