/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:17:14 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/28 11:10:38 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp( void )
{
    time_t current_time= time(NULL);
    tm* now = localtime(&current_time);

    char timestamp[17];
    strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", now);
    std::cout<<"["<<timestamp<<"] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout<<"accounts:"<<_nbAccounts;
    std::cout<<";total:"<<_totalAmount;
    std::cout<<";deposits:"<<_totalNbDeposits;
    std::cout<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
    return ;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";amount:"<<_amount;
    std::cout<<";deposits:"<<_nbDeposits;
    std::cout<<";withdrawals:"<<_nbWithdrawals<<std::endl;
    return ;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";p_amount:"<<_amount;
    std::cout<<";deposit:"<<deposit;
    _amount += deposit;
    std::cout<<";amount:"<<_amount;
    _nbDeposits++;
    std::cout<<";nb_deposits:"<<_nbDeposits<<std::endl;
    _totalNbDeposits++;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";p_amount:"<<_amount;
    if (_amount >= withdrawal)
    {
        std::cout<<";withdrawal:"<<withdrawal;
        std::cout<<";amount:"<<_amount;
        _nbWithdrawals++;
        std::cout<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
        _totalNbWithdrawals++;
        return (true);
    }
    std::cout<<";withdrawal:refused"<<std::endl;
    return (false);
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    std::cout<<"index:"<<_accountIndex;
    std::cout<<";amount:"<<_amount;
    std::cout<<";created"<<std::endl;
    return ;
}

Account::~Account(void)
{
    return ;
}
