// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 16
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0;
    int divisores=0;
    int i=0;
    cout<<"ingresa un numero entero: "<<endl;
    cin>>numero;
    if (numero>1)
    {
        for (i=1;i<=numero;i++)
        {
            if(numero%i==0)
            {
                divisores=divisores + 1;
            }
        }
    }
    if (divisores==2)
    {
        cout<<numero<<"es primo"<<endl;
    }
    else
    {
        cout<<numero<<"no es primo"<<endl;
    }
}
