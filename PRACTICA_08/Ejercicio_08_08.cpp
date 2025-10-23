// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

void ullman(int n)
{
    if (n == 1)
    {
        cout<<"1";
        return;
    } 
    else 
    {
        cout<<n<<"   ";
        if(n%2==0) 
             ullman(n/2);
        else
            ullman((n*3)+1);
    }
}

int main()
{
    int n=0;
    cout<<"ingresa un numero:" <<endl;
    cin>>n;
    if(n>1)
        ullman(n);
    return 0;
}
