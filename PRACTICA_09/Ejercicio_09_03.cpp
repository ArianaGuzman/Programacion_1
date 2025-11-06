// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 3

using namespace std;
#include <iostream>
#include <string.h>

struct Alumno
{
    int cedula=0;
    char nombre[30];
    char apellido[30];
    int edad=0;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[40];
    int telefono=0;
};

Alumno IngresarDatosAlumno();
void DesplegarDatos(Alumno alumno);

int main()
{
    Alumno valumno[100];
    int n= 0, i= 0;
    system("cls");
    cout << "ingresa la cantidad de alumnos de la materia de Programacion 1: "<<endl;
    cin >> n;
    for (int i=0; i< n; i++)
    {
        cout<<"alumno: "<<i<<endl;
        valumno[i]=IngresarDatosAlumno();    
    }

    for (int i=0; i< n; i++)
    {
        DesplegarDatos(valumno[i]);   
    }

    return 0;
}

Alumno IngresarDatosAlumno()
{
    Alumno alumno; 
    cin.ignore();
    cout << "Ingrese la cedula del estudiante: ";
    cin >> alumno.cedula;
    cin.ignore();
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(alumno.nombre, 30);
    cout << "Ingrese el apellido del estudiante: ";
    cin.getline(alumno.apellido, 30);
    cout << "Ingrese la edad del estudiante: ";
    cin >> alumno.edad;
    cin.ignore();
    cout << "Ingrese la profesion del estudiante: ";
    cin.getline(alumno.profesion, 30);
    cout << "Ingrese el lugar de nacimiento del estudiante: ";
    cin.getline(alumno.lugar_nacimiento, 30);
    cout << "Ingrese la direccion del estudiante: ";
    cin.getline(alumno.direccion, 40);
    cout << "Ingrese el telefono del estudiante: ";
    cin >> alumno.telefono;  
 
    return alumno;
}

void DesplegarDatos(Alumno alumno)
{
   cout << "-------------------------------------------" << endl;
   cout << "\tCedula: " <<alumno.cedula << endl;
   cout << "\tNombre: " <<alumno.nombre << endl;
   cout << "\tApellido: " <<alumno.apellido << endl;
   cout << "\tEdad: " <<alumno.edad << endl;
   cout << "\tProfesion: " <<alumno.profesion << endl;
   cout << "\tLugar de Nacimiento: " <<alumno.lugar_nacimiento << endl;
   cout << "\tDireccion: " <<alumno.direccion << endl;
   cout << "\tTelefono: " <<alumno.telefono << endl;
   cout << "-------------------------------------------" << endl;  
}