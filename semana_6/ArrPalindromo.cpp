#include <iostream>
#include <array>
using namespace std;

bool esPalindromo(int arr[], int tam){
    bool status;
    for(int i=1; arr[i] < tam/2; i++){
        for(int j=tam; arr[j] >= tam/2; j--){
            if (arr[i] != arr[j]){
                status = 1;
            }
        }
    }
    if(status==1)
        return true;
    else
        return false;
}

int main(){
    int tam = 5;
    int arr1[]={1,2,3,4,5};
    if(esPalindromo(arr1, tam)==true){
        cout << "su array es palindromo" << endl;
    }
    else
        cout << "su array no es palindromo" << endl;

}
