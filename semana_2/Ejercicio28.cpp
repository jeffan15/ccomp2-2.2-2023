# include <iostream>
using namespace std;

int main (){
    cout << "ingrese un numero de 4 digitos" << endl;
    int a;
    cin >> a;
    int w, x, y ,z;
    w = a / 1000;
    x = a / 100;
    x = x % 10; 
    y = a / 10;
    y = y % 10;
    z = a % 10;
    cout << z << "\t" << y << "\t" << x << "\t" << w << endl;
    return 0;
}