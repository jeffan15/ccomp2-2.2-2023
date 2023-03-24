# include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "ingrese tre numeros: " << endl;
    cin >> a >> b >> c;
    int suma = a + b + c;
    int promedio = suma / 3;
    int producto = a * b * c;
    if ( a > b && a > c)
    {
        cout << a << " es el mayor" << endl;
    }
    else if(b > a && b > c){
        cout << b << " es el mayor" << endl;
    }
    else if(c > a and c > b){
        cout << c << " es el mayor" << endl;
    }
    if ( a < b and a < c)
        cout << a << " es el menor" << endl;
    else if (b < a and b < c)
        cout << b << " es el menor" << endl;
    else if (c < a and c < b)
        cout << c << " es el menor" << endl;
    return 0;
}