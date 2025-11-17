// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/11/2025
// Número de ejercicio: 8
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;


void contar();

int main()
{
    system("cls");
    contar();
    return 0;
}

void contar()
{
    ifstream archivo("documento.txt");
    int contlinea=0, contpalabra=0, contletra=0;
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    
    while(!archivo.eof()){
        string linea;
        getline(archivo, linea);
        stringstream ss(linea);
        contlinea++;
        string p;
        while (getline(ss, p, ' '))
        {
            contpalabra++;

            for (int i = 0; i < p.length(); i++)
            {
                contletra++;
            }

        }
              
    }
    archivo.close();
    cout<<"el total de lineas es: "<<contlinea<<endl;
    cout<<"el total de palabras es: "<<contpalabra<<endl;
    cout<<"el total de caracteres es: "<<contletra<<endl;

}


