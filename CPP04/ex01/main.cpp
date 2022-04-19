#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main() {

	Animal	*zoo[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		delete zoo[i];
	}
	std::cout << std::endl;

	Cat *a = new Cat();
	Cat b = *a;
	b.setType("Cat2");
	std::cout << a->getType() << std::endl;
	std::cout << b.getType() << std::endl;
	delete a;
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	return 0;
}
