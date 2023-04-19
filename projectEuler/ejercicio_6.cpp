#include <iostream>
using namespace std;

int main()
{
    long long x = 100;

    long long suma = 0;
    long long sumaDeCuadrados = 0;

    for (long long i = 1; i <= x; i++)
    {
        suma += i;
        sumaDeCuadrados += i*i;
    }
    long long cuadradoDeLasuma = suma * suma;
    cout << (cuadradoDeLasuma - sumaDeCuadrados) << endl;
    return 0;
}