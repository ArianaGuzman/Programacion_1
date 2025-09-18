// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
float CalcularVolumen(float r, int a)
{
    float v=0; 
    double pi=3.1416; 
    v= pi * pow(r,2) * a;
    cout<<"el volumen del cilindro es de: "<<v<<endl;
    return v;
}
int main()
{
    float radio=0;
    int altura=10;
    cout<<"ingresa el radio del cilindro: "<<endl;
    cin>>radio;
    CalcularVolumen(radio,altura);
    return 0;
}

