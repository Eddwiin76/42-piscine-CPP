#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
# include <stdexcept>

template < typename T >
class Array {

public:

	Array( void ) : _array(NULL), _size(0) {}
	Array( unsigned int n ) : _size(n), _array(new T[_size]) {}
	Array( const Array &rhs) : _size(rhs._size), _array(new T[_size]) { *this = rhs; }
	~Array( void ) { if (_size) delete[] _array; }

	Array &operator=(const Array &rhs) {
		if (_size)
			delete[] _array;
		_size = rhs._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = rhs[i];
		return *this;
	}

	T &operator[](size_t index) const {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _array[index];
	}

	size_t size( void ) const { return _size; }

private:

	size_t	_size;
	T		*_array;

};

#endif
