#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include <stdexcept>

class Bureaucrat;

class	Form {

public:

	Form( void );
	Form( Form const &src );
	Form( std::string const name, int gradeToSign, int gradeToExec);
	~Form( void );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;
	void		beSigned( Bureaucrat const &crat);

	Form	&operator=( Form const &rhs );

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
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExec;
};

std::ostream	&operator<<( std::ostream &o, Form const &i );

#endif
