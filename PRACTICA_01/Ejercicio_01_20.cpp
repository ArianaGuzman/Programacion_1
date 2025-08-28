// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 19
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0, contador=0, contador=0;
    cout<<"Ingresa un numero: "<<endl;
    cin>>numero;
    while (numero!=0) 
    {
        numero=numero / 10;
        contador=contador + 1;
    }
    cout<<"el numero ingresado tiene: "<<contador<<"digitos"<<endl;
    return 0;
}