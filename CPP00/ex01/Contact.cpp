#include "Contact.hpp"

Contact::Contact( void ) {

	// std::cout << "Contact constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstName( void ) const {

	return (this->_firstName);
}

std::string	Contact::getLastName( void ) const {

	return (this->_lastName);
}

std::string	Contact::getNickname( void ) const {

	return (this->_nickname);
}

std::string	Contact::getPhoneNumber( void ) const {

	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret( void ) const {

	return (this->_darkestSecret);
}

void	Contact::setFirstName( std::string str ) {

	std::cout << "FIRST_NAME: ";
	std::getline(std::cin, str);
	this->_firstName = str;
}

void	Contact::setLastName( std::string str ) {

	std::cout << "LAST_NAME: ";
	std::getline(std::cin, str);
	this->_lastName = str;
}

void	Contact::setNickname( std::string str ) {

	std::cout << "NICKNAME: ";
	std::getline(std::cin, str);
	this->_nickname = str;
}

void	Contact::setPhoneNumber( std::string str ) {

	std::cout << "PHONE_NUMBER: ";
	std::getline(std::cin, str);
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret( std::string str ) {

	std::cout << "DARKESTSECRET: ";
	std::getline(std::cin, str);
	this->_darkestSecret = str;
}
