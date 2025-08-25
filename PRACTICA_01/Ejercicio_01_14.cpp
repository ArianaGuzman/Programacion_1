// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 13
#include <iostream>
using namespace std; 
int main() 
{
    system("chcp 65001");
    system("cls");
    int numero=0;
    int i=0;
    int j=0;
    cout<<"ingrese un numero entero: "<<endl;
    cin>>numero;
    for (i=1; i<=numero; i++)
    {
        for (j=1; j<=i; j++) 
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}