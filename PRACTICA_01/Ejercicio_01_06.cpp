// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0;
    cout<<"ingresa un numero entero: "<<endl;
    cin>>numero;
    if (numero == 0)
    {
        cout<<numero<<" es cero "<<endl;
    }
    if (numero < 0)
    {
      cout<<numero<<" es negativo "<<endl;

    }
    else if (numero > 0) //else if es una condicion que se cumple si las otras no se cumplen
    {
        cout<<numero<<" es positivo  "<<endl;
    }
    return 0;
}