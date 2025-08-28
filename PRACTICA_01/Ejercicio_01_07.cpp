// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    system("cls");
    char letra; //inicializo la variable letra como character
    cout<<"Ingresa una letra: "<<endl;
    cin>>letra;
        if( letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
            cout<<letra<<" es vocal "<<endl;
        else if (int(letra) >=65 && int(letra)<=90 || int(letra)>=97 && int(letra)<=122)
            cout<<letra<<" es consonante "<<endl;
        else
            cout<<letra<<" caracter especial "<<endl;
            return 0;
    }
    
