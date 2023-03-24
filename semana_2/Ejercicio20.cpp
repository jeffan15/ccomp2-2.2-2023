# include <iostream>
using namespace std;

int main()
{
    int rad;
    cout << "ingrese el radio: " << endl;
    cin >> rad;
    float pi = 3.14159;
    cout << "El diametro es: " << 2 * rad << endl;
    cout << "La circunferencia es: " << 2 * pi * rad << endl;
    cout << "El area es: " << pi * (rad * rad) << endl;
}