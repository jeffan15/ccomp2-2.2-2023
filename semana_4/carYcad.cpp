#include <iostream>
using namespace std;

int main(){
    string var;
    char n;
    cout << "Ingrese la cadena: ";
    cin >> var;
    cout << "Ingrese el caracter que desea buscar: ";
    cin >> n;
    int t = var.length();
    int aux = 0;
    for(int i = 0; i < t; i++){
        if(var.at(i)==n){
            aux++;
        }
    }
    cout << aux << endl;
    return 0;
}