#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const &src );
	~ScavTrap( void );

	void	attack( std::string const &target );
	void	guardGate();

	ScavTrap	&operator=( ScavTrap const &rhs );

private:

};

// std::ostream	&operator<<( std::ostream &o, ScavTrap const &i );

#endif
