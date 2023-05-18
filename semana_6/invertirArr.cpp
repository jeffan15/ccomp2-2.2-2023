#include <iostream>
using namespace std;

void invertir(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
void invertirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano / 2; i++) {
        int temp = arreglo[i];
        arreglo[i] = arreglo[tamano - i - 1];
        arreglo[tamano - i - 1] = temp;
    }
}


void invertirArregloRecursivo(int arreglo[], int inicio, int fin) {
    if (inicio >= fin) {
        return;
    }
    int temp = arreglo[inicio];
    arreglo[inicio] = arreglo[fin];
    arreglo[fin] = temp;
    invertirArregloRecursivo(arreglo, inicio + 1, fin - 1);
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int tamano = 5;
    invertirArreglo(arreglo, tamano);
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}