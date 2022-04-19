#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include "Form.hpp"
# include <cstdlib>

class	RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const &src );
	RobotomyRequestForm( std::string const target);
	~RobotomyRequestForm( void );

	void action( void ) const;

	RobotomyRequestForm	&operator=( RobotomyRequestForm const &rhs );

private:

};

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &i );

#endif
