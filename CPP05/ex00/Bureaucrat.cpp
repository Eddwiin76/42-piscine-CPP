#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unnamed") {

	// std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) : _name(src._name) {

	*this = src;
	// std::cout << "Bureaucrat copy constructor called" << std::endl;

}

Bureaucrat::Bureaucrat( std::string const name, int grade) : _name(name), _grade(grade) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	// std::cout << "Bureaucrat initialization called" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {

	// std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName( void ) const {

	return _name;
}

int Bureaucrat::getGrade( void ) const {

	return _grade;
}

void Bureaucrat::incrementGrade( void ) {

	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade( void ) {

	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs ) {

	_grade = rhs._grade;
	return *this;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i ) {

	o << i.getName() << ", bureaucrat grade <" << i.getGrade() << ">" << std::endl;
	return (o);
}
