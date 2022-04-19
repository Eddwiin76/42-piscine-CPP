#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const &src );
	~ClapTrap( void );

	void	attack( std::string const &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string	getName() const;

	ClapTrap	&operator=( ClapTrap const &rhs );

protected:

	std::string	_name;
	int			_hp;
	int			_energy;
	int			_attack;

};

// std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );

#endif
