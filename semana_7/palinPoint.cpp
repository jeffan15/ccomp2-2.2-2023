#include <iostream>
using namespace std;

bool esPalIter(int* arr, const int tam){
    int *fin = (arr + tam -1);
    while (arr <= fin)
    {
        if(*arr++ != *fin--)
            return false;
    }
    return true;
}

bool esParRec(int *ini, int *fin){
    if (ini >+ fin)
        return true;
    if (*ini != *fin)
        return false;
    esParRec(++ini, --fin);
}
int main(){
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << esPalIter(arr,7)<< endl;
}