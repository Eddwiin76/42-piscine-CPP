#include "Karen.hpp"

Karen::Karen( void ) {

}

Karen::~Karen( void ) {

}

void	Karen::complain( std::string level ) {

	std::string	cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for ( int i = 0; i < 5; i++ ) {
		if (i == 4 || cmd[i].compare(level) == 0) {
			switch (i) {
				case 0:
					std::cout << "[ DEBUG ]" << std::endl;
					Karen::_debug();
					std::cout << std::endl;
				case 1:
					std::cout << "[ INFO ]" << std::endl;
					Karen::_info();
					std::cout << std::endl;
				case 2:
					std::cout << "[ WARNING ]" << std::endl;
					Karen::_warning();
					std::cout << std::endl;
				case 3:
					std::cout << "[ ERROR ]" << std::endl;
					Karen::_error();
					std::cout << std::endl;
					return;
				default:
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
					return;
			}
		}
	}
}

void	Karen::_debug( void ) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info( void ) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error( void ) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
