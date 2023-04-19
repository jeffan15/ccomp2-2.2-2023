#include <iostream>
using namespace std;

int main(){
    string var;
    char n;
    cout << "Ingrese la cadena de numeros: ";
    cin >> var;
    int t = var.length();
    int aux;
    int sum = 0;
    for(int i = 0; i < t; i++){
            sum += var.at(i) - '0';
    }
    cout << sum << endl;
    return 0;
}