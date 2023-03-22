#include <iostream>

using namespace std;

int main(){
    int a;
    int b = 18;

    cout << "ingrese su edad: ";
    cin >> a;
    
    if (a>=18)
        cout << "eres mayor de edad"<< endl;
    else
        cout << "eres menor de edad"<< endl;
    return 0;
}
