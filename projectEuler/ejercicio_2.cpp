#include <iostream>
using namespace std;

long long fibonacciPares(int x){
    long long n1, n2, fibo , sum;
    n1 = n2 = fibo = 1;
    sum = 0;
    for (int i = 1; i < x ; i++){
        fibo = n1 + n2 ;
        n1 = n2;
        n2 = fibo;
        if (!(fibo%2)){
            sum += fibo;
        }
    }
    if (sum > 5000000)
        return 0;
    else
        return sum;
}

int main (){
    int x;
    cout << "ingrese el numero limite: ";
    cin >> x;
    cout << "la suma de los pares es: " << fibonacciPares(x) << endl;//32 es el numero que no supera 5000000
}