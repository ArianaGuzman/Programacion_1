// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 3
// Problema planteado: 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
using namespace std;


int notas[1000], i=0;
float promedio=0, desvio[1000];

void calculos (int numero)
{
    int suma=0;
    for ( i = 0; i < numero; i++)
        suma=suma + notas[i];
    cout<<"la suma es: "<<suma<<endl;
    promedio= (float) suma/numero;
    cout<<"El promedio es: "<<promedio<<endl;   
}

void calcdesvio(int numero)
{

     for ( i = 0; i < numero; i++)   
        desvio[i]= (float) (notas[i]- promedio); 
     for ( i = 0; i < numero; i++)   
        cout<<"el desvio de "<<notas[i]<<"es: "<<desvio[i]<<endl;
}

void varianza(int numero)
{
    float cuadrados=0;
    for ( i = 0; i < numero; i++)
        cuadrados=cuadrados + pow(desvio[i], 2);
    cout<<"La varianza es "<<cuadrados /numero<<endl;
}

void carga(int numero)
{
    for (i=0;i<numero;i++)
        {
            cout<<"ingresa nota "<<i<<endl;
            cin>>notas[i];
        }
}
int main()
{
    int n=0;
    cout<<"ingresa la cantidad de calificaciones:"<<endl;
    cin>>n;
    carga(n);
    calculos(n);
    calcdesvio(n);
    varianza(n);
}