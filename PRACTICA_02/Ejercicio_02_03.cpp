// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int numero=0,i=0;
    float factorial=1;
    numero= 1 + rand() % 10;
    cout<<"el numero randomico es: "<<numero<<endl;
    for (i=1;i<=numero;i++)  
    {
        factorial= factorial * i ;
        cout<<"factorial: "<<factorial<<endl;
    }
    cout<<"El factorial de "<< numero <<" es: "<<factorial<<endl;
}