// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 09/11/2025
// Número de ejercicio: 1
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void añadirnombres(int n);
void leernombres(int n);

int main()
{
    system("cls");
    int n=0;
    cout<<"ingrese la cantidad de nombres: "<<endl;
    cin>>n;
    añadirnombres(n);
    cout<<endl;
    cout<<endl;
    leernombres(n);

}

void añadirnombres(int n)
{
    int i=0;
    char vnombre[20];
    ofstream archivo;
    archivo.open("nombres.txt",ios::app);
    if(archivo.fail())
    {
        cout<<"error al abrir el archivo"<<endl;
        exit(1);
    }
    cout<<"ingrese los nombres: "<<endl;
    for(i=0;i<=n;i++)
    {
        cin.getline(vnombre,20);
        archivo<<vnombre<<endl;
    }
    archivo.close();
}

void leernombres(int n)
{
    string linea;
    ifstream archivo;
    archivo.open("nombres.txt");
    if(archivo.fail())
    {
        cout<<"error al abrir el archivo"<<endl;
        exit(1);
    }
    while (! archivo.eof())
    {
        getline(archivo,linea);
        cout<<linea<<endl;
    }
    archivo.close();
    
}

