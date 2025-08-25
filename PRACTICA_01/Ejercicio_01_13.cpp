// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 13
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0;
    int i=1;
    int j=0;
    cout<<"ingrese un numero entero: "<<endl;
    cin>>numero;
    for (i=1; i<=numero; i++)
    {
        j=i+j; //como la variable j inicia en 1, y el for va avanzando de numero en numero, los valores se van sumando y guardando en la variable j.
    }
    cout<<"la suma de todos los enteros desde 1 hasta "<< numero <<" es: "<<j<<endl;
    return 0;
}