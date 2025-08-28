// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 23
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero=0,invertido=0;
    cout<<"ingrese numero: ";
	cin>>numero;
    while (numero!=0){
		invertido=invertido*10+(numero%10);
		numero=numero/10;
	}
	cout <<invertido<<endl;
    return 0;
}