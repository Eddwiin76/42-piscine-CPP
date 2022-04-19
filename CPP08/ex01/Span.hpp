#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class	Span {

public:

	Span( unsigned int n );
	Span( Span const &src );
	~Span( void );

	void addNumber( int n );
	int shortestSpan( void );
	int longestSpan( void );

	Span	&operator=( Span const &rhs );

private:

	Span( void );
	unsigned int _size;
	std::vector<int> _container;

};

// std::ostream	&operator<<( std::ostream &o, Span const &i );

#endif
