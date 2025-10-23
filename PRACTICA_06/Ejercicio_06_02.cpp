// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 2
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>

  int i=0;

void buscar( string m[], int p[]);
void ordenar(int prod[], string m[] );
void mostrar(int prod[], string m[] );

int main ()
{
   system("cls");
   string minerales[6]= {"CU", "SB", "AU", "SN", "AG", "PT" };
   int produccion[6]={109412, 876500, 786670, 998000, 135567, 636143};
   buscar(minerales, produccion);
   ordenar(produccion, minerales);
   mostrar(produccion, minerales);
}

void mostrar(int prod[], string m[] )
{
  cout<<"mineral    produccion"<<endl;
  for (i= 0; i<6; i++)
  {
    cout<<m[i]<<"    "<<prod[i]<<endl;
  }
}

void buscar( string m[], int p[])
{
    string nombre;
    int encontrado=0, cont=0;
    cout<<"ingresa el mineral que deseas encontrar: "<<endl;
    cin>>nombre;
    while (encontrado == 0 && cont!=6)
    {
      if (m[cont] == nombre)
      {
        cout<<p[cont]<<endl;
        encontrado= 1;
      }
      cont= cont + 1;
    }
    if (i==6 && encontrado==0)
      cout<<"mineral no encontrado"<<endl;   
}

void ordenar (int prod[], string mine[])
{
  int i=0, j=0;
  int x=0;
  string y;
  for (i= 0; i<6; i++)
  {
    for (j=i+1; j<6;j++)
    {
        if(prod[i]<prod[j])
        {
            x= prod[j];
            prod[j]= prod[i];
            prod[i]=x;
            y= mine[j];
            mine[j]= mine[i];
            mine[i]=y;
        }
    }
  }
 
}