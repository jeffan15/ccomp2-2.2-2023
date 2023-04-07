#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un nuero: ";
    cin >> n;
    int n1, n2, fibo;
    n1 = n2 = fibo = 1;
    for (int i = 1; i < n ; i++){
        fibo = n1 + n2 ;
        n1 = n2;
        n2 = fibo;
    }
    cout << "el numero fibo es: " << fibo << endl;
    return 0;
}