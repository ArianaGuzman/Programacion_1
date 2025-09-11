// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int n=0, i=0, moneda=0;
    float caras=0, cruz=0, porcentajeCara=0, porcentajeCruz=0;
    cout<<"ingrese la cantidad de tiros:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        moneda= 1 + rand() % 2;
        if (moneda==1)
            caras=caras + 1;   
        else
            cruz=cruz + 1;
    }
    porcentajeCara= (caras / n) *100;
    porcentajeCruz= (cruz / n) *100;
    cout<<"el porcentaje de caras es: "<<porcentajeCara<<"%"<<endl;
    cout<<"el porcentaje de Cruz es: "<<porcentajeCruz<<"%"<<endl;
}
