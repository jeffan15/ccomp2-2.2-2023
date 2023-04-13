#include <iostream>
using namespace std;

bool esNUM(char car){
    return (car >= 48 and car <= 57);
}

int numEnString(string cad){
    int cont = 0;
    for (int i = 0; i < cad.length() ; i++){
        if(esNUM(cad.at(i))){
            cont++;
        }
    }
    return cont;
}

int main (){
    string an;
    cout << "ingrese la cadena: ";
    cin >> an;

    cout << numEnString(an) << endl;

    return 0;
}