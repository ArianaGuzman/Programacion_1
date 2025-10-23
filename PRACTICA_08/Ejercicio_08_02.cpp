// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

int exponente(int b, int e)
{
    if (e == 1) 
       return b;
    else  
    {
        return b  * exponente(b,e - 1);
    }
}

int main()
{
    int b=0, e=0, resultado=0;
    cout<<"ingresa la base :" <<endl;
    cin>>b;
      cout<<"ingresa el exponente:" <<endl;
    cin>>e;
    resultado=exponente(b,e);
    cout<<"el resultado es: "<<resultado;
    return 0;
}
