// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 2

using namespace std;
#include <iostream>
#include <string.h>

struct Atleta
{
    char nombre [30];
    char pais [30];
    int edad=0;
    int mejor_tiempo=0;
};

Atleta IngresarDatosAtleta();
void Registrar(int n);
void MostrarMejorTiempo(Atleta MejorTiempo);

int main()
{
    int n = 0;
    system("cls");
    cout << "ingresa la cantidad de atletas: ";
    cin >> n;
    Registrar(n);
    return 0;
}

Atleta IngresarDatosAtleta()
{
    Atleta info; 
    cin.ignore();
    cout << "Ingrese el nombre del atleta: ";
    cin.getline(info.nombre, 30);
    cout << "Ingrese el pais del atleta: ";
    cin.getline(info.pais, 30);
    cout << "Ingrese la edad del atleta: ";
    cin >> info.edad;
    cout << "Ingrese el tiempo del atleta (en segundos): ";
    cin >> info.mejor_tiempo;
    return info;
}

void Registrar(int n)
{
    Atleta info, mejor_tiempo;
    int MejorTiempo = 99999;
    for (int i = 1; i <= n; i++)
    {
        info= IngresarDatosAtleta();
        if (info.mejor_tiempo < MejorTiempo)
        {
            mejor_tiempo = info;
            MejorTiempo = info.mejor_tiempo;
        }
    }
    MostrarMejorTiempo( mejor_tiempo);
    
}

void MostrarMejorTiempo(Atleta mejor_tiempo)
{
    cout << "-------------------------------------------" << endl;
    cout << "\tNombre: " << mejor_tiempo.nombre << endl;
    cout << "\tPais: " << mejor_tiempo.pais << endl;
    cout << "\tedad: " << mejor_tiempo.edad << endl;
    cout << "\tMejor tiempo: " << mejor_tiempo.mejor_tiempo<< endl;
    cout << "-------------------------------------------" << endl;
}

