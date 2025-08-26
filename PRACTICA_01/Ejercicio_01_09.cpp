// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int edad=0;
    cout<<"ingresa tu edad: "<<endl;
    cin>>edad;
    if (edad <= 12)
    {
        cout<<edad<<" eres un niño"<<endl;
    }
    else if (edad<=18)
    {
        cout<<edad<<" eres un adolescente"<<endl;
    }
    
    else if (edad>18 && edad<60)
    {
        cout<<edad<<" eres mayor de edad"<<endl;
    }
    else
    {
        cout<<edad<<" eres un adulto mayor"<<endl;
    }
    return 0;
  }

