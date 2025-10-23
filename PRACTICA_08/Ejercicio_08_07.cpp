// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 7
#include <iostream>
#include <cmath>
using namespace std;

int s=0;
int suma(int n)
{
    if (n == 0) 
       return 0;
    else  
    {
        return pow(n,2) + suma( n -1 );
        
    }
}

int main()
{
    system("cls");
    int n=0, resultado=0;
    cout<<"ingresa un numero:" <<endl;
    cin>>n;
    resultado=suma(n);
    cout<<"el resultado es: "<<suma(n);
    return 0;
}
