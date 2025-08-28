// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 22
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero1=0,numero2=0 ;
    cout<<"ingresa un primer numero: "<<endl;
    cin>>numero1;
    cout<<"ingresa un segundo numero: "<<endl;
    cin>>numero2;
    if (numero1 % numero2==0)
        cout<<numero1<<"es multiplo de "<<numero2<<endl;
    else
        cout<<numero1<<"no es multiplo de "<<numero2<<endl;
    return 0;
}
