#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( void );
	void	searchContact( void );

private:

	Contact		_contacts[8];
	static int	_numbersOfContacts;
	void		_displayContats( void ) const;
	void		_truncate( std::string str ) const;
	void 		_displayContactInfo( int index ) const;
};

#endif
