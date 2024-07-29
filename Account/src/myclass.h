#ifndef ACCOUNT_H
#include <math.h>
#define ACCOUNT_H
class Account { 
private:
    // class data 
    char accountNumber;
    double balance;
    double interest;

public:
    // class methods

    // set the Account identifier
    void setAccountNumber(char accNumber) {
        accountNumber = accNumber;
    }

    // set the account balance
    void setBalance(int userBalance) {
        balance = userBalance;
    }

    // set the account interest
    void setInterest(int userInterest) {
        interest = userInterest;
    }

    // return current balance
    double getCurrentBalance() {
        return balance;
    }

    // get interest after inputed months
    double getInterest(int months) {
        double interest = pow(balance * (1 + interest/months), months);
        return interest;
    }

    // add money to balance
    void addMoney(int money) {
        balance += money;
    }

    // withdraw money from balance
    void withdrawMoney(int money) {
        // if balance is less than the money that the user wants to withdraw, add $5 penalty
        if (balance < money) {
            balance -= 5;
        }
        else {
            balance -= money;
        }
    }

    
};
#endif