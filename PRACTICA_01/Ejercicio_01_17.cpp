// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 17
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int Sumadivisores1=0;
    int Sumadivisores2=0;
    int i=0;
    int j=0;
    int n1=0;
    int n2=0;
    cout<<"ingresa un numero entero: "<<endl;
    cin>>n1;
    cout<<"ingresa el segundo numero: "<<endl;
    cin>>n2;
    for (i=1;i<n1;i++)
    {
        if (n1%i==0)
        {
            Sumadivisores1=Sumadivisores1 + i;
        }
    }
    for (j=1;j<n2;j++)
    {
        if(n2%j==0)
        {
            Sumadivisores2=Sumadivisores2 + j;
        }
    }
    if (Sumadivisores1==n2 && Sumadivisores2==n1)
    {
        cout<<n1<<" y "<<n2<<" son numeros amigos"<<endl;
    }
    else
    {
        cout<<n1<<" y "<<n2<<" no son numeros amigos"<<endl;
    }
    return 0;
}
