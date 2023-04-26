#include <iostream>
using namespace std;

void bubbleSort(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arreglo[] = {5, 3, 1, 4, 2};
    int tamano = 5;

    bubbleSort(arreglo, tamano);

    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}