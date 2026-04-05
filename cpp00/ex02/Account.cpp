/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 19:39:14 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/05 20:16:00 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:"    << _nbAccounts         << ";"
              << "total:"       << _totalAmount        << ";"
              << "deposits:"    << _totalNbDeposits    << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
: _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:"  << _accountIndex   << ";"
              << "amount:" << initial_deposit << ";"
              << "created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:"  << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "closed"  << std::endl;
    _nbAccounts--;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:"    << _accountIndex << ";"
              << "p_amount:" << _amount       << ";"
              << "deposit:"  << deposit       << ";";
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "amount:"      << _amount     << ";"
              << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:"    << _accountIndex << ";"
              << "p_amount:" << _amount       << ";"
              << "withdrawal:";
    if (withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << withdrawal << ";"
                  << "amount:"         << _amount        << ";"
                  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "refused" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:"       << _accountIndex     << ";"
              << "amount:"      << _amount           << ";"
              << "deposits:"    << _nbDeposits       << ";"
              << "withdrawals:" << _nbWithdrawals    << std::endl;
}

void Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
	std::tm     *local_time = std::localtime(&now);
	char        buffer[80];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
	std::cout << buffer;
}
