// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int suma=0;
int fibonacci(int n)
{
   if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n)
{
    if (n == 0) 
       return n;
    else  
    {
        return n + factorial(n - 1);
    }
}
int main()
{
    int n=0, resultado=0;
    cout<<"ingresa un numero :" <<endl;
    cin>>n;  
     for (int i = 0; i <= n; i++) 
        cout << fibonacci(i) << ", ";
    return 0;
}

