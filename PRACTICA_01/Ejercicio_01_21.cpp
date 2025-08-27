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
    int n=0;
    int m=0;
    int x=0;
    do
    {
      cout<<"ingresa un numero"<<endl;
      cin>>n;
      cout<<"ingresa otro numero"<<endl;
      cin>>m;    
    } while ((n<0)||(m<0));
    while (m!=0)
    {
        if(m%2!=0)
        {
            x=x+n; //si m es impar, sumamos n a x
        }
    n=n+n;
    m=m/2; 
    } 
    cout<<"El resultado es: "<<x<<endl;   
    return 0;
    }   
