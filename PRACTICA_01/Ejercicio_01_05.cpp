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
    int celsius=0;
    float kelvin=0;
    cout<< "ingresa la temperatura en grados celsius: "<<endl;
    cin>>celsius;
    kelvin= celsius + 273.15;  //formula para convertir celsius a kelvin
    cout<<celsius<<" grados celisius a grados kelvin es: "<<kelvin<<endl;

    return 0;
}