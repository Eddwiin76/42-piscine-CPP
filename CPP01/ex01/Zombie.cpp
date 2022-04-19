#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

	std::cout << "Zombie " << _name << " comes back to life" << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << "Zombie " << _name << " dies again" << std::endl;
}

void	Zombie::announce( void ) const {

	std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string const name ) {

	_name = name;
}
