// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero= 0;
    cout<<"ingresa un numero entero: "<<endl;
    cin>>numero;
    if (numero%2==0) //forma para saber si el numero es par o no
        cout<<numero<<" es par"<<endl;
    else
        cout<<numero<<" es impar"<<endl;
    return 0;
}