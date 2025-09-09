// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int numero=0, contadorPrimos=0, i=0, j=0,numRandom=0;
    cout<<"ingrese un numero: "<<endl; 
    cin>>numero;
    for(i=0;i<numero;i++)
    {
        numRandom= numRandom= 1 + rand() % 10000;
        cout<<numRandom<<endl;
        int divisor=0;
        for (j=1; j<= numRandom;j++)
        {
            if(numRandom % j == 0)
            divisor=divisor + 1;
        }
        if (divisor == 2)
        {
            contadorPrimos= contadorPrimos + 1;
        }
        cout<<endl;
    }
    cout<<"hay : "<<contadorPrimos<<" numeros primos"<<endl;
}
