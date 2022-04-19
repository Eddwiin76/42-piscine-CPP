#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	try {
		Bureaucrat ikea("ikea", 149);
		std::cout << ikea;
		ikea.decrementGrade();
		std::cout << ikea;

		Form ulaire("Ulaire", 109, 1);
		std::cout << ulaire;
		ikea.signForm(ulaire);
		std::cout << ulaire;
		Bureaucrat mine("mine", 1);
		mine.signForm(ulaire);
		std::cout << ulaire;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
