// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 4
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int numSecreto=0, opcion=0, min=0, max=50, i=0;
    numSecreto= rand() % 51;
    cout<<"estoy pensando un numero entre 0 y 50"<<endl;  
    for (int i=1; i<=5;i++)
    {
        cout<<"intento "<<i<<endl;
        cout<<"?";
        cin>>opcion;  
        if(opcion == numSecreto) 
        {
           cout<<"Felicitaciones… Adivinaste el número "<<endl;
        }
        if (opcion < numSecreto) 
        {
          if (opcion > min) min = opcion; 
        else if (opcion > numSecreto) 
            {
        if (opcion < max) max = opcion; 
            }
            
        if (i < 5)
        {
           cout<<"el numero esta entre "<<min<< " y "<<max<<endl;
        }
        }  
    }
    cout<<" incorrecto. El numero era: "<< numSecreto<<endl;

  
}