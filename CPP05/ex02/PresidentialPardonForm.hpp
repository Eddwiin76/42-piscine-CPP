#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
#include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const target);
	PresidentialPardonForm( PresidentialPardonForm const &src );
	~PresidentialPardonForm( void );

	void action( void ) const;

	PresidentialPardonForm	&operator=( PresidentialPardonForm const &rhs );

private:

};

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i );

#endif
