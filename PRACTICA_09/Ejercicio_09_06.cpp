// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 6

using namespace std;
#include <iostream>
#include <string.h>

    int i=0;

struct Empleado
{
    char nombre[30];
    int id=0;
    float sueldo=0;
    int antiguedad=0;
};
Empleado IngresarDatosEmpleado();
void sueldoempleado(int n, Empleado vempleado[]);
void calculoantiguedad(int n, Empleado vempleado[]);

int main()
{
    system("cls");
    Empleado vempleado [100];
    int n= 0;

    cout << "ingresa la cantidad de empleados: "<<endl;
    cin >> n;
    cin.ignore(); 
    for (int i=0; i< n; i++)
    {
        cout<<"empleados: "<<i<<endl;
        vempleado[i]=IngresarDatosEmpleado();  
    }
    sueldoempleado(n,vempleado);
    calculoantiguedad(n,vempleado);

    return 0;
}

Empleado IngresarDatosEmpleado()
    {
        Empleado dato;
        cout << "Ingrese el nombre: ";
        cin.ignore();  
        cin.getline(dato.nombre, 30);

        cout << "Ingrese el id : ";
        cin >> dato.id;

        cout << "Ingrese el sueldo: ";
        cin >> dato.sueldo;

        cin.ignore();  
        cout << "Ingrese la antiguedad : ";
        cin>>dato.antiguedad;

        cout<<endl;
        cout<<endl;
        return dato;

}


void sueldoempleado(int n, Empleado vempleado[])
{
    float sueldo= 1000.0;
    int cont=0;
    for (int i=0; i< n; i++)
    { 
        if(vempleado[i].sueldo > sueldo)
        {
            cont=cont+1;
        }
    }
    cout<<"empleados con sueldo mayor a "<<sueldo<<" son: "<<cont<<endl;
}

void calculoantiguedad(int n, Empleado vempleado[])
{
    float  sumantiguedad=0;
    for (int i=0; i< n; i++)
    { 
        sumantiguedad= sumantiguedad + vempleado[i].antiguedad;
    }
    cout<<"promedio de antiguedad de los empleados es: "<<float(sumantiguedad/n)<<endl;
}

