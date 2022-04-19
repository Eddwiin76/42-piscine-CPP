#!/usr/bin/env bash

echo "#include \"${1}.hpp\"

${1}::${1}( void ) {

	// std::cout << \"${1} default constructor called\" << std::endl;
}

${1}::${1}( ${1} const &src ) {

	*this = src;
	// std::cout << \"${1} copy constructor called\" << std::endl;

}

${1}::~${1}( void ) {

	// std::cout << \"${1} destructor called\" << std::endl;
}

// ${1}	&${1}::operator=( ${1} const &rhs ) {

// 	if (this != &rhs)
// 		*this = rhs;
// 	return *this;
// }

//std::ostream	&operator<<( std::ostream &o, ${1} const &i ) {

//	return (o);
//}"> $1.cpp

echo -n "#ifndef " > $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp
echo -n "# define " >> $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp

echo "
# include <iostream>

class	${1} {

public:

	${1}( void );
	${1}( ${1} const &src );
	~${1}( void );

	// ${1}	&operator=( ${1} const &rhs );

private:

};

//std::ostream	&operator<<( std::ostream &o, ${1} const &i );

#endif" >> $1.hpp

if ! [ -f Makefile ] ;
then
	cp /root/Curcus42/CPP/Makefile .
fi

TMP=$(cat Makefile | grep main.cpp)
sed -i "s/$TMP/$TMP ${1}.cpp/" Makefile
