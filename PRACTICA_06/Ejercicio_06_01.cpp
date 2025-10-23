// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 1
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

    int edades[100];
    int edad=0, cont=0;

void desviotipico()
{
    int i=0, suma=0;
    float promedio=0, desviot=0, suma2=0;
    //promedio
    for ( i = 0; i < cont; i++)
        suma=suma + edades[i];
    //
    promedio=suma / cont;
    //sumatoria de valores - promedio al cuadrado
    for ( i = 0; i < cont; i++)
        suma2=suma2 + pow(edades[i] - promedio,2);
    //calculo de desvio tipico
    desviot=sqrt(suma2/cont);
    cout<<"el desvio tipico es: "<<desviot;    
    
}

void carga(int e)
{
    while (e != -1)
    {
        edades[cont]=e;  
        cont=cont + 1;    
        cout<<"ingresa tu edad: ";
        cin>> e;
    } 
}

int main()
{
    cout<<"ingresa tu edad: ";
    cin>> edad;
    carga(edad);
    if (cont != 0)
        desviotipico();

     
}