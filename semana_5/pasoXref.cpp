#include <iostream>
using namespace std;

void incremento (int &a) {
    a+=1;
    cout << "a dentro de la funcion incremento: " << a << endl;
}
int main(){
    int a;
    cin >> a;
    incremento(a);
    cout << "la variable a fuera de incremento: " << a << endl;
    return 0;
}