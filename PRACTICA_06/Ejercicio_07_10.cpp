// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/25
// Número de ejercicio: 10
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int i=0;
string texto;


void filtrar(string p,int t);

int main()
{
    system("cls");
    string palabra;
    cout<<"ingresa la palabra: "<<endl;
    cin>>palabra;
    filtrar(palabra,palabra.size());
}

void filtrar(string p,int t)
{
    int b2=0, j=0;
    string c;
    //cout<<texto;
    for(i=0;i<t;i++)
    {
        //cout<<t<<endl;
        if(int(p[i]>=48) && int(p[i]<=57))
           c=c + p[i];   

    }
    cout<<c;
   
}