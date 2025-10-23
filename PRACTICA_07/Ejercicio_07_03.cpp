// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 3
using namespace std;
#include <iostream>
#include <vector>
#include <string>

char matriz[3][4];
int i=0, j=0;

void cargar();
void mostrar();
void mostrarnmuertos();
void cordmuertos();
void cantmuertos();
void posible();

int main()
{
  cargar();
  mostrar();
  mostrarnmuertos();
  cordmuertos();
  mostrar();
  cantmuertos();
  posible();


}
void posible()
{
    int contm=0;
    for ( i = 0; i < 3; i++)
  {
    if(matriz[i][0]=='x')
        contm=contm + 1; 
  }
    if(contm<=1)
        cout<<"es posible entrar al complejo "<<endl;
    else
        cout<<"no es posible entrar al complejo "<<endl;
}

void cantmuertos()
{
    int contm=0;
    for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 4; j++)
    {
      if(matriz[i][j]=='x')
      {
        contm=contm + 1;
      }
    }
  }
    cout<<"la cantidad de muertos es: "<<contm<<endl;

}

void cordmuertos()
{
    int vecfil[100], veccol[100];
    int cont=0;
    for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 4; j++)
    {
      if(matriz[i][j]=='x')
      {
        vecfil[cont]=i;
        veccol[cont]=j;
        cont=cont + 1;
        cout<<i<<"   "<<j<<endl;
      }
    }
  }

}

void mostrarnmuertos()
{
    int bandfilo=0, contf=0, contc=0;
    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 4; j++)
    {
      if(matriz[i][j]=='x')
        bandfilo=1;    
    } 
    if(bandfilo==0)
        contf=contf + 1;
    bandfilo=0;
    }

    bandfilo=0;

    for ( i = 0; i < 4; i++)
    {
    for ( j = 0; j < 3; j++)
    {
      if(matriz[j][i]=='x')
        bandfilo=1;    
    } 
    if(bandfilo==0)
        contc=contc + 1;
    bandfilo=0;
    }
    cout<<"filas libres: "<<contf<<endl;
    cout<<"columnas libres: "<<contc<<endl;

}


void cargar()
{
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 4; j++)
    {
      cout<<"ingrese valor: "<<endl;
      cin>>matriz[i][j];
    }  
  }
}

void mostrar()
{
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 4; j++)
    {
      cout<<matriz[i][j]<<"   ";
    }
    cout<<endl;
  }
}