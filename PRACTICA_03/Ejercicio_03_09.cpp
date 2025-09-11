// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;
int proceso(int t)
{
    int hora=0, minutos=0, j=8, tiempoExtra=0,tiempodebe=0;
    minutos= j * 60;
    if(t>minutos)
    {
        tiempoExtra=minutos - t;
        cout<<"ha trabajado"<<tiempoExtra<<" minutos extra"<<endl;
    }
    else if(t>minutos)
    {
        tiempodebe=minutos - t;
        cout<<"Debe: "<<tiempodebe<<" minutos"<<endl;
    }
}
int main ()
{
    int tiempo=0;
    cout<<"ingresa el tiempo total (en min): "<<endl;
    cin>>tiempo;
    proceso(tiempo);
}
