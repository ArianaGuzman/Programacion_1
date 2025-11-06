
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

int euclides (int x, int y);
void cambiar(int &x, int &y);

int main()
{
    system("cls");
    Fraccion  reducida;
    cout << "Ingrese numerador: " << endl;
    cin >> numden.numerador;
    cout << "Ingrese denumerador: " << endl;
    cin >> numden.denominador;
    x= numden.numerador;
    y=numden.denominador;
    if (x < y)
    {
        cambiar(x, y);
    } 
    int gdc = euclides(x, y);
    cout << "El mcd es: " << gdc << endl;
        reducida.numerador=numden.numerador/gdc;
        reducida.denominador=numden.denominador/gdc;
        cout<<reducida.numerador<<"/"<<reducida.denominador;

    return 0;
}

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
}