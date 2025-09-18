// Materia: Programación I, Paralelo 4 //
//Autor: Ariana Camille Guzman Salazar
// Fecha creación: 14/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>

float MontoTotal(int n)
{
    int ran=0;
    float s=0;
    for(int i=1;i<=n;i++)
    {
        ran= (rand()%(50 - 20 +1))+20;
        s= s + ran;
    }
    cout<<"La suma total es: "<<s<<endl;
    if(s>2500)
    {
        s= s - (s*0.05); //por el porcentaje
        cout<<"monto a descontar: "<<s<<endl;
    }
    return s;    
}

int main()
{
    srand(time(0));
    int numero=0;
    float mt=0, IVA=0.13;
    cout<<"ingresa la cantidad de productos vendidos: "<<endl;
    cin>>numero;  
    if (numero<=0)
        cout<<"el numero debe de ser mayor que 0"<<endl;
    else
    mt=MontoTotal(numero);
    cout<<"el IVA es: "<<mt* IVA<<endl;
}
