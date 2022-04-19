#include <iostream>

int	main( void ) {

	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of the string: " << &string << std::endl;
	std::cout << "Address of the pointer: " << stringPTR << std::endl;
	std::cout << "Address of the reference: " << &stringREF << std::endl;

	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return 0;
}

