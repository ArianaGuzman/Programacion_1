// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;
int resultado=0;
int convertir(int grado)
{
    resultado= (1.8 * grado) + 32;
    return resultado;
}
int main ()
{
    system("chcp 65001");
    system("cls");
    int celsius=0;
    cout<<"ingrese los grados celsius: "<<endl;
    cin>>celsius;
    convertir(celsius);
    cout<<celsius<<" a grados Fahrenheit es: "<<resultado;
}

