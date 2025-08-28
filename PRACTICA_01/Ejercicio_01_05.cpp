// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    float celsius=0;
    cout<< "ingresa la temperatura en grados celsius: "<<endl;
    cin>>celsius; 
    cout<<celsius<<" grados celisius a grados kelvin es: "<<celsius + 273.15<<endl; //formula para convertir de celsius a kelvin
    return 0;
}