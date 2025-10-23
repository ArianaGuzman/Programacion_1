// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 5
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int matrizA[100][100], matrizB[100][100], matrizC[100][100];
int i=0, j=0;

void cargar(int f, int c);
void multiplicar(int f, int c);
void mostrar(int f, int c, int ma[100][100]);


int main()
{
    system("cls");
    int n=0, m=0;
    cout<<"ingresa el numero de filas: "<<endl;
    cin>>n;
    cout<<"ingresa el numero de columnas: "<<endl;
    cin>>m;    
  cargar(n,m);
  mostrar(n,m,matrizA);
    mostrar(n,m,matrizB);
  multiplicar(n,m);
    mostrar(n,n,matrizC);
}

void multiplicar(int f, int c)
{
    int k=0, suma=0;
    for ( i = 0; i < f; i++)
  {
    for ( j = 0; j < c; j++)
    {
        for(k=0;k<c;k++)
        {
           suma=suma + matrizA[j][k] * matrizB[k][i];
        }   
        matrizC[j][i]=suma;
        suma=0;
    }
  }
}

void cargar(int f, int c)
{
  int cont=0, aux=-1;
  for ( i = 0; i < f; i++)
  {
    for ( j = 0; j < c; j++)
    {
      cout<<"ingrese valor para matriz A:"<<endl;
      cin>>matrizA[i][j];
    }
  }

   for ( i = 0; i < c; i++)
  {
    for ( j = 0; j < f; j++)
    {
      cout<<"ingrese valor para matriz B:"<<endl;
      cin>>matrizB[i][j];
    }
  }
}

void mostrar(int f, int c, int ma[100][100])
{
  for ( i = 0; i < f; i++)
  {
    for ( j = 0; j < c; j++)
    {
      cout<<ma[i][j]<<"   ";
    }
    cout<<endl;
  }
}