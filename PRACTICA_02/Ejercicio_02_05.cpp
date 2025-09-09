// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 05/09/2025
// Número de ejercicio: 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));
    int sumaNum=0, numero=0, numAleatorio=0, promedio=0, numeromayor=0, numeromenor=0, i=0;
    numAleatorio= 1 + rand() % 1000;
    numeromayor=numAleatorio;
    cout<<"ingresa la cantidad de veces que desea generar un numero aleatorio: "<<endl;
    cin>>numero;
    for(i=1;i<=numero;i++)
    {
        numAleatorio= 1 + rand() % 1000;
        sumaNum= sumaNum + numAleatorio;
        if(numAleatorio>numeromayor)
            numeromayor= numAleatorio; 
        else
            numeromenor= numAleatorio;    
        cout<<"numero mayor: "<<numeromayor<<endl;
        cout<<"numero menor: "<<numeromenor<<endl;
    }
    cout<<"suma de numeros: "<<sumaNum<<endl;
    promedio= sumaNum/ numero;
    cout<<"la suma de todos los numeros aleatorios es: "<<sumaNum<<endl;
    cout<<"El promedio de todos los numeros aleatorios es: "<<promedio<<endl;
    cout<<"El mayor valor generado es: "<<numeromayor<<endl;
    cout<<"El menor valor generado es: "<<numeromenor<<endl;
    
}
