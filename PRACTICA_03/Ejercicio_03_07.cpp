// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int generar(int a)
{
  int edad=0, altura=0, sumEdad=0, sumAltura=0, mayores=0, altos=0, i=0, AlturaMedia=0, EdadMedia=0; ;
  for(i=1;i<=a;i++)
  {
    edad=1+ rand() % 35;
    altura=  120 + rand() % 81;
    sumAltura= sumAltura + altura;
    sumEdad=sumEdad + edad;
    if(edad>18)
        mayores=mayores + 1;
    if(altura>175)
        altos=altos + 1;   
  }  
  AlturaMedia= sumAltura/a;
  EdadMedia= sumEdad/a;
  cout<<"La edad media es: "<<EdadMedia<<endl;
  cout<<"La Estatura media es: "<<AlturaMedia<<endl;
  cout<<"La cantidad de mayores de 18 años es: "<<mayores<<endl;
  cout<<"La cantidad de personas que miden mas de 1.75cm: "<<altos<<endl;   
}
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int alumnos=0;
    cout<<"ingresa la cantidad de alumnos que hay: "<<endl;
    cin>>alumnos;
    generar(alumnos);
}
