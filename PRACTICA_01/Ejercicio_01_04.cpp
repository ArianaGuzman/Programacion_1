// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 4
#include <iostream>
#include <cmath> //decidi incluir esta libreria, para que me ayudara en la potencia del calculo del volumen. Con la funcion pow
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int radio=0;
    float pi=3.14159;
    float volumen=0;
    cout<<"Ingresa el valor del radio de la esfera: "<<endl;
    cin>>radio;
    volumen=(4/3)*(pi)* pow(radio,3); //formula del volumen de la esfera
    cout<<"El volumen de la esfera es: "<<volumen<<endl;         
    return 0;
}