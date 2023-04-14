#include <iostream>
using namespace std;

void swap (int &a, int &b){
    int x = a;
    a = b;
    b = x;
}
int main (){
    int a, b;
    cin >> a >> b;
    swap(a,b);
    cout << "el valor de a es: " << a << endl;
    cout << "el valor de b es: " << b << endl;
    return 0;
}