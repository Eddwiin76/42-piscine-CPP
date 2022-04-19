#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
void printElement(T &element) {

	std::cout << element << std::endl;
}

template < typename T >
void iter( T *array, size_t len, void (*fct)(T&)) {

	for (size_t i = 0; i < len; i++) {
		fct(array[i]);
	}
}

#endif
