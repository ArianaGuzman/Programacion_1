// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;
int verificar(int x)
{
    if(x%2==0)
        cout<<x<<" es par"<<endl;
    else
        cout<<x<<" es inpar"<<endl;
}
int main() 
{
    system("chcp 65001");
    system("cls");
    int n=0;
    cout<<"ingresa un numero: "<<endl; 
    cin>>n;
    verificar(n);
}