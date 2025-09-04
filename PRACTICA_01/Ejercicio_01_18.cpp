// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 18
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int divisores=0;
    int i=0;
    int contador=0;
    cout<<"los 100 divisores son: "<<endl;
    while (contador<=100)
    {
      if(100%i==0)
         {
          cout<<i<<endl;
        }
        i=i+1;
        contador=contador+1;
    }
    return 0;
}
