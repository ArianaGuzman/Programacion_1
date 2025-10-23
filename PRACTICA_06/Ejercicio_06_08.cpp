// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/25
// Número de ejercicio: 06
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int i=0;

void buscar(string correo,int c);
int main()
{
    system("cls");
    string correo;
    cout<<"ingresa la direccion de correo electronico: "<<endl;
    cin>> correo;
    buscar(correo,correo.size());
}


void buscar(string correo,int c)
{
    int b1=0,b2=0;
    for(i=0;i<c;i++)
    {
        if(correo[i]=='@')
           b1=1;    
        else if(correo[i]=='.'&& b1==1)
            b2= 1;
    }
    if(b2==1)
        cout<<"valido"<<endl;
    else
        cout<<"invalido";
}