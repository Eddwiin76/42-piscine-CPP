#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << std::endl;

	meta->makeSound();
	std::cout << std::endl;

	delete j;
	delete i;
	delete meta;
	std::cout << std::endl;

	const WrongAnimal* wrong1 = new WrongAnimal();
	const WrongAnimal* wrong2 = new WrongCat();
	std::cout << std::endl;

	std::cout << wrong1->getType() << " " << std::endl;
	wrong1->makeSound();
	std::cout << std::endl;

	std::cout << wrong2->getType() << " " << std::endl;
	wrong2->makeSound();
	std::cout << std::endl;

	delete wrong1;
	delete wrong2;

	return 0;
}