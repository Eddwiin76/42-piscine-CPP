#include <iostream>
#include "Bureaucrat.hpp"

int	main() {

	try
	{
		Bureaucrat ikea("ikea", 149);
		std::cout << ikea;
		ikea.decrementGrade();
		std::cout << ikea;

		Bureaucrat truc = ikea;
		std::cout << truc;
		ikea.decrementGrade();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
