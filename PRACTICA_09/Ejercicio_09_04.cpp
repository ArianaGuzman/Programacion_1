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

empleado ingresadatos();
void salario(int n, empleado vempleado[]);

int main()
{
    empleado vempleado[100];
    int n= 0;
    
    system("cls");
    cout << "ingresa numero de empleados: "<<endl;
    cin >> n;
    for (int i=0; i< n; i++)
    {
        cout<<"empleado: "<<i<<endl;
        vempleado[i]=ingresadatos();    
    }
    salario( n, vempleado);

    return 0;
}

empleado ingresadatos()
{
    empleado empleado;

    cin.ignore();
    cout << "Ingrese el nombre del empleado: ";
    cin.getline(empleado.nombre, 30);
    cout << "Ingrese el genero del empleado: ";
    cin.getline(empleado.genero , 30);
    cout << "Ingrese el salario del empleado: ";
    cin >> empleado.salario;
        
    return empleado;

}

void salario(int n, empleado vemp[])
{
    float mayorsalario=0, menorsalario=0;
    empleado empmayor, empmenor;
    int bandera=0;
    for (int i=0; i< n; i++)
    {
        if ( bandera == 0)
        {
            mayorsalario= vemp[i].salario;
            menorsalario= vemp[i].salario;
            bandera=1;
            empmenor=vemp[i];
            empmayor=vemp[i];

        }
        if ( vemp[i].salario < menorsalario )
        {
            menorsalario=vemp[i].salario;
            empmenor=vemp[i];
        }
        if ( vemp[i].salario > mayorsalario )
        {
            mayorsalario=vemp[i].salario;
            empmayor=vemp[i];
        }

        
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

