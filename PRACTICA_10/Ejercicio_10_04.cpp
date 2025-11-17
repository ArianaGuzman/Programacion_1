// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 09/11/2025
// Número de ejercicio: 4
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int buscar(string palabra);

int main()
{
    system("cls");
    string palabra;
    cout<<"ingresa la palabra que desea buscar: "<<endl;
    cin>>palabra;
    cout<<"la cantidad de palabras encontradas es: "<<buscar(palabra);
    return 0;
}


int buscar(string palabra)
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
            if (p == palabra)
            {
                cont++;
            }      
        }
    }
    archivo.close();
    return cont;
}