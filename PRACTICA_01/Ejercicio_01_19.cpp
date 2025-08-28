// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 19
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0, i=0;
    cout<<"ingresa un numero"<<endl;
    cin>>numero;
    for (i=1;i<=10;i++)
        cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
    return 0;
}
