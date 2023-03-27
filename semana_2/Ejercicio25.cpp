# include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout << "ingre tres numeros: " << endl;
    cin >> a >> b >> c;
    if( !(c % a) )
        cout << a << " es factor de " << c << endl;
    else
        cout << a << " no es factor de " << c << endl;
    if( !(c % b) )
        cout << b << " es factor de " << c << endl;
    else
        cout << b << " no es factor de " << c << endl;
    return 0;
}