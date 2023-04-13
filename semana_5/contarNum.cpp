#include <iostream>
using namespace std;

int contarNum(long long n){
    int cont = 0;
    while(n > 0){
        cont++;
        n/10;  
    }
    return cont;
}

int main(){
    int a;
    cin >> a;
    cout << "su numero tiene: " << contarNum(a) << endl;
}