#include <iostream>

using namespace std;

int main() {
    int edad;
    double FrecuenciaCardiacaEnReposo = 60; 
    double intensidad = 0.7;

    cout << "Ingresa tu edad: ";
    cin >> edad;


    double Clasica_mhr = ((220 - edad) - FrecuenciaCardiacaEnReposo) * intensidad + FrecuenciaCardiacaEnReposo;
    cout << "Clasica MHR: " << Clasica_mhr << " bpm" << endl;

    double tanaka_mhr = 208 - 0.7 * edad;
    cout << "Tanaka MHR: " << tanaka_mhr << " bpm" << endl;

    double gellish_mhr = 207 - (0.7 * edad);
    gellish_mhr = gellish_mhr - (0.3 * gellish_mhr);
    cout << "Gellish MHR: " << gellish_mhr << " bpm" << endl;
    int menor;
    int mayor;
    if(Clasica_mhr < tanaka_mhr and Clasica_mhr < gellish_mhr){
        menor = Clasica_mhr;
    }
    if(tanaka_mhr < Clasica_mhr and tanaka_mhr < gellish_mhr){
        menor = tanaka_mhr;
    }
    if(gellish_mhr < tanaka_mhr and gellish_mhr < Clasica_mhr){
        menor = gellish_mhr;
    }
    if(Clasica_mhr > tanaka_mhr and Clasica_mhr > gellish_mhr){
        mayor = Clasica_mhr;
    }
    if(tanaka_mhr > Clasica_mhr and tanaka_mhr > gellish_mhr){
        mayor = tanaka_mhr;
    }
    if(gellish_mhr > tanaka_mhr and gellish_mhr > Clasica_mhr){
        mayor = gellish_mhr;
    }
    cout << "Para una edad de " << edad << " anios, el rango de mhr sugerido es: " << menor << "-" << mayor << " bpm" << endl;

    return 0;
}
