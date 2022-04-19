#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const &src ) {

	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;

}

Brain::~Brain( void ) {

	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=( Brain const &rhs ) {

	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Brain const &i ) {

//	return (o);
//}
