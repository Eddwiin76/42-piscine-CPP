#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <stdexcept>

class	Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat( std::string const name, int grade);
	~Bureaucrat( void );

	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		incrementGrade( void );
	void		decrementGrade( void );

	Bureaucrat	&operator=( Bureaucrat const &rhs );

	class GradeTooHighException : public std::exception {

	public:

		virtual const char* what() const throw() {
			return "ERROR: Grade too high !";
		}
	};

	class GradeTooLowException : public std::exception {

	public:

		virtual const char* what() const throw() {
			return "ERROR: Grade too low !";
		}
	};

private:

	std::string const _name;
	int _grade;

};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i );

#endif
