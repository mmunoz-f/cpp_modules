/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 21:13:45 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/29 21:13:45 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <time.h>
#include "Account.hpp"

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	return ;
}

Account::~Account(void) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= this->_amount;
	return ;
}

int		Account::checkAmount (void) const {

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::getNbAccounts(void) {

	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (_totalAmount);
}

int	Account::getNbDeposits(void) {

	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {

	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0) {

		std::cout << "refused" << std::endl;
		return (0);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (1);
}

void	Account::_displayTimestamp(void) {

	time_t		t = time(0);
	struct tm	*tm = localtime(&t);

	std::cout << "[" << tm->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_sec << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
