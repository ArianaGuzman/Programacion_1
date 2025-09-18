// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>

float MayorTemperatura(float &t1, float &t2)
{
    if (t1>t2)
        return t1;
    else
        return t2;
}


float ConvertirCelsiusAFahrenheit(float &c)
{
c=(c * 9/5)+32;
return c;
}


int main()
{
system("chcp 65001");
system("cls");
float grados=0, temp1=0, temp2=0;
cout<<"ingresa la temperatura en grados celcius: "<<endl;
cin>>grados;
cout<<grados<<" celsius a fahrenheit es: "<<endl;
ConvertirCelsiusAFahrenheit(grados);
cout<<grados<<" grados fahrenheit"<<endl;
cout<<"ingresa el primer valor de temperatura: "<<endl;
cin>>temp1;
cout<<"ingresa el Segundo valor de temperatura: "<<endl;
cin>>temp2;
cout<<" La temperatura mayor es: "<<endl;
cout<< MayorTemperatura(temp1,temp2);
}