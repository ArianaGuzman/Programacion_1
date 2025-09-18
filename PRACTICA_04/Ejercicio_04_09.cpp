// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>
int sueldob=1000;
void calculo(int cantidad, int numempl)
{
    int cantp=0, totalv=0;
    float extra=0, totalp=0, antiguedad=0;
    cantp= (rand()%(15 - 5 +1))+5;
    if (cantp>=10 )
    {
    totalv= (rand()%(6000 - 4000 +1))+4000;
    antiguedad=(rand()%(10 - 1 +1))+1;
    extra= totalv * 0.10;
    totalp= sueldob + (sueldob * (antiguedad /100));
    cout<<"Se debe de pagar al empleado "<<numempl<< " el sueldo de: "<<totalp<<" y comision: "<<extra<<endl;
    }
    else
    cout<<"El empleado: "<<numempl<< " no vendio mas que el promedio de 10%"<<endl;   
}

int main()
{
  srand(time(0));
  int c=0, i=0;
  cout<<"ingresa la cantidad de empleados: "<<endl;
  cin>>c;
  for(i=1;i<=c;i++)
    calculo(c,i);
}