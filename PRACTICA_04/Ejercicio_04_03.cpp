// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>
int ModificarValores(int a, int & b)
{
    a=a*2;
    b=b +10;
    return a,b;
}
int main()
{
system("chcp 65001");
system("cls");
int valor1=0, valor2=0;
cout<<"ingresa el primer numero: "<<endl;
cin>>valor1;
cout<<"ingresa el segundo numero: "<<endl;
cin>>valor2;
cout<<"valor 1 = "<<valor1<<" valor 2 = "<<valor2<<endl;
cout<<"modificando los valores..."<<endl;
cout<<endl;
ModificarValores(valor1,valor2);
cout<<"valor 1 = "<<valor1<<" valor 2 = "<<valor2<<endl;
}

