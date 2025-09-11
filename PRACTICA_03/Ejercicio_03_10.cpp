// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;
double calcularTarifa(double kmRecorridos) 
{
    double tarifaBase = 10.0;
    double precioKm = 2.0;
    double total = tarifaBase + (kmRecorridos * precioKm);
    if (kmRecorridos > 10) 
        total = total * 0.9; 
    return total;
}
int main() {
    double km;
    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;
   double tarifa = calcularTarifa(km);
    cout << "El precio es: " << tarifa << "Bs." << endl;
    return 0;
}

