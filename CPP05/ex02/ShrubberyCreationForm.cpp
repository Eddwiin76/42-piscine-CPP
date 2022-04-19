#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Shrubbery", 145, 137) {

	// std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) {

	*this = src;
	// std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) : Form(target, 145, 137) {

	// std::cout << "ShrubberyCreationForm initialization called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	// std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::action( void ) const {

	std::string const name = getName() + "_shrubbery";
	std::ofstream ofs;
	ofs.open(name.c_str(), std::ofstream::out);
	ofs << "                                              ." << std::endl;
	ofs << "                                   .         ;" << std::endl;
	ofs << "      .              .              ;%     ;;" << std::endl;
	ofs << "        ,           ,                :;%  %;" << std::endl;
	ofs << "         :         ;                   :;%;'     .," << std::endl;
	ofs << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	ofs << "             `@%.  `;@%.      ;@@%;" << std::endl;
	ofs << "               `@%%. `@%%    ;@@%;" << std::endl;
	ofs << "                 ;@%. :@%%  %@@%;" << std::endl;
	ofs << "                   %@bd%%%bd%%:;" << std::endl;
	ofs << "                     #@%%%%%:;;" << std::endl;
	ofs << "                     %@@%%%::;" << std::endl;
	ofs << "                     %@@@%(o);  . '" << std::endl;
	ofs << "                     %@@@o%;:(.,'" << std::endl;
	ofs << "                 `.. %@@@o%::;" << std::endl;
	ofs << "                    `)@@@o%::;" << std::endl;
	ofs << "                     %@@(o)::;" << std::endl;
	ofs << "                    .%@@@@%::;" << std::endl;
	ofs << "                    ;%@@@@%::;." << std::endl;
	ofs << "                   ;%@@@@%%:;;;." << std::endl;
	ofs << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	ofs.close();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs ) {

	Form::operator=( rhs );
	return *this;
}

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &i ) {

	o << "The Form " << i.getName() << " must be signed by grade " << i.getGradeSign() << " and executed by grade " << i.getGradeExec()
	<< ", and is" << (i.getIsSigned() ? "" : " not") << " signed.";
	return (o);
}
