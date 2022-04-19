#include "Zombie.hpp"

int	main( void ) {

	int			N;
	std::string	tmp;

	std::cout << "How many Zombies you want on your horde ?: ";
	std::getline(std::cin, tmp);
	std::istringstream(tmp) >> N;
	std::cout << "And a name for these minions: ";
	std::getline(std::cin, tmp);
	Zombie	*horde = zombieHorde(N, tmp);
	for (int i = 0; i != N; ++i) {
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
