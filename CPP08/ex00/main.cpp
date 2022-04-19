#include "easyfind.hpp"
#include <vector>

void displayInt(int nb) {
	std::cout << nb << std::endl;
}

int main( void ) {

	std::vector<int> vect1;
	std::vector<int>::iterator it;

	vect1.push_back(1);
	vect1.push_back(2);
	vect1.push_back(3);
	vect1.push_back(4);
	vect1.push_back(5);

	for_each(vect1.begin(), vect1.end(), displayInt);


	try {
		it = easyfind(vect1, 3);
		std::cout << "it for vect1(42, 3) = " << *it << std::endl;
		it = easyfind(vect1, 42);
		std::cout << "it for vect1(42, 42) = " << *it << std::endl; // nop
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
