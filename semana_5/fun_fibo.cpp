#include <iostream>
using namespace std;

long long fibonacci(int n){
    long long n1, n2, fibo;
    n1 = n2 = fibo = 1;
    for (int i = 1; i < n ; i++){
        fibo = n1 + n2 ;
        n1 = n2;
        n2 = fibo;
        }
return fibo;
}
void ImpFibo(int n){
    for(int i = 0; i < n;i++){
        cout << fibonacci(i) << " " << endl;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    ImpFibo(n);
    return 0;
}