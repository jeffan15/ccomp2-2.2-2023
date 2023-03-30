#include <iostream>
#include <string>
using namespace std;

class account {
public:
    account(string accountName, int initialBalance): name{accountName}{
        if(initialBalance > 0){
            balance = initialBalance;
        }
    }
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    int getBalance() const {
        return balance;
    }
    void setName(string accountName){
        name = accountName;
    }
    string getName() const {
        return name;
    }
    void withdraw(int retiro){
        if(retiro > balance){
            cout << "su valor de retiro es mayor a su saldo, no puede hacer el retiro." << endl;
        }
        else{
            balance = balance - retiro;
        }
    }
private:
    string name;
    int balance{0};
};