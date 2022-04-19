#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::getNbAccounts( void ) {

	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {

	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts()
				<< ";total:" << Account::getTotalAmount()
				<< ";deposits:" << Account::getNbDeposits()
				<< ";withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
}

Account::Account( int initial_deposit ) :	_accountIndex(_nbAccounts),
											_amount(initial_deposit),
											_nbDeposits(0),
											_nbWithdrawals(0) {

	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += _amount;
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
	return;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
	_nbAccounts--;
	_amount -= _amount;
	return;
}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	(void) withdrawal;
	_displayTimestamp();
	std::cout	<<"index:" << _accountIndex
				<< ";p_amount:" << _amount;
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout	<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
	std::cout	<< ";withdrawal:refused" << std::endl;
	return true;
}

int		Account::checkAmount( void ) const {

	return (Account::_amount);
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void ) {

	std::time_t	timestamp = std::time(NULL);
	tm			*time = localtime(&timestamp);
	std::cout	<< "["
				<< time->tm_year + 1900
				<< time->tm_mon + 1
				<< time->tm_mday
				<< '_'
				<< time->tm_hour
				<< time->tm_min
				<< time->tm_sec
				<< "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
