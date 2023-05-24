#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <vector>
using namespace std;

int main(){
    CommissionEmployee *employee1 = new CommissionEmployee ("Sue", "jones", "222-22-2222", 100000, .05);
    CommissionEmployee *employee2 = new CommissionEmployee ("Maria", "Monzerrat", "444-44-4444", 7500, .06);
    CommissionEmployee *employee3 = new CommissionEmployee ("Mari", "Manrique", "555-55-5555", 12500, .04);
    CommissionEmployee *employee4 = new CommissionEmployee ("Juan", "Estrada", "666-66-6666", 6000, .08);
    CommissionEmployee *employee5 = new CommissionEmployee ("Jhonny", "Freno", "777-77-7777", 150000, .07);

    /*BasePlusCommissionEmployee employee10 ("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    CommissionEmployee *ptr1 = &employee1;
    cout << ptr1 -> toString() << endl;

    BasePlusCommissionEmployee *ptr2 = &employee10;
    cout << ptr2 -> toString() << endl;

    CommissionEmployee &ref1 = employee1;
    BasePlusCommissionEmployee &ref2 = employee10;

    cout << ref1.toString() << endl;
    cout << ref2.toString() << endl;*/


    vector<CommissionEmployee*> vec_employees;
    vec_employees.push_back( employee1 );
    vec_employees.push_back( employee2 );
    vec_employees.push_back( employee3 );
    vec_employees.push_back( employee4 );
    vec_employees.push_back( employee5 );

    for(CommissionEmployee *employee : vec_employees){
        cout << employee->toString() << endl;
    }

    delete employee1;
    delete employee2;
    delete employee3;
    delete employee4;
    delete employee5;
}