#include <iostream>
using namespace std;

long long MCD( long long a, long long b)
{
    while (a != 0){
        long long c = a;
        a = b % a;
        b = c;
    }
    return b;
}

long long MCM(long long a, long long b){
    return a * (b / MCD(a, b));
}

int main()
{
    int x = 20;
    long long result = 1;
    for (int i = 2; i <= x; i++)
        result = MCM(result, i);

    cout << result << endl;
    return 0;
}