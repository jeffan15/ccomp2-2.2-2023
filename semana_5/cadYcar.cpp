#include <iostream>
using namespace std;

int carEnString(string cad, char car){
    int cont = 0;
    for(int i = 0; i < cad.length() ; i++){
        if(car == cad.at(i)){
            cont++;
        }
    }
    return cont;
}

int main (){
    char n;
    string an;
    cout << "ingrese la cadena: ";
    cin >> an;
    cout << "ingrese el caracter: ";
    cin >> n;

    cout << carEnString(an, n) << endl;

    return 0;
}