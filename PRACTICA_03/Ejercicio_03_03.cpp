// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int verificacion(int x, int numinvertido)
{
    if(x==numinvertido)
        cout<<x<<"es un numero capicua"<<endl;
    else
        cout<<x<<"no es un numero capicua"<<endl;
}
int proceso (int numero)
{
    int invertido=0, contador=0;
    int original= numero;
    while (numero!=0)
    {
		invertido=invertido*10+(numero%10); 
	}
    verificacion(original,invertido);
}
int main ()
{
    system("chcp 65001");
    system("cls");
    int n=0;
    cout<<"ingresa un numero"<<endl;
    cin>>n;
    proceso(n);
}
