#include <iostream>
using namespace std;

int invertir(int N){
    int temp = 0;
    int i = N;
    while(i > 0){
        int last = i % 10;
        temp = temp * 10 + last;
        i /= 10;
    }
    return temp;
}
bool esPalindromo(int N){
    if (N == invertir(N)){
        return true;
    }
    else
        return false;
}

int main (){
    int x=0;
    for (int i = 100;i<=999;i++){
        for (int j = 100 ; j <= 999;j++){
            x = i*j;
            if(esPalindromo(x)){
                int temp;
                if(temp < x){
                temp = x;
                cout << temp << endl;
                }
            }
        }
    }
}