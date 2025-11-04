
// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 10
#include <iostream>
#include <string.h>
using namespace std;

struct Fraccion
{
    int numerador=0;
    int denominador=0;
};

    int x=0, y=0;
    Fraccion numden;

int euclides (int x, int y) 
{
    if (x % y == 0) 
    {
        return y;
    } 
    else 
    {
        return euclides(y, x % y);
    }
}

void cambiar(int &x, int &y)
{
    y = y + x;
    x = y - x;
    y = y - x;
    numden.denominador=y;
    numden.numerador= x;
    cout<<x<<"  **  "<<y<<endl;
}

int main()
{
    system("cls");
    Fraccion  reducida;
    cout << "Ingrese numerador: " << endl;
    cin >> numden.numerador;
    cout << "Ingrese denumerador: " << endl;
    cin >> numden.denominador;
    if (numden.numerador < numden.denominador)
    {
        cambiar(numden.numerador, numden.denominador);
    } 
    int gdc = euclides(numden.numerador, numden.denominador);
    cout << "El mcd es: " << gdc << endl;
    if (numden.numerador < numden.denominador)
    {
        reducida.numerador=numden.denominador/gdc;
        reducida.denominador=numden.numerador/gdc;
        cout<<reducida.numerador<<"/"<<reducida.denominador;
    }
        
    else
    {
        reducida.numerador=numden.numerador/gdc;
        reducida.denominador=numden.denominador/gdc;
        cout<<reducida.denominador<<"/"<<reducida.numerador;
    }
    return 0;
}
