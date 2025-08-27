// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int mes=0;
    cout<<"Ingresa un mes del 1 al 12: "<<endl;
    cin>>mes;
    switch (mes) 
    {
    case 1: cout<<" enero "<<endl;
              break; 
    case 2: cout<<"Febrero"<<endl;
              break; 
    case 3: cout<<" Marzo "<<endl;
              break; 
    case 4: cout<<" Abril "<<endl;
              break; 
    case 5: cout<<" Mayo "<<endl;
                break;
    case 6: cout<<" Junio "<<endl;
                break;
    case 7: cout<<" Julio "<<endl;
                break;
    case 8: cout<<" Agosto "<<endl;
                break;
    case 9: cout<<" Septiembre "<<endl;
                break;
    case 10: cout<<" Octubre "<<endl;
              break; 
    case 11: cout<<" Noviembre "<<endl;
              break; 
    case 12: cout<<" Diciembre "<<endl;
              break; 
    default: cout<<" Mes invalido "<<endl; 
    }
    return 0;
}