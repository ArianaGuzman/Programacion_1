// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>

void primos(int s)
{
    int divisor=0, contdivisores=0, i=0;   
    for(i=1;i<=s;i++)
    {
        if(s % i == 0)
            divisor=divisor + 1;
    }
    if (divisor ==2)
        cout<<s<<" es primo"<<endl;
    else
        cout<<s<<" NO es primo"<<endl;
}

void desarrollar(int n)
{
    int cifra=0, sumador=0;
    while (n!=0)
    {
      cifra=n %10; 
      if (cifra!= 0)
        sumador=sumador + cifra;   
      n=n/10; 
    }
    cout<<"la suma de los digitos del numero es: "<<sumador<<endl;
    primos(sumador);
}

int main()
{
system("chcp 65001");
system("cls");
 int numero=0;
 cout<<"ingresa un numero: "<<endl;
 cin>>numero;
 desarrollar(numero);
}