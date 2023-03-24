# include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout << "ingrese dos numeros: " << endl;
    cin >> a >> b;
    if ( a % 2 == 0 )
        cout << a << " es par" << endl;
    else
        cout << a << " es impar" << endl;
    if ( b % 2 == 0 )
        cout << b << " es par" << endl;
    else
        cout << b << " es impar" << endl;
    if ( (a+b) % 2 == 0)
        cout << a + b << " es par" << endl;
    else
        cout << a + b << " es impar" << endl;
    return 0;
}