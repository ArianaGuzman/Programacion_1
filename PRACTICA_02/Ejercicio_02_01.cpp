// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int i=0, n=0, dado=0, sum=0;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;
    for (i = 0; i <=n; i++)
    {
        dado= 1 + rand() % 6;
        if(dado%2==0)
        {
          sum=sum + 1;
        }
    }
    cout<<"la frecuencia de repeticion de las caras pares es de: "<<sum<<endl;  
    return 0;
}