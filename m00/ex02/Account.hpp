#ifndef _ACCOUNT_HPP
#define _ACCOUNT_HPP
#include <string>


class Account
{
    private:

       std:: string _nameOfTheCostumer;
       std:: string _phoneNumber      ;
       int          _accountNumber    ;
       int          _balance          ;


    public:
        Account(/* args */);
        ~Account();
};

Account::Account(/* args */)
{
}

Account::~Account()
{
}






#endif