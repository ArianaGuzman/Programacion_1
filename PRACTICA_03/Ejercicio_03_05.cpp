// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int calcular(int c, int j)
{
    int resultado=0;
    if(j==1)
    {
        resultado= c*10;
        cout<<"nota 1 con su masa 10: "<<resultado<<endl;
    }
    else if(j==2)
    {
        resultado= c*20;
    }
    else if(j==3)
    {
        resultado= c*30;
    }
    else if(j==4)
    {
        resultado= c*40;
    }
    return resultado;
        
}
int generar ()
{
    int nota=0, ponderado=0;
    float promedio=0;
    srand(time(0));
    for (int i=1; i<=4;i++)
    {
        nota= 1 + rand() % 100;
        ponderado= ponderado + calcular(nota,i);
    }
    promedio= ponderado/100;
    cout<<"el promedio ponderado es: "<<promedio<<endl;
}
int main()
{
    
    cout<<"generando 4 calificaciones y haciendo su ponderacion: "<<endl;
    system("chcp 65001");
    system("cls");
    generar();
    return 0;
}
