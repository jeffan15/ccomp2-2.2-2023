#include <iostream>
using namespace std;

int main(){
    char n, x;
    cout << "Ingrese el primer caracter: ";
    cin >> n;
    cout << "Ingrese el segundo caracter: ";
    cin >> x;
    int i = static_cast <int>(n);
    int j = static_cast <int>(x);
    if ((48 <= i and i <= 57) and (48 <= j and j <= 57)){
        int sum = (i - '0') + (j - '0');
        cout << "la suma es: " << sum << endl;
    }
    else
        cout << "sus caracteres no son numeros" << endl;
    return 0;
}