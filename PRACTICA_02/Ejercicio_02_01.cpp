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
    int i=0, n=0, cara=0, cont=0;
    cout<<"ingrese la cantidad de tiros: "<<endl;
    cin>>n;
    for (i = 1; i <=n; i++)
    {
        cara= 1 + rand() % 6;
        if(cara%2==0)
        {
          cont=cont + 1;
          
        }
    }
    cout<<"la frecuencia de repeticion de las caras pares es de: "<<cont<<endl;  
    return 0;
}