#include "myclass.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    Account myAccount;
    myAccount.setAccountNumber('s');
    myAccount.setBalance(100);
    cout << myAccount.getCurrentBalance() << " is my balance." << endl;

    myAccount.withdrawMoney(20);
    cout << myAccount.getCurrentBalance() << " is my balance after withdrawing $20." << endl;

    myAccount.setInterest((double)0.06);
    cout << "My interest after 5 months at 6% is $" <<
    		myAccount.getInterest(5) << "." << endl;

    return 0; 
}
