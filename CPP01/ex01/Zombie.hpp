#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <sstream>

class	Zombie {

public:

	Zombie( std::string name = "Unnamed");
	~Zombie( void );

	void	announce( void ) const;
	void	setName( std::string const name );

private:

	std::string	_name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
