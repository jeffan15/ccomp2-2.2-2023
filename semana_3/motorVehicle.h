#include <string>
#include <iostream>
using namespace std;

class motorVehicle
{
private:
    string make;
    string fuelType;
    int yearOfManufacture {0};
    string color;
    int engineCapacity {0};
public:
    motorVehicle(string initMake, string initFuelType, int initYearOfManufacture, string initColor, int initEngineCapacity){
        initMake = make;
        initFuelType = fuelType;
        initYearOfManufacture = yearOfManufacture;
        initColor = color;
        initEngineCapacity = engineCapacity;
    }
    void setMake(string initMake) {
        make = initMake;
    }
    void setFuelType(string initFuelType) {
        fuelType = initFuelType;
    }
    void setYearOfManufacture(int initYearOfManufacture) {
        yearOfManufacture = initYearOfManufacture;
    }
    void setColor(string initColor) {
        color = initColor;
    }
    void setEngineCapacity(int initEngineCapacity) {
        engineCapacity = initEngineCapacity;
    }

    string getMake() const {
        return make;
    }
    string getFuelType() const {
        return fuelType;
    }
    int getYearOfManufacture() const {
        return yearOfManufacture;
    }
    string getColor() const {
        return color;
    }
    int getEngineCapacity() const {
        return engineCapacity;
    }

    void displayCarDetails() {
        cout << "Make: " << make << endl;
        cout << "Fuel type: " << fuelType << endl;
        cout << "Year of manufacture: " << yearOfManufacture << endl;
        cout << "Color: " << color << endl;
        cout << "Engine capacity: " << engineCapacity << " cc" << endl;
        }
};