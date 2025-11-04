// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 8

using namespace std;
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
int i=0;
struct Atleta
{
    char nombre[30];
    char departamento[30];
    char deporte[30];
    int medallas=0;
};
Atleta IngresarDatosAtleta();
void medallas(int n, Atleta vAtleta[], int natletas);
void mostrarAtletas(int n, Atleta vAtleta[]);
void medallero(int n, Atleta vAtleta[]);


int main()
{
    system("cls");
    srand(time(NULL));
    Atleta vAtleta [100], dato;
    int n= 0, ntorneos=0;
    char deporte;
    cout << "ingresa la cantidad de atletas: "<<endl;
    cin >> n;
    cin.ignore(); 
    for (int i=0; i< n; i++)
    {
        cout<<"Atletas: "<<i<<endl;
        vAtleta[i]=IngresarDatosAtleta();  
    }
    cout << "ingresa la cantidad de torneos: "<<endl;
    cin >> ntorneos;
    cout << "ingresa el deporte: "<<endl;
    cin >> deporte;
    medallas(ntorneos,vAtleta, n);
    mostrarAtletas( n, vAtleta);
    medallero(n, vAtleta);
    return 0;
}

Atleta IngresarDatosAtleta()
    {
        Atleta dato;
        cout << "Ingrese el nombre: ";
        cin.ignore();  
        cin.getline(dato.nombre, 30);

        cout << "Ingrese el departamento: ";
        cin.getline(dato.departamento, 30);

        cout << "Ingrese el deporte: ";
        cin.getline(dato.deporte, 30);
        cout<<endl;
        return dato;
}


void medallas(int n, Atleta vAtleta[], int natletas)
{
    Atleta prodmayor;
    int Atletamayor=0, randatletas=0;
    for (int i=0; i< n; i++)
    { 
        randatletas= rand()% natletas;
        vAtleta[randatletas].medallas = vAtleta[randatletas].medallas + 1;
    }
}

void mostrarAtletas(int n, Atleta vAtleta[])
{
    for (int i=0; i< n; i++)
    { 
        cout<<"nombre: "<<vAtleta[i].nombre<<"------"<<vAtleta[i].medallas<<endl;          
    }
}


void medallero(int n, Atleta vAtleta[])
{
    string dpto;
    int clp=0, ccb=0, csz=0, ctj=0, cur=0, cpt=0, cpa=0, cch=0, cbe=0;
    for (int i=0; i< n; i++)
    { 
        dpto= vAtleta[i].departamento;
        
        if (dpto=="La Paz" )
            clp= clp + vAtleta[i].medallas;
        else if (dpto=="Cochabamba")
            ccb= ccb + vAtleta[i].medallas;
        else if (dpto=="Santa Cruz")
            csz= csz + vAtleta[i].medallas;      
    }
    cout<<"La Paz: "<<clp<<endl;
    cout<<"Cochabamba: "<<ccb<<endl;
    cout<<"Santa Cruz: "<<csz<<endl;
}



