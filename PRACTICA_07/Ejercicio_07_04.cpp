// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 4
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int matriz[5][5];
int i=0, j=0;

void cargar();
void mostrar();

int main()
{
  cargar();
  mostrar();
}

void cargar()
{
  int cont=0, aux=-1;
  for ( i = 0; i < 5; i++)
  {
    cont=aux + 2;
    aux=cont;
    for ( j = 0; j < 5; j++)
    {
      matriz[i][j]=cont;
      cont=cont + 1;
    }
  }
}

void mostrar()
{
  for ( i = 0; i < 5; i++)
  {
    for ( j = 0; j < 5; j++)
    {
      cout<<matriz[i][j]<<"   ";
    }
    cout<<endl;
  }
}