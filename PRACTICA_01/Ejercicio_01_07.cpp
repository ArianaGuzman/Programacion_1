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
    char letra=0;
    cout<<"Ingresa una letra: "<<endl;
    cin>>letra;
    switch (letra) 
    {
    case 'a': cout<<letra<<" es vocal "<<endl;
              break; 
    case 'b': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'c': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'd': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'e': cout<<letra<<" es vocal "<<endl;
                break;
    case 'f': cout<<letra<<" es consonante "<<endl;
                break;
    case 'g': cout<<letra<<" es consonante "<<endl;
                break;
    case 'h': cout<<letra<<" es consonante "<<endl;
                break;
    case 'i': cout<<letra<<" es vocal "<<endl;
                break;
    case 'j': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'k': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'l': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'm': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'n': cout<<letra<<" es consonante "<<endl;
                break;
    case 'o': cout<<letra<<" es vocal "<<endl;
                break;
    case 'p': cout<<letra<<" es consonante "<<endl;
                break;
    case 'q': cout<<letra<<" es consonante "<<endl;
                break;
    case 'r': cout<<letra<<" es consonante "<<endl;
                break;
    case 's': cout<<letra<<" es consonante "<<endl;
              break; 
    case 't': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'u': cout<<letra<<" es vocal "<<endl;
              break; 
    case 'v': cout<<letra<<" es consonante "<<endl;
              break; 
    case 'w': cout<<letra<<" es vocal "<<endl;
                break;
    case 'x': cout<<letra<<" es consonante "<<endl;
                break;
    case 'y': cout<<letra<<" es consonante "<<endl;
                break;
    case 'z': cout<<letra<<" es consonante "<<endl;
                break;
    default: cout<<letra<<" no es una letra valida "<<endl; 
    }
    return 0;
}