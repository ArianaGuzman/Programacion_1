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


int v1[1000],v2[1000], comb[1000], i=0, cont=0;

void combinar (int numero)
{ 
    for ( i = 0; i < numero; i++)
    {
        comb[cont]= v1[i] ;   
        cont= cont + 1;
        comb[cont]= v2[i] ; 
        cont= cont + 1;
    }
    cout<<"contador: "<<cont<<endl;
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

void mostrar()
{
    for ( i = 0; i < cont; i++)
        cout<<comb[i]<<endl;
}


int main()
{
    int n=0;
    cout<<"ingresa la dimension "<<endl;  
    cin>>n;
    cargar(n);
    combinar(n);
    mostrar();

}