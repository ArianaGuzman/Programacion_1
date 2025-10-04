// Materia: Programación I, Paralelo 4
// Autor: ……………………..
// Fecha creación: 29/09/2025
// Número de ejercicio: 7
// Problema planteado:
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int datos[10], cont=0, dato=0;

void calculo ()
{
    cout<<"ingrese un numero: "<<endl;
    cin>>dato;
    while (dato>=0 && cont<10)
        {
            datos[cont]=dato;
            cont= cont + 1;
            cout<<"ingresa un numero: "<<endl;
            cin>>dato;
        }

}

void mostrar(int cantidad)
{
    int i=0;
    for (i=0;i<cantidad;i++)
    {
        cout<< datos[i]<<endl;
    }
}

int main ()
{
    calculo();
    if (cont==0)
        cout<<"no se ingreso datos"<<endl;
    else
        mostrar(cont);
}



