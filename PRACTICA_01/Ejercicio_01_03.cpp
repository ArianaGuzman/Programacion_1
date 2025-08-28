// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int main(){
    system("chcp 65001");
    system("cls");
    float base=0, altura=0, area=0;
    cout <<"Ingrese la base del triangulo: " << endl;
    cin >> base;
    cout <<"Ingrese la altura del triangulo: " << endl;
    cin >> altura;
    area=(base*altura)/2; //formula del area del triangulo
    cout <<"El area del triangulo es: " << area << endl;
    return 0;
}