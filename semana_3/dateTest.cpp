#include <iostream>
#include "date.h"

using namespace std;

int main(){
    int a, b, c;
    cout << "ingrese un dia: ";
    cin >> a;
    cout << "ingrese un mes: ";
    cin >> b;
    cout << "ingrese un año: ";
    cin >> c;
    date fecha1(a,b,c);
    fecha1.setDay(a);
    fecha1.setMonth(b);
    fecha1.setYear(c);
    cout << "la fecha ingresada es: ";
    fecha1.displayDate();
}