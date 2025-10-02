// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 5
// Problema planteado: 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int vector1[5],vector2[5], vector3[5], i=0;

void multiplicar ()
{
    
    for ( i = 0; i < 5; i++)
        vector3[i]= vector1[i] + vector2[i];   
}

void cargar()
{
    for ( i = 0; i < 5; i++)
    {
        cout<<"ingrese el valor para el vector 1"<<endl;       
        cin>>vector1[i];
    }

      for ( i = 0; i < 5; i++)
    {
        cout<<"ingrese el valor para el vector 2"<<endl;       
        cin>>vector2[i];
    }
}

void mostrar()
{
    for ( i = 0; i < 5; i++)
        cout<<" la suma es "<<vector3[i]<<"  "<<endl;
}


int main()
{
    cargar();
    multiplicar();
    mostrar();

}