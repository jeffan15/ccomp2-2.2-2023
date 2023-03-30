#include <iostream>
#include "motorVehicle.h"

using namespace std;

int main() {
    string a;
    string b;
    int c;
    string d;
    int e;
    cout << "ingrese los datos del carro que quiere: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    motorVehicle car1(a, b, c, d, e);
    car1.setMake(a);
    car1.setFuelType(b);
    car1.setYearOfManufacture(c);
    car1.setColor(d);
    car1.setEngineCapacity(e);
    cout << "Car 1 details: " << endl;
    car1.displayCarDetails();


    return 0;
}