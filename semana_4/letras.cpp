#include <iostream>
using namespace std;

int main(){
    char n;
    cout << "Ingrese un caracter: ";
    cin >> n;
    int i = static_cast <int>(n);
    if (((65 <= i) and (i <= 90)) or ((97 <= i) and (i <= 122)))
        cout << "es una letra" << endl;
    else
        cout << "no es una letra" << endl;
    return 0;
}