// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 15
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0;
    int i=0;
    int suma=0;
    int nota=0;
    int promedio=0;
    cout<<"Ingrese la cantidad de notas que desea promediar: "<<endl;
    cin>>numero;
    for (i=1;i<=numero;i++)
    {
        cout<<"ingrese la nota: "<<endl;
        cin>>nota;
        suma= suma + nota; //vamos sumando todas las notas para luego dividirlas entre la cantidad y asi promediamos.
    }
    promedio= suma / numero;
    cout<<"El promedio es: "<< promedio<<endl;
}

