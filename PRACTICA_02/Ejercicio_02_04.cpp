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
    int numSecreto=0, opcion=0, min=0, may=50, i=1, adivino=0;
    numSecreto= rand() % 51;
    cout<<numSecreto<<endl;
    cout<<"estoy pensando un numero entre 0 y 50"<<endl;  
    while (i<=5)
    {
        cout<<"intento "<<i<<endl;
        cout<<"?";
        cin>>opcion;  
        if(opcion == numSecreto)        
        {   
           i=6;
           adivino= 1; 
        }    
        if ((opcion > min)&&(opcion <numSecreto))
            min = opcion;  
        else if ((opcion < may)&&(opcion >numSecreto))                     
            may = opcion;       
        if (adivino==0)
        {
         cout<<"el numero esta entre "<<min<< " y "<<may<<endl;
         i=i+1;
        }
    } 
    if (adivino == 1)
        cout<<"Felicitaciones… Adivinaste el número "<<endl;
    else
        cout<<" incorrecto El numero era: "<< numSecreto<<endl;     
}
    

  
