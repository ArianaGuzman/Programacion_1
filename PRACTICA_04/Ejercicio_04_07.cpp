// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 7 
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>

int MCD(int x, int y)
{
    int cociente=0, residuo=0;
    cociente= x/y;
    residuo= x % y;
    while (residuo!=0)
    {
        x=y;
        y= residuo;
        cociente= x/y;
        residuo= x % y;
    }
    return y;
}


int main()
{
    int a=0, b=0;
    cout<<"ingresa un numero: "<<endl;
    cin>>a;
    cout<<"ingresa otro numero: "<<endl;
    cin>>b;
    if(a<0 || b<0)
        cout<<"los numeros deben de ser positivos "<<endl; 
    else if(a<b) 
        cout<<"el primer numero debe ser mayor que el segundo "<<endl; 
    else
        cout<<"el MCD de "<<a<<" y "<<b<<" es: "<< MCD(a,b);
}
