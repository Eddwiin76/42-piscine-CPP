#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <stdexcept>
# include <cmath>
# include <climits>
# include <cstdlib>

class	Convert {

public:

	Convert( void );
	Convert( std::string const &arg);
	Convert( Convert const &src );
	virtual ~Convert( void );

	float		getArg( void ) const;
	void		makeConversion( void ) const;

	class ImpossibleConvertException : public std::exception {

		public:
			virtual const char *what() const throw() {
				return "impossible";
			}
	};

	class NonDisplayableException : public std::exception {

		public:
			virtual const char *what() const throw() {
				return "Non displayable";
			}
	};

	Convert	&operator=( Convert const &rhs );

private:

	float _arg;

	void toChar( void ) const;
	void toInt( void ) const;
	void toFloat( void ) const;
	void toDouble( void ) const;

};

//std::ostream	&operator<<( std::ostream &o, Convert const &i );

#endif
