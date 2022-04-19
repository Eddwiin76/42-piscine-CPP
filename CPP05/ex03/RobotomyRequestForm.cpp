#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Robotomy", 72, 45) {

	// std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) {

	*this = src;
	// std::cout << "RobotomyRequestForm copy constructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : Form(target, 72, 45) {

	// std::cout << "RobotomyRequestForm initialization called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	// std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::action( void ) const {

	std::cout << "VRRRRRR... CLIC CLIC BOOM ! ";
	std::srand(time(0));
	if (std::rand() % 2)
		std::cout << "<" << getName() << "> was robotomized successfully !" << std::endl;
	else
		std::cout << "<" << getName() << "> exploded miserably..." << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {

	Form::operator=( rhs );
	return *this;
}

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &i ) {

	o << "The Form " << i.getName() << " must be signed by grade " << i.getGradeSign() << " and executed by grade " << i.getGradeExec()
	<< ", and is" << (i.getIsSigned() ? "" : " not") << " signed.";
	return (o);
}
