#include <iostream>
using namespace std;

void insertionSort(int arreglo[], int tamano) {
    for (int i = 1; i < tamano; i++) {
        int clave = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] > clave) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = clave;
    }
}

int main() {
    int arreglo[] = {5, 3, 1, 4, 2};
    int tamano = 5;

    insertionSort(arreglo, tamano);

    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl; 

    return 0;
}