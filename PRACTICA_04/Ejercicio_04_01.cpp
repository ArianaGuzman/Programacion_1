// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 1 
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int IntercambiarValores (int & a,int & b)
{
    int intercambio=0;
    intercambio=a;
    a=b;
    b=intercambio;
    return a, b;
}
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int valor1=0, valor2=0;
    cout<<"ingresa un numero: "<<endl;
    cin>>valor1;
    cout<<"ingresa otro numero"<<endl;
    cin>>valor2;
    cout<<"valores antes del intercambio: "<<"valor 1: "<<valor1<<" "<<"valor 2: "<<valor2<<endl;
    cout<<"intercambiando valores..."<<endl;
    cout<<endl;
    IntercambiarValores(valor1,valor2);
    cout<<"nuevo valor 1: "<<valor1<<" "<<"nuevo valor 2: "<<valor2<<endl;
}


