#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Usage: ./replace <filename> <s1> replaced by <s2>" << std::endl;
		return (1);
	}
	if (!argv[1] || !argv[2] || !argv[3]) {
		std::cerr << "Can't use an empty string" << std::endl;
		return (1);
	}

	std::ifstream	fileIn(argv[1]);

	if (!fileIn.is_open()) {
		std::cerr << "Can't open file" << std::endl;
	}

	std::ofstream	fileOut("output");
	std::string		line;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	while (std::getline(fileIn, line)) {
		int	i = -1;
		while (line[++i]) {
			std::size_t found = line.find(s1);
			if (found != std::string::npos) {
				line.erase(found, s1.length());
				line.insert(found, s2);
			}
		}
		fileOut << line << std::endl;
	}
	return (0);
}
