#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Presidential", 25, 5) {

	// std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src ) {

	*this = src;
	// std::cout << "PresidentialPardonForm copy constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : Form(target, 25, 5) {

	// std::cout << "PresidentialPardonForm initialization called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	// std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::action( void ) const {

	std::cout << "<" << getName() << "> was forgiven by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs ) {

	Form::operator=( rhs );
	return *this;
}

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i ) {

	o << "The Form " << i.getName() << " must be signed by grade " << i.getGradeSign() << " and executed by grade " << i.getGradeExec()
	<< ", and is" << (i.getIsSigned() ? "" : " not") << " signed.";
	return (o);
}
