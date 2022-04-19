#include <iostream>
#include "Convert.hpp"

int	main(int argc, char **argv) {

	if (argc == 2)
		Convert arg(argv[1]);
	else
		std::cout << "Usage: ./convert <literal>" << std::endl;
	return 0;
}
