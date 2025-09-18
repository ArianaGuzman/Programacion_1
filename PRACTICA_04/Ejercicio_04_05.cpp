// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>
int desarrollar(int h, int t, int b)
{
    int comun= 0, salario=0, sbonificacion=0;
    if(h<=8)
    {
        salario= t * h;
        cout<<" tu salario es de: "<<salario<<endl;
    }
     if(h>8)
    {
        comun= h - 8;
        sbonificacion=(8 *t) + ((t+b)*comun);
        cout<<" tu salario bonificacion es de: "<<sbonificacion<<endl;
    }
    return comun, sbonificacion;
}
int main ()
{
   int tarifa=0, hrs=0, bonificacion=0;
   cout<<"ingresa las horas trabajadas: "<<endl;
   cin>>hrs;
   cout<<"ingresa la tarifa por hora: "<<endl;
   cin>>tarifa;
   cout<<"ingresa la bonificacion(si se trabaja mas de 8hrs): "<<endl;
   cin>>bonificacion;
   desarrollar(hrs,tarifa,bonificacion);
   return 0;

}