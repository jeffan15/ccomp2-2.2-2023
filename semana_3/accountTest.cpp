#include <iostream>
#include "account.h"

using namespace std;

int main (){
    account Account1{"Jane Green", 50};
    account Account2{"John Blue", -7};
    cout << "account1: " << Account1.getName() << "balance is $: " << Account1.getBalance() << endl;
    cout << "account2: " << Account2.getName() << "balance is $: " << Account2.getBalance() << endl;
    cout << "\nEnter deposit amount for account1: " << endl;
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << endl;
    Account1.deposit(depositAmount);
    cout << "\naccount1: " << Account1.getName() << "balance is $: " << Account1.getBalance() << endl;
    cout << "account2: " << Account2.getName() << "balance is $: " << Account2.getBalance() << endl;
    cout << "\nEnter deposit amount for account2: " << endl;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance" << endl;
    Account2.deposit(depositAmount);
    cout << "\naccount1: " << Account1.getName() << "balance is $: " << Account1.getBalance() << endl;
    cout << "account2: " << Account2.getName() << "balance is $: " << Account2.getBalance() << endl;
    int retiro;
    cout << "ingrese la cantidad que desea retirar: " ;
    cin >> retiro;
    Account1.withdraw(retiro);
    cout << "le queda " << Account1.getBalance() << "$ en su cuenta1." << endl;
}