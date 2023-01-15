#include <iostream>
#include <ctime>
#include <iomanip>
#include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts++),
			_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount +=initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";created\n";
}

Account::Account(void) : _accountIndex(Account::_nbAccounts++), _amount(0),
						_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";created\n";
}

Account::~Account(void){
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			  << this->_amount << ";closed\n";
}

int Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(){
	return (Account::_totalAmount);
}

int Account::getNbDeposits(){
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(){
	time_t now;
	struct tm *ptr;

	time(&now);
	ptr = localtime(&now);
	std::cout << "[" << std::setfill('0')
		 << std::setw(4) << ptr->tm_year + 1900
		 << std::setw(2) << ptr->tm_mon + 1
		 << std::setw(2) << ptr->tm_mday
		 << "_"
		 << std::setw(2) << ptr->tm_hour
		 << std::setw(2) << ptr->tm_min
		 << std::setw(2) << ptr->tm_sec
		 << std::setw(1)
		 << "] ";
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:"
			<< this->_amount << ";deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
			<< Account::_totalAmount << ";deposits:"
			<< Account::_totalNbDeposits << ";withdrawals:"
			<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	int amount = this->_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	++Account::_totalNbDeposits;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << amount << ";deposit:"
			<< deposit << ";amount:" << this->_amount
			<< ";nb_deposits:" << ++this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< "p_amount:" << this->_amount
			<< ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused\n";
		return  (false);
	}
	this->_amount -= withdrawal;
	++this->_nbWithdrawals;
	Account::_totalAmount -=withdrawal;
	++Account::_totalNbWithdrawals;
	std::cout << withdrawal << ";"
		<< "amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}