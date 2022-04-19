#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("unnamed"),_hp(10),_energy(10),_attack(0) {

	std::cout << "ClapTrap <" << _name << "> default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name),_hp(10),_energy(10),_attack(0) {

	std::cout << "ClapTrap <" << _name << "> initialization constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {

	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap <" << _name << "> destructor called" << std::endl;
}

void	ClapTrap::attack( std::string const &target ) {

	std::cout << "ClapTrap <" << _name << "> attacks <" << target
				<< "> causing " << _attack << " points of domage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount) {

	if (_hp > 0) {
		_hp -= amount;
		std::cout << "ClapTrap <" << _name << "> took " << amount << " points of domage";
		if (_hp <= 0) {
			_hp = 0;
			std::cout << " and died !" <<std::endl;
		}
		else
			std::cout << " and survived with " << _hp << " HP !" << std::endl;
	}
	else {
		std::cout << "ClapTrap <" << _name << "> can't be attacked because he's already dead." << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount) {

	std::cout << "ClapTrap <" << _name << "> is repaired, and ";
	if (_hp == 0)
		std::cout << "he revived with ";
	else
		std::cout << "he have now ";
	_hp += amount;
	std::cout << _hp << " HP !" << std::endl;
}

std::string	ClapTrap::getName() const {

	return (_name);
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	_name = rhs._name;
	_hp = rhs._hp;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return (*this);
}

// std::ostream	&operator<<( std::ostream &o, ClapTrap const &i ) {

// 	return (o);
// }
