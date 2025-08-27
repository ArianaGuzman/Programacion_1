// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 12
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=1;
    do
    {
        cout<<"ingresa un numero entero del 1 al 5: "<<endl;
        cin>>numero;
        if (numero < 1 || numero > 5) //condicion para saber si el numero es valido o no
            {
                cout<<"numero invalido"<<endl;
            }
    
    } while (numero < 1 || numero > 5);
        cout<<"numero valido"<<endl;
    
    
   
    return 0;
  }
