// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 2
// Problema planteado: 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void voltios ()
{
    int i=0, cont=0;
    double voltios[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for ( i = 0; i < size(voltios); i++)
    {
        if(cont==3)
        {
          cout<<endl;
          cont=0;
        }
        cout<<voltios[i]<<"    ";
        cont=cont + 1;   
    }   
}
int main()
{
    voltios();
}