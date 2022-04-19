#include "Convert.hpp"

Convert::Convert( void ) {

	// std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert( std::string const &arg ) : _arg(std::atof(arg.c_str())) {

	makeConversion();
	// std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert( Convert const &src ) {

	*this = src;
	// std::cout << "Convert copy constructor called" << std::endl;

}

Convert::~Convert( void ) {

	// std::cout << "Convert destructor called" << std::endl;
}

float Convert::getArg() const {

	return _arg;
}

void Convert::makeConversion( void ) const {

	try {
		toChar();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		toInt();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		toFloat();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		toDouble();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void Convert::toChar() const {

	char c = static_cast<char>(_arg);

	std::cout << "char: ";
	if (_arg < CHAR_MIN || _arg > CHAR_MAX || std::isnan(_arg))
		throw ImpossibleConvertException();
	if (!std::isprint(c))
		throw NonDisplayableException();
	std::cout << "'" << c << "'" << std::endl;
}

void Convert::toInt() const {

	int i = static_cast<int>(_arg);

	std::cout << "int: ";
	if (_arg < INT_MIN || _arg > INT_MAX || std::isnan(_arg))
		throw ImpossibleConvertException();
	std::cout << i << std::endl;
}

void Convert::toFloat() const {

	std::string str = ((_arg - static_cast<int>(_arg)) != 0 ? "" : ".0");
	std::cout << "float: " << _arg << str << "f" << std::endl;
}

void Convert::toDouble() const {

	double i = static_cast<double>(_arg);
	std::string str = ((_arg - static_cast<int>(_arg)) != 0 ? "" : ".0");
	std::cout << "double: " << i << str << std::endl;
}

Convert	&Convert::operator=( Convert const &rhs ) {

	_arg = rhs.getArg();
	return *this;
}

//std::ostream	&operator<<( std::ostream &o, Convert const &i ) {

//	return (o);
//}
