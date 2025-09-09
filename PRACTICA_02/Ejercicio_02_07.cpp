// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   system("chcp 65001");
   system("cls");
   srand(time(0));
   int niños=0, n=0,sumNiños1=0, sumNiños2=0, sumNiños3=0, i=0;
   cout<<"ingresa la cantidad de niños: "<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
    niños= 1 + rand() % 3;
    if(niños==1)
        sumNiños1=sumNiños1+1;     
    else if(niños==2)
        sumNiños2=sumNiños2+1;
    else
        sumNiños3=sumNiños3+1;
   }
   cout<<"niños 1"<<sumNiños1<<endl;
   cout<<"niños 2"<<sumNiños2<<endl;
   cout<<"niños 3"<<sumNiños3<<endl;
   cout<<"se consumio "<<(sumNiños1 * 6)+(sumNiños2 * 3)+(sumNiños3 * 2)<<"pañales"<<endl;
}

