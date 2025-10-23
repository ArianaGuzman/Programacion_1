// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 1
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int matriz[100][100];
int i=0, j=0;

void cargar(int d);
void mostrar(int d);
void cambiar(int d);

int main()
{
  int n=0;
  cout<<"ingrese la dimension: "<<endl;
  cin>>n;
  cargar(n);
  mostrar(n);
  cambiar(n);
  mostrar(n);

}

void cambiar(int d)
{
  int fc=0, aux=0;
  cout<<"que fila quiere cambiar?: "<<endl;
  cin>>fc;
    for ( j = 0; j < d; j++)
    {
      aux=matriz[0][j];
      matriz[0][j]=matriz[fc][j];
      matriz[fc][j]=aux;  
    }

}

void cargar(int d)
{
  for ( i = 0; i < d; i++)
  {
    for ( j = 0; j < d; j++)
    {
      cout<<"ingrese valor: "<<endl;
      cin>>matriz[i][j];
    }
  }
}

void mostrar(int d)
{
  for ( i = 0; i < d; i++)
  {
    for ( j = 0; j < d; j++)
    {
      cout<<matriz[i][j];
    }
    cout<<endl;
  }
}