#include "Zombie.hpp"

int	main( void ) {

	try {
		Zombie	*michael = newZombie("Michael");
		michael->announce();
		delete michael;
	} catch (const std::bad_alloc& e) {
		std::cerr << "Memory Allocation is failed: " << e.what() << std::endl;
	}
	randomChump("Johnny");
}
