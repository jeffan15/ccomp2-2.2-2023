# include <iostream>
using namespace std;

int main (){
    double millasRecorridas;
    double costoPorGalon;
    double millasPorGalon;
    double CostoDeEstacionamiento;
    double PeajesPorDia;
    double costoTotalDeConducir;
    cout << "ingrese su total de millas recorridas al dia: ";
    cin >> millasRecorridas;
    cout << "ingrese su costo por galon de gasolina: ";
    cin >> costoPorGalon;
    cout << "ingrese un promedio de consumo de millas por galon: ";
    cin >> millasPorGalon;
    cout << "ingrese su total de pagos por estacionamiento por dia: ";
    cin >> CostoDeEstacionamiento;
    cout << "ingrese su total de pagos por peaje al dia: ";
    cin >> PeajesPorDia;

    costoTotalDeConducir = ( ( millasRecorridas / millasPorGalon ) * costoPorGalon ) + CostoDeEstacionamiento + PeajesPorDia ;
    cout << "su costo toal por conducir es: " << costoTotalDeConducir << endl;
    return 0;
}