# include <iostream>
using namespace std;

int main (){
    cout << "ingrese una letra:" << endl;
    char l;
    cin >> l;
    cout << "el numero ASCII es: " << static_cast<int>(l) << endl;
    return 0;
}