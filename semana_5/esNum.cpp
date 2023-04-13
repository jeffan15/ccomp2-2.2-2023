#include <iostream>
using namespace std;

bool esNUM(char car){
    return (48 <= car and car >= 57);
}

int main (){
    char n;
    cout << "ingrese el caracter: ";
    cin >> n;

    cout << esNUM(n) << endl;

    return 0;
}