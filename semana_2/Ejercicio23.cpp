# include <iostream>
using namespace std;

int main()
{
    int a, b, c, d ,e;
    cout << "ingrese los numero que quiera comparar" << endl;
    cin >> a >> b >> c >> d >> e;
    if ( a > b and a > c and a > d and a > e)
        cout << a << " es el mayor" << endl;
    if ( b > a and b > c and b > d and b > e)
        cout << b << " es el mayor" << endl;
    if ( c > a and c > b and c > d and c > e)
        cout << c << " es el mayor" << endl;
    if ( d > a and d > b and d > c and d > e)
        cout << d << " es el mayor" << endl;
    if ( e > b and e > e and e > d and e > a)
        cout << e << " es el mayor" << endl;
    
    if ( a < b and a < c and a < d and a < e)
        cout << a << " es el menor" << endl;
    if ( b < a and b < c and b < d and b < e)
        cout << b << " es el menor" << endl;
    if ( c < a and c < b and c < d and c < e)
        cout << c << " es el menor" << endl;
    if ( d < a and d < b and d < c and d < e)
        cout << d << " es el menor" << endl;
    if ( e < b and e < e and e < d and e < a)
        cout << e << " es el menor" << endl;
    return 0;
}