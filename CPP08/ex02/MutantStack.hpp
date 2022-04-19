#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class	MutantStack : public std::stack<T> {

public:

	typedef typename std::deque<T>::iterator iterator;

	MutantStack( void ) : std::stack<T>() {}
	MutantStack( MutantStack const &src ) { *this = src; }
	~MutantStack( void ) {}

	MutantStack	&operator=( MutantStack const &rhs ) {
		std::stack<T>::operator=(rhs);
		return *this;
	}

	iterator begin() {
		return std::stack<T>::c.begin();
	}

	iterator end() {
		return std::stack<T>::c.end();
	}
};

#endif
