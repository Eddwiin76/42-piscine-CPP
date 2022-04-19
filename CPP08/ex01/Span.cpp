#include "Span.hpp"

Span::Span( void ) {

	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span( unsigned int n ) : _size(n) {

	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span( Span const &src ) {

	*this = src;
	// std::cout << "Span copy constructor called" << std::endl;

}

Span::~Span( void ) {

	// std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber( int n ) {

	if (_container.size() > _size)
		throw std::exception();

	_container.push_back(n);
}

int Span::shortestSpan( void ) {

	if (_container.size() < 2)
		throw std::exception();

	int shortest;
	int tmp;

	std::vector<int> sorted(_container);
	std::sort(sorted.begin(), sorted.end());

	for (std::vector<int>::iterator i = sorted.begin(); i < (sorted.end() - 1); i++) {
		tmp = *(i + 1) - *i;
		shortest = shortest > tmp ? tmp : shortest;
	}

	return shortest;
}

int Span::longestSpan( void ) {

	if (_container.size() < 2)
		throw std::exception();

	return *std::max_element(_container.begin(), _container.end()) \
			- *std::min_element(_container.begin(), _container.end());
}

Span	&Span::operator=( Span const &rhs ) {

	if (this != &rhs)
		*this = rhs;
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Span const &i ) {

//	return (o);
//}
