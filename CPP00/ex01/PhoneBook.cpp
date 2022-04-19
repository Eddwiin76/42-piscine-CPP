#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "Phone Book constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Phone Book destructor called" << std::endl;
	return;
}

void	PhoneBook::addContact( void ) {

	std::string	input;

	if (PhoneBook::_numbersOfContacts < 8) {
		this->_contacts[this->_numbersOfContacts].setFirstName(input);
		this->_contacts[this->_numbersOfContacts].setLastName(input);
		this->_contacts[this->_numbersOfContacts].setNickname(input);
		this->_contacts[this->_numbersOfContacts].setPhoneNumber(input);
		this->_contacts[this->_numbersOfContacts].setDarkestSecret(input);
		PhoneBook::_numbersOfContacts++;
		std::cout << "Contact: " << this->_numbersOfContacts << std::endl;
	}
	else
		std::cout << "The Phone Book is full (8 contacts max)" << std::endl;
}

void	PhoneBook::_truncate ( std::string str ) const
{
	if (std::strlen(str.c_str()) <= 10)
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	PhoneBook::_displayContats( void ) const {

	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < PhoneBook::_numbersOfContacts; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		this->_truncate(this->_contacts[i].getFirstName());
		std::cout << "|";
		this->_truncate(this->_contacts[i].getLastName());
		std::cout << "|";
		this->_truncate(this->_contacts[i].getNickname());
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
}

void 	PhoneBook::_displayContactInfo ( int index ) const {

	std::cout << "FIRST_NAME: " <<this->_contacts[index].getFirstName() << std::endl;
	std::cout << "LAST_NAME: " <<this->_contacts[index].getLastName() << std::endl;
	std::cout << "NICKNAME: " <<this->_contacts[index].getNickname() << std::endl;
	std::cout << "PHONE_NUMBER: " <<this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "DARKESTSECRET: " <<this->_contacts[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact( void ) {

	std::string	input;
	int			index;

	this->_displayContats();
	if (this->_numbersOfContacts)
	{
		std::cout << "Choose a contact between 1 and " << this->_numbersOfContacts << ": ";
		std::getline(std::cin, input);
		std::istringstream(input) >> index;
		if (index > 0 && index <= this->_numbersOfContacts)
			this->_displayContactInfo(index - 1);
		else
		{
			std::cout << "Not a valid index." << std::endl;
			searchContact();
		}
	}
	else
		std::cout << "You have 0 contact." << std::endl;
}

int		PhoneBook::_numbersOfContacts = 0;
