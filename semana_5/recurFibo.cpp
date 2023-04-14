#include <iostream>
using namespace std;

long long fibo (int n) {
    if(n == 0 or n == 1)
        return 1;
    else
        return fibo( n - 2 ) + fibo ( n - 1 );
}
int main(){
    int a;
    cin >> a;
    cout << "El numero fibonacci es: " << fibo(a) << endl;
}