#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int limit = 2000000;
    vector<bool> sieve(limit, true);
    long long sum = 0;
    for (int i = 2; i < limit; i++) {
        if (sieve[i]) {
            sum += i;
            for (int j = i + i; j < limit; j += i) {
                sieve[j] = false;
            }
        }
    }
    cout << "La suma de todos los numeros primos por debajo de 2 millones es: " << sum << endl;
    return 0;
}