#include <iostream>
using namespace std;

bool esPrimo(long long n){
    for(int i = 2 ; i < n/2; i++){
        if(!(n%i))
            return false;
    }
    return true;
}
int main() {
    const int N = 10001;
    int n = 3;
    int cont = 1;
    int primo = 2;

    while (cont < N) {
        if (esPrimo(n)) {
            cont++;
            primo = n;
        }
        n += 2;
    }

    cout << "El número primo en la posicion " << N << " es " << primo << endl;

    return 0;
}