// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 4
#include <iostream>
#include <cmath>
using namespace std;
float calculo(float p, float a)
{
    float IMC=0;
    IMC= p / pow(a,2);
    cout<<"tu IMC(Índice de Masa Corporal) es: "<< IMC<<endl;
}
int main()
{
   system("chcp 65001");
   system("cls"); 
   float peso=0, altura=0;
   cout<<"ingrese su peso (kg): "<<endl;
   cin>>peso;
   cout<<"ingrese su altura (m): "<<endl;
   cin>>altura;
   calculo(peso, altura);
}
