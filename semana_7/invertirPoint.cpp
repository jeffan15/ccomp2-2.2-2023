#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

void intercambiarPoint(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void invertirArreglo(int* arr, const int tam){
    int *fin = (arr + tam -1);
    while(arr < fin){
        intercambiarPoint(arr++,fin--);
    }
}

void PointRec(int* arr, int *fin){
    if(arr>=fin)
        return;
    intercambiarPoint(arr, fin);
    return PointRec(++arr, --fin);
}
 void print(int *arr, int tam){
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
 }
int main(){
    int arr[]={1,2,3,4,5};
    int tam =sizeof(arr) / sizeof(arr[0]);
    int* fin = arr + tam-1;
    PointRec(arr, fin);
    print (arr, tam);
    return 0;
}