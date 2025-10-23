// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/25
// Número de ejercicio: 09
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int i=0;

void volcar(string text,int t);


int main()
{
    system("cls");
    string texto;
    cout<<"ingresa el texto: "<<endl;
    getline(cin, texto);  
    volcar(texto,texto.size());
}


void volcar(string text,int t)
{
    int c=0,b2=0, j=0;
    //cout<<texto;
    for(i=t;i>0;i--)
    {
        //cout<<t<<endl;
        if(text[i]!=' ')
           c=c +1;    
        else
        {
         for(j=i+1;j<i+1+c;j++)
            cout<<text[j];
         cout<<" ";
         c=0;
        }
    }
    for(j=i;j<i+1+c;j++)
            cout<<text[j];
}