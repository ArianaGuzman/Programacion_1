// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/25
// Número de ejercicio: 11
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int i=0;

void separar(string p,int t);

int main()
{
    system("cls");
    string palabra;
    cout<<"ingresa el texto: "<<endl;
    cin>>palabra; 
    separar(palabra,palabra.size());
}

void separar(string p,int t)
{
    int b2=0, j=0;
    string c;
    //cout<<texto;
    for(i=0;i<t;i++)
    {
        //cout<<t<<endl;
        if(p[i]!= ',') 
           c=c + p[i];
        else
        {
            cout<<c<<endl;
            c=' ';
        }
    }  
    cout<<c<<endl;

}