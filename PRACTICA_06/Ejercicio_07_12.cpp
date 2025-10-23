// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/25
// Número de ejercicio: 12
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int i=0, cont=0;

void verificap(string tex,int t);

int main()
{
    system("cls");
    string texto;
    cout<<"ingresa el texto: "<<endl;
    getline(cin,texto);
    verificap(texto,texto.size());
}

void verificap(string tex,int t)
{
    int b=0;
    char c;
    
    
    //cout<<texto;
    for(i=0;i<t/2+1;i++)
    {
        //cout<<t<<endl;
        //cout<<tex[i]<<"      "<<tex[t-i-1]<<endl;
        if(tex[i]!= tex[t-i-1] ) 
            b=1;
    }   
    if(b==1)
        cout<<"no es palindromo"<<endl;
    else
        cout<<"es palindromo"<<endl;

}