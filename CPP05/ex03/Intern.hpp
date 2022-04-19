#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern {

public:

	Intern( void );
	Intern( Intern const &src );
	~Intern( void );

	Form *makeForm( std::string const &formName, std::string const &target ) const;

	Intern	&operator=( Intern const &rhs );

private:

	struct FormType {
		std::string const formName;
		Form *(Intern::*create)( std::string const &target) const;
	};

	Form *createShrubberyCreationForm( std::string const &target ) const;
	Form *createRobotomyRequestForm( std::string const &target ) const;
	Form *createPresidentialPardonForm( std::string const &target ) const;

};

//std::ostream	&operator<<( std::ostream &o, Intern const &i );

#endif
