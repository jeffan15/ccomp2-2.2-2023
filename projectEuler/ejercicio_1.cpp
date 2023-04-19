#include <iostream>
using namespace std;

int sumaDeMultiplos( int x ){
    int sum = 0;
    for (int i = 0; i < x; i++){
        if (!(i % 3) or !(i % 5)){
            sum += i;
        }
    }
    return sum;
}

int main (){
    int x;
    cout << "ingrese el numero limite: ";
    cin >> x;
    cout << "la suma de los multiplos es: " << sumaDeMultiplos(x) << endl;
}