#include <iostream>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cerr << "Usage: ./karen <mode>" << std::endl;
		return (1);
	}

	Karen	renka;

	for (int i = 1; i < argc; i++)
		renka.complain(argv[i]);

	return (0);
}
