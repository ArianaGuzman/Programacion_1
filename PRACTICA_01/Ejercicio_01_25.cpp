// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2025
// Número de ejercicio: 25
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0, i=0;
    char respuesta='s';
    while (respuesta!='n')
    {
        cout<<"ingresa un numero: "<<endl;
        cin>>numero;
        for (i=1;i<=10;i++) 
            cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
        cout<<"¿Desea calcular otra tabla? (s/n)"<<endl;
        cin>>respuesta;
    }
    return 0;
}