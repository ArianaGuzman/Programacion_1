// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 6
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

int n=0, i=0;

void mostrar(int calificaciones[]);
void clasificar(int notas[]);
void llenarCalificacion(int calificaciones[]);

int main()
{
    system("cls");
    srand(time(NULL));
    int calificaciones[1000];
    cout<<"ingresa la cantidad de notas: "<<endl;
    cin>>n;
    llenarCalificacion(calificaciones);
    mostrar(calificaciones);
   clasificar(calificaciones);


}

void mostrar(int calificaciones[])
{
    for(i=0;i<n;i++)
    
        cout<<calificaciones[i]<<endl;
    
}
        

void clasificar(int notas[])
{
    int clasificacion=0, j=0, reprobados=0, regular=0, bueno=0, excelente=0;
    for ( j = 0; j < n; j++)
    {
        clasificacion= notas[j];
        if(clasificacion<=59)
            reprobados= reprobados + 1;
        else if(clasificacion>=60 && clasificacion<=79)
            regular= regular + 1;
        else if(clasificacion>=80 && clasificacion<=89)
            bueno= bueno + 1;     
        else
            excelente=excelente +1;     
   }
    cout<<"Reprobados: "<<float(( reprobados * 100.0)/n)<<"% "<<endl;
    cout<<"Regulares: "<<float(( regular * 100.0)/n)<<"% "<<endl;
    cout<<"Buenos: "<<float(( bueno * 100.0)/n) <<"% "<<endl;
    cout<<"Excelentes: "<<float(( excelente * 100.0)/n)<<"% "<<endl;

}

void llenarCalificacion(int calificaciones[])
{
    int calificacion=0;
    for ( i = 0; i < n; i++)
    {
        calificacion= rand()%101;
        calificaciones[i]=calificacion;
    } 
    
}
