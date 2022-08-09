#include <iostream>
#include <vector>
#include "I_Printable.h"
#include "Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
using namespace std;    
int main() {  
    Account *p1= new Savings_Account("Kratin", 1000, 2);
    Account *p2= new Checking_Account("Gio", 2000);
    Account *p3= new Trust_Account("Zaira", 500, 5);
    (*p1).deposit(1000);   
    cout<<*p1<<endl;
    (*p2).deposit(1000);
    cout<<*p2<<endl;
    (*p2).withdraw(500); 
    cout<<*p2<<endl;
    (*p3).deposit(1000);
    cout<<*p3<<endl;
    vector <Account*> acc {p1, p2, p3};
    display(acc);
    deposit(acc,1000);
    cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
//    Account joe;      //As Account is now a pure Abstract Base class so you cant declare an object of Account 
//    Checking_Account c;
//    cout << c << endl;
   
    Savings_Account s {"Frank", 5000, 2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;
    
        //Account frank{"Frank", 5000};         // should not compile
    //cout << frank << endl;

    Checking_Account frank {"Frank", 5000};
    cout << frank << endl;
    
    Account *trust = new Trust_Account("James");
    cout << *trust << endl;
    
    Account *p4 = new Checking_Account("Larry", 10000);
    Account *p5 = new Savings_Account("Moe", 1000);
    Account *p6 = new Trust_Account("Curly");
    
    std::vector<Account *> accounts {p4,p5,p6};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    return 0;
}