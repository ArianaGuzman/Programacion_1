// Materia: Programación I, Paralelo 3
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 18/10/2025
// Número de ejercicio: 2
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

    int i=0,j=0;
    int matriz[100][100];

void cargar(int x, int y,int num);
void mostrar(int num);
void sumacol(int num);
void prodfil(int num);
void mayor(int num);
void desvio(int num);


int main()
{
    system("cls");
    srand(time(NULL));
    int a=0, b=0, n=0;
    cout<<"ingrese el tamaño de la matriz"<<endl;
    cin>>n;
    cout<<"ingrese un numero A"<<endl;
    cin>>a;
    cout<<"ingrese el numero B"<<endl;
    cin>>b;
    cargar(a,b,n);
    mostrar(n);
    sumacol(n);
    prodfil(n);
    mayor(n);
    desvio(n);

}

void desvio(int num)
{
    float promedio=0;
    int suma=0, cont=0, suma2=0;
    for ( i = 0; i < num; i++)
    {
    for ( j = 0; j < num; j++)  
    { 
        suma=suma + matriz[i][j];
        cont=cont + 1;
    }
    }
    promedio=float(suma/cont);

    for ( i = 0; i < num; i++)
    {
    for ( j = 0; j < num; j++)  
    { 
        suma2=suma2 +  pow(matriz[i][j] - promedio,2);
    }
    }
    cout<<"el desvio estandar es: "<<sqrt( suma2/cont);
}


void mayor(int num)
{
 int mayor=matriz[0][0];
 int mayori=0, mayorj=0;
 for ( i = 0; i < num; i++)
 {
    for ( j = 0; j < num; j++)
    {   
        if(matriz[i][j]>mayor)
        {
            mayor=matriz[i][j];
            mayori=i;
            mayorj=j;
        }
    }
    
 }
  cout<<"el valor mayor es:"<<mayor<<endl;
  cout<<"Su posicion es:"<<mayori<<"  "<<mayorj<<endl;

}

void prodfil(int num)
{
    int prod=1;
    for ( i = 0; i < num; i++)
    {
      prod=prod * matriz[num-1][i];
    }
    cout<<"El producto es: "<<prod<<endl;
}

void sumacol(int num)
{
    int suma=0;
    for ( i = 0; i < num; i++)
    {
      suma=suma + matriz[i][num-1];
    }
    cout<<"la suma es: "<<suma<<endl;
}

void cargar(int x, int y,int num)
{
 for ( i = 0; i < num; i++)
 {
    for ( j = 0; j < num; j++)
    {
        matriz[i][j]= ( rand() % (y - x + 1) ) + x;
    }  
 }
}

void mostrar(int num)
{
    for ( i = 0; i < num; i++)
 {
    for ( j = 0; j < num; j++)
    {
        cout<<matriz[i][j];
    }
    cout<<endl;
 } 
}
