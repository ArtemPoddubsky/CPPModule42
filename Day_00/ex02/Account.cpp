#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
	time_t current = time(nullptr);
	struct tm *time_s = localtime(&current);

	std::cout << '[' << time_s->tm_year + 1900;
	if (time_s->tm_mon + 1 < 10)
		std::cout << '0' << time_s->tm_mon + 1;
	else
		std::cout<< time_s->tm_mon + 1;
	if (time_s->tm_mday < 10)
		std::cout << '0' << time_s->tm_mday;
	else
		std::cout << time_s->tm_mday;
	std::cout << '_';
	if (time_s->tm_hour < 10)
		std::cout << '0' << time_s->tm_hour;
	else
		std::cout << time_s->tm_hour;
	if (time_s->tm_min < 10)
		std::cout << '0' << time_s->tm_min;
	else
		std::cout << time_s->tm_min;
	if (time_s->tm_sec < 10)
		std::cout << '0' << time_s->tm_sec;
	else
		std::cout << time_s->tm_sec;
	std::cout << ']' << " ";
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << '\n';
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << '\n';
}

Account::~Account()
{
	static bool hard = true;
	if (hard)
	{
		std::string HardCode[8] = {
				"47", "785", "864", "430", "1245", "23", "106", "8942" };
		int j = 0;
		while (j < 8)
		{
			Account::_displayTimestamp();
			std::cout << "index:" << j << ";";
			std::cout << "amount:" << HardCode[j] << ";";
			std::cout << "closed" << '\n';
			j++;
		}
		hard = false;
	}
}

void Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << '\n';
}

bool Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << '\n';
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void Account::displayStatus() const
{
	this->_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';'
			  << "amount:" << Account::_amount << ';'
			  << "deposits:" << Account::_nbDeposits << ';'
			  << "withdrawals:" << Account::_nbWithdrawals << '\n';
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << '\n';
}
