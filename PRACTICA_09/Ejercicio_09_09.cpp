// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 9

using namespace std;
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
int i=0;
struct Alumno
{
    char nombre[30];
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int notaF;
};

Alumno IngresarDatosAlumno();
void calculoNF(int n, Alumno vAlumno[]);


int main()
{
    system("cls");
    Alumno vAlumno [100];
    int n= 0;
    char deporte;
    cout << "ingresa la cantidad de Alumnos: "<<endl;
    cin >> n;
    cin.ignore(); 
    for (int i=0; i< n; i++)
    {
        cout<<"Alumnos: "<<i<<endl;
        vAlumno[i]=IngresarDatosAlumno();  
    }
    calculoNF( n,  vAlumno);

    return 0;
}

Alumno IngresarDatosAlumno()
    {
        Alumno dato;
        cout << "Ingrese el nombre: ";
        cin.ignore();  
        cin.getline(dato.nombre, 30);

        cout << "Ingrese nota 1: ";
        cin>>dato.nota1;
        cout << "Ingrese nota 2: ";
        cin>>dato.nota2;
        cout << "Ingrese nota 3: ";
        cin>>dato.nota3;
        cout << "Ingrese nota 4: ";
        cin>>dato.nota4;
        cout << "Ingrese nota final: ";
        cin>>dato.notaF;
        return dato;
}


void calculoNF(int n, Alumno vAlumno[])
{
    Alumno prodmayor;
    float np=0.0, pmayor=0, pmenor=9999, nf=0.0, np1=0.0;
    int bandera=0;
    for (int i=0; i< n; i++)
    { 
        np= (vAlumno[i].nota1 + vAlumno[i].nota2 + vAlumno[i].nota3 + vAlumno[i].nota4) /4; 
        nf= 0.7*np+0.3*vAlumno[i].notaF;

        if(bandera==0)
        {
            pmayor=nf;
            pmenor=nf;
            bandera=1;
        }

        if(nf > pmayor)
        {    
            pmayor=nf;  
        }
         if(nf < pmenor ) 
        {
            pmenor=nf;
        }
        cout<<"nombre:"<<vAlumno[i].nombre<<"     nota final: "<<float(nf)<<endl;
        cout<<"promedio: "<<np<<endl;

    }
    cout<<"Nota maxima:"<<pmayor<<endl;
    cout<<"Nota minima:"<<pmenor<<endl;
    
}



