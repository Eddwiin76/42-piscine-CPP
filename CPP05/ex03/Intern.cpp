#include "Intern.hpp"

Intern::Intern( void ) {

	// std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern( Intern const &src ) {

	*this = src;
	// std::cout << "Intern copy constructor called" << std::endl;

}

Intern::~Intern( void ) {

	// std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::createShrubberyCreationForm( std::string const &target ) const {

	return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomyRequestForm( std::string const &target ) const {

	return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialPardonForm( std::string const &target ) const {

	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const {

	FormType const formEntries[] = {
		{ "shrubbery creation", &Intern::createShrubberyCreationForm },
		{ "robotomy request", &Intern::createRobotomyRequestForm },
		{ "presidential pardon", &Intern::createPresidentialPardonForm }
	};

	for (int i = 0; i < 3; i++) {
		if (formName == formEntries[i].formName) {
			std::cout << "Intern create form <" << formName << ">" << std::endl;
			return (this->*(formEntries[i].create))(target);
		}
	}
	std::cout << formName << " is not a valid form type" << std::endl;
	return NULL;
}

Intern	&Intern::operator=( Intern const &rhs ) {

	(void)rhs;
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Intern const &i ) {

//	return (o);
//}
