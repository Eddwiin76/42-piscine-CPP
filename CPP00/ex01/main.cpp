#include "PhoneBook.hpp"

int	main() {

	PhoneBook		book;
	std::string		input;

	while (42)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT):";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
	}
}
