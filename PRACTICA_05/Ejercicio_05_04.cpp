// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 4
// Problema planteado: 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


int v1[1000],v2[1000], mul[1000], i=0;

void multiplicar (int numero)
{
    
    for ( i = 0; i < numero; i++)
        mul[i]= v1[i] * v2[i];   
}

void cargar(int numero)
{
    for ( i = 0; i < numero; i++)
    {
        cout<<"ingrese el valor para el vector 1"<<endl;       
        cin>>v1[i];
    }

      for ( i = 0; i < numero; i++)
    {
        cout<<"ingrese el valor para el vector 2"<<endl;       
        cin>>v2[i];
    }
}

void mostrar(int numero)
{
    for ( i = 0; i < numero; i++)
        cout<<" la multiplicacion es "<<mul[i]<<"  "<<endl;
}


int main()
{
    int n=0;
    cout<<"ingresa la dimension "<<endl;  
    cin>>n;
    cargar(n);
    multiplicar(n);
    mostrar(n);

}