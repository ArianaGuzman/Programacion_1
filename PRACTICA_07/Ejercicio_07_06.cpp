// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 6
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int matriz[3][2];
void cargar(int f, int c);
void mostrar(int f, int c);
void mostrarT(int f, int c);


int main()
{    
    cargar(3,2);
    mostrar(3,2);
    mostrarT(3,2);
    
}

void cargar(int f, int c)
{
  int i=0, j=0;
  for ( i = 0; i < f; i++)
  {
    for ( j = 0; j < c; j++)
    {
      cout<<"ingrese valor para matriz A:"<<endl;
      cin>>matriz[i][j];
    }
  }
}

void mostrar(int f, int c)
{
  int i=0, j=0;
  for ( i = 0; i < f; i++)
  {
    for ( j = 0; j < c; j++)
    {
      cout<<matriz[i][j]<<"   ";
    }
    cout<<endl;
  }
}

void mostrarT(int f, int c)
{
  int i=0, j=0;

  for ( i = 0; i < c; i++)
  {
    for ( j = 0; j < f; j++)
    {
      cout<<matriz[j][i]<<"   ";
    }
    cout<<endl;
  }
}