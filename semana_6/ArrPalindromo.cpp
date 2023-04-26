#include <iostream>
using namespace std;

bool esPalindromo(int arreglo[], int tam) {
    for (int i = 0; i < tam / 2; i++) {
        if (arreglo[i] != arreglo[tam - i - 1]) {
            return false;
        }
    }
    return true;
}

bool esPalindromoRecursivo(int arr[], int inicio, int fin) {
    if (inicio >= fin) {
        return true;
    }
    if (arr[inicio] != arr[fin]) {
        return false;
    }
    return esPalindromoRecursivo(arr, inicio + 1, fin - 1);
}


int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int tam = 5;
    cout << esPalindromo(arr1, tam) << endl;
    int arr2[] = {1, 2, 3, 4, 5};
    cout << esPalindromo(arr2, tam) << endl;

    return 0;
}