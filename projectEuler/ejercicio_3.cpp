#include <iostream>
using namespace std;

long long PrimoMasLargo(long long N){
    for (int i=2 ; ( i * i ) < N ; i++){
        if(!(N % i))
            N/=i;
    }
    return N;
}

int main (){
    long long N = 600851475143;
    cout << "el numero primo mas largo es: " << PrimoMasLargo(N) << endl;
    return 0;
}