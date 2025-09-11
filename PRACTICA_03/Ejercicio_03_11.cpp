// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;
double retirarDinero(double saldo, double cantidad) 
{
    if (cantidad>saldo) 
    {
        cout <<"Saldo insuficiente"<<endl;
        return saldo; 
    }
    if (cantidad % 10 != 0) 
    {
        cout << "El monto debe ser multiplo de 10" <<endl;
        return saldo; 
    }
    saldo =saldo - cantidad; 
    cout <<"Se retiraron "<<cantidad<<"Bs"<<endl;
    return saldo;
}
int main() 
{
    double saldo = 1000.0;
    double cantidad;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    saldo = retirarDinero(saldo, cantidad);
    cout << "Saldo actual: " << saldo << " Bs" << endl;
}

