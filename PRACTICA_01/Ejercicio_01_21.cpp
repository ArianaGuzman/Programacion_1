// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 21
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    int numero1=0;
    int numero2=0;
    int contador=0;
    int suma=0;
    cout<<"ingresa primer numero";
	cin>>numero1;
	cout<<"ingresa segundo numero";
	cin>>numero2;
	if (numero1 == 0 ||numero2 == 0)
		cout<<"resultado es 0";		
	else 
    {
        if (contador < numero2 )
	        {
	            suma = suma + numero1;
	            contador= contador + 1;
            }
        cout<<"el resultado es: "<<suma<<endl;
    return 0;
    }   
}