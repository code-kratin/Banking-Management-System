#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"
#include "I_Printable.h"
class Checking_Account: public Account {    //Dont derive from I_Printable here as the derived class Account is already derived from I_Printable
    //friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    virtual bool withdraw(double amount);
    virtual bool deposit(double amount);
    // Inherits the Account::deposit method
    virtual void print(std::ostream &os);
};

#endif // _CHECKING_ACCOUNT_H_