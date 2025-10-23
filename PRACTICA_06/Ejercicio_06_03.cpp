// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 3
// Problema planteado:
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

void MostrarPersonas(string nom[], string ap[], int ed[]);

int main()
{
    srand(time(NULL));
    string nombres[10]={"Maria","Lucia","Katherina","Luis","Dereck","Martin","Carmen","Mateo","Ariana","Marcelo"};
    string apellidos[10]={"Gonzales","Lopez","Valdez","Rojas","Salazar","Perez","Rivera","Garcia","Hernandez","Diaz"};
    int edades[10]={20,18,34,9,28,53,42,83,73,61};
    MostrarPersonas(nombres,apellidos,edades);

}

void MostrarPersonas(string nom[], string ap[], int ed[])
{
    int n=0,i=0, j=0;
    cout<<"ingresa la cantidad de veces: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        j= rand()%10;
        cout<<" nombre: "<<nom[j]<<"            ";
        cout<<" Apellido: "<<ap[j]<<"            ";
        cout<<" Edad: "<<ed[j];
        cout<<endl;
    }
}

