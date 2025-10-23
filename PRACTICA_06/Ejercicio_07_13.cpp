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

void poner(string tex);

int main()
{
    system("cls");
    string texto;
    cout<<"ingresa la palabra: "<<endl;
    getline(cin,texto);
    poner(texto);
    
}

void poner(string tex)
{
    char vc;
    int b2=0, j=0;
    char c;
    tex[0]=toupper(tex[0]);
    cout<<tex;
}