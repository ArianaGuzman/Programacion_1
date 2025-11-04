// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 4
using namespace std;
#include <iostream>
#include <string.h>
struct empleado
{
    char nombre[30];
    char genero[20];
    float salario=0;
};

void ingresadatos(int n, empleado vempleado);
int main()
{
    empleado vempleado[100];
    int n= 0;
    
    system("cls");
    cout << "ingresa numero de empleados: "<<endl;
    cin >> n;
    ingresadatos(n, vempleado[0]);
    return 0;
}

void ingresadatos(int n, empleado vempleado)
{
    empleado empleado, empmayor, empmenor;
    int i= 0;
    int bandera=0;
    float mayorsalario=0, menorsalario=9999;
    for (int i=0; i< n; i++)
    {
        cout<<"empleado: "<<i<<endl;
        cin.ignore();
        cout << "Ingrese el nombre del empleado: ";
        cin.getline(empleado.nombre, 30);
        cout << "Ingrese el genero del empleado: ";
        cin.getline(empleado.genero , 30);
        cout << "Ingrese el salario del empleado: ";
        cin >> empleado.salario;
        if ( empleado.salario > mayorsalario)
        {
            mayorsalario= empleado.salario;
            empmayor= empleado;
            bandera=1;
        }
        else if ( empleado.salario < menorsalario && bandera==0 )
        {
            menorsalario=empleado.salario;
            empmenor= empleado;
        }
        bandera=0;   
    }
   cout << "---------------Empleado mayor salario -------------" << endl;
   cout << "\tNombre: " <<empmayor.nombre << endl;
   cout << "\tGenero: " <<empmayor.genero << endl;
   cout << "\tSalario: " <<empmayor.salario<< endl;
   cout << "-------------------------------------------" << endl;  
   cout << "------------Empleado menor salario -----------" << endl;
   cout << "\tNombre: " <<empmenor.nombre << endl;
   cout << "\tGenero: " <<empmenor.genero << endl;
   cout << "\tSalario: " <<empmenor.salario<< endl;
   cout << "-------------------------------------------" << endl; 
}


