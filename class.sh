#!/usr/bin/env bash

echo "#include \"${1}.hpp\"

${1}::${1}( void ) {

}

${1}::~${1}( void ) {

}" > $1.cpp

echo -n "#ifndef " > $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp
echo -n "# define " >> $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp

echo "
# include <iostream>

class	${1} {

public:

	${1}( void );
	~${1}( void );

private:

};

#endif" >> $1.hpp
