// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int sumaDigitos (int x) 
{
    if (x == 0)
    {
        return 0;
    } 
    else 
    {
        return (x % 10) + sumaDigitos(x / 10);
    }
}

int main()
{
    int x;
    cout << "Ingrese un numero: " << endl;
    cin >> x;
    
    int suma = sumaDigitos(x);
    
    cout << "La suma de sus digitos es: " << suma << endl;

    return 0;
}