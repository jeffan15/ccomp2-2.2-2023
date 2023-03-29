#include <iostream>
using namespace std;

int main(){
    double a,b;
    cout << "ingrese su estatura en metros: " ;
    cin >> a;
    cout << "ingrese su peso en kilogramos: " ;
    cin >> b;
    double BMI = b / ( a * a ) ;
    cout << "Su indice de masa es de: " << BMI << endl;
    if (BMI < 18.5)
        cout << "Usted esta bajo de peso" << endl;
    if (BMI >= 18.5 and BMI <= 24.9 )
        cout << "Su indice de masa es normal" << endl;
    if (BMI >= 25 and BMI <= 29.9 )
        cout << "Su indice de masa indica sobrepeso" << endl;
    if (BMI >= 30 )
        cout << "Su indice de masa indica obecidad" << endl;

    return 0;
}