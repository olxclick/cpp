/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:21:36 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/17 10:58:40 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdio.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:"
			<< this->_accountIndex
			<< ";amount:"
			<< this->_amount 
			<< ";created"
			<< std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:"
			<< this->_accountIndex
			<< ";amount:"
			<< this->_amount 
			<< ";closed"
			<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:"
			<< this->_accountIndex
			<< ";p_amount:"
			<< this->_amount 
			<< ";deposit:"
			<< deposit
			<< ";amount:"
			<< this->_amount + deposit
			<< ";nb_deposits:"
			<< this->_nbDeposits
			<< std::endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:"
			<< this->_accountIndex
			<< ";p_amount:"
			<< this->_amount 
			<< ";withdrawal:"
			<< "refused"
			<< std::endl;
			return (false);
	}
	std::cout << "index:"
			<< this->_accountIndex
			<< ";p_amount:"
			<< this->_amount 
			<< ";withdrawal:"
			<< withdrawal
			<< ";amount:"
			<< this->_amount - withdrawal
			<< ";nb_withdrawals:"
			<< ++this->_nbWithdrawals
			<< std::endl;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	this->_displayTimestamp();
	std::cout << "index:"
			<< this->_accountIndex
			<< ";amount:"
			<< this->_amount 
			<< ";deposits:"
			<< this->_nbDeposits
			<< ";withdrawals:"
			<< this->_nbWithdrawals
			<< std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" 
			<< getNbAccounts() 
			<< ";total:" 
			<< getTotalAmount()
			<< ";deposits:"
			<< getNbDeposits()
			<< ";withdrawals:"
			<< getNbWithdrawals()
			<< std::endl;
}

void	Account::_displayTimestamp()
{
	time_t now = time(0);
	char* dt = ctime(&now);

	std::cout << dt;
}