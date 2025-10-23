// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 5
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int i=0;

void mostrarLista(vector<string>listaFinal);
void repetidos(vector<string>lista1,vector<string>lista2);

int main()
{
    system("cls");
    vector<string>clientes1={"Guzman", "Perez", "Padilla", "Salazar", "Rivera"};
    vector<string>clientes2={"Gonzales","Salazar", "Guzman", "Padilla", "Castillo"};
    repetidos(clientes1,clientes2);
    
}


void mostrarLista(vector<string>listaFinal)
{
   cout<<"los clientes en comun son: "<<endl;
   for ( i = 0; i < listaFinal.size(); i++)
      cout<<listaFinal[i]<<"  ";   
}

void repetidos(vector<string>lista1,vector<string>lista2)
{
    int j=0;
    for ( i = 0; i < lista1.size(); i++)
    {
        for ( j = 0; j < lista2.size(); j++)
        {
            if (lista1[i]==lista2[j])
                cout<<"apellido: "<<lista1[i]<<" repetido"<<endl;


        }  
    }
}
