#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : _name("Unnamed"), _isSigned(false), _gradeToSign(1), _gradeToExec(1) {

	// std::cout << "Form default constructor called" << std::endl;
}

Form::Form( Form const &src ) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec){

	*this = src;
	// std::cout << "Form copy constructor called" << std::endl;
}

Form::Form( std::string const name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {

	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExec > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
	// std::cout << "Form initialization called" << std::endl;
}

Form::~Form( void ) {

	// std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName( void ) const {

	return _name;
}

bool Form::getIsSigned( void ) const {

	return _isSigned;
}

int Form::getGradeSign( void ) const {

	return _gradeToSign;
}

int Form::getGradeExec( void ) const {

	return _gradeToExec;
}

void Form::beSigned( Bureaucrat const &crat) {

	if (crat.getGrade() > getGradeSign())
		throw Form::GradeTooLowException();
	_isSigned = true;
}

Form	&Form::operator=( Form const &rhs ) {

	_isSigned = rhs._isSigned;
	return *this;
}

std::ostream	&operator<<( std::ostream &o, Form const &i ) {

	o << "The Form " << i.getName() << " must be signed by grade " << i.getGradeSign() << " and executed by grade " << i.getGradeExec()
	<< ", and is " << (i.getIsSigned() ? "" : "not ") << "already signed." << std::endl;
	return (o);
}
