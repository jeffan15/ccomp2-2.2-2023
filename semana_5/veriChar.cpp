#include <iostream>
using namespace std;

bool esletra(char car){
    return ((48<= car and car >= ) or (97 <= car and car >= 122));
}

int main (){
    char n;
    cout << "ingrese el caracter: ";
    cin >> n;

    cout << esletra(n) << endl;

    return 0;
}