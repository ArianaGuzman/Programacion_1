// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int nota=0;
    cout<<"ingresa tu nota del 1 al 100: "<<endl;
    cin>>nota;
    
    if (nota>=51) //entra si la nota es mayor o igual a 51
    {
        if (nota<60)
            cout<<"Calificación = C"<<endl;
        else if (nota<70)
            cout<<"Calificación = C+"<<endl;
        else if (nota<80)
            cout<<"Calificación = B"<<endl;
        else if (nota <90)
            cout<<"Calificación = B+"<<endl; 
        else if (nota<95)
            cout<<"Calificación = A"<<endl; 
         else if (nota<=100)
            cout<<"Calificación = A+"<<endl; 
    }
    else
        cout<<"Reprobado"<<endl;
    return 0;
}