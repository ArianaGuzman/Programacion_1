// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 09/11/2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void leerdatos();

int main()
{
    system("cls");
    leerdatos();
    return 0;
}


void leerdatos()
{
    ifstream archivo;
    int cont = 0;
    archivo.open("texto.txt");
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    while(!archivo.eof()){
        string linea;
        getline(archivo, linea);
        stringstream lineastr(linea);
        string p;
        while (getline(lineastr, p, ' ')) 
        {
            cont++;
        }
    }
    cout<<"la cantidad de palabras es: "<<cont<<endl;
    archivo.close();
}