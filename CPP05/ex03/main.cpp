#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {

	Bureaucrat b1("b1", 146);
	Bureaucrat b2("b2", 138);
	Bureaucrat b3("b3", 46);
	Bureaucrat b4("b4", 5);

	ShrubberyCreationForm shrub("sForm");
	RobotomyRequestForm robot("rForm");
	PresidentialPardonForm pres("pForm");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl << std::endl;

	std::cout << "Shrubbery Form" << std::endl;
	try {
		std::cout << shrub << std::endl;
		b1.signForm(shrub);
		std::cout << shrub << std::endl;
		b1.incrementGrade();
		b1.signForm(shrub);
		std::cout << shrub << std::endl;
		b2.executeForm(shrub);
		shrub.execute(b2); // envoie une exception
		std::cout << "THIS MESSAGE SHOULD NOT APPEAR" << std::endl;
	}

	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	b2.incrementGrade();
	b2.executeForm(shrub);

	std::cout << std::endl << "Robotomy Form" << std::endl;
	try {
		std::cout << robot << std::endl;
		b3.signForm(robot);
		b3.executeForm(robot);
		std::cout << robot << std::endl;
		b3.incrementGrade();
		b3.executeForm(robot);
	}

	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Presidential Form" << std::endl;
	try {
		std::cout << pres << std::endl;
		b4.executeForm(pres);
		pres.execute(b4); // envoie une exception
		std::cout << "THIS MESSAGE SHOULD NOT APPEAR" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	b4.signForm(pres);
	b4.executeForm(pres);

	std::cout << std::endl << "Intern Form" << std::endl;
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b4.signForm(*rrf);
		b2.executeForm(* rrf);
		b4.executeForm(* rrf);
		delete rrf;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;

}
