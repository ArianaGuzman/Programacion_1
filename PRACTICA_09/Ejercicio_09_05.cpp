// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 5

using namespace std;
#include <iostream>
#include <string.h>

    int i=0;

struct Pelicula
{
    char titulo[40];
    char director[35];
    int duracion=0;
    int anio_estreno=0;
    char genero[35];
};
Pelicula IngresarDatosPelicula();
void ingresardatos(int n, Pelicula vpelicula);
void buscargenero(string genero, Pelicula vpelicula[], int n);
void buscardirector(string director, Pelicula vpelicula, int n);

int main()
{
    system("cls");
    Pelicula vpelicula [100], datos;
    int n= 0;
    string genero, director;
    
    cout << "ingresa la cantidad de peliculas: "<<endl;
    cin >> n;
            cin.ignore(); 
    for (int i=0; i< n; i++)
    {
        cout<<"Pelicula: "<<i<<endl;
        vpelicula[i]=IngresarDatosPelicula();    
    }

    cout << " ingresa el genero de pelicula: ";
    cin >> genero;
    buscargenero(genero, vpelicula, n);
    cout << "ingresa el director de peliculas: ";
    cin >> director;
    buscardirector(director, vpelicula[100], n);
    return 0;
}

Pelicula IngresarDatosPelicula()
    {
        Pelicula pelicula;
        cout << "Ingrese el titulo: ";
        cin.ignore();  
        cin.getline(pelicula.titulo, 40);

        cout << "Ingrese el año de estreno : ";
        cin >> pelicula.anio_estreno;

        cout << "Ingrese la duracion: ";
        cin >> pelicula.duracion;

        cin.ignore();  
        cout << "Ingrese el director : ";
        cin.getline(pelicula.director, 35);

        cout << "Ingrese el genero : ";
        cin.getline(pelicula.genero, 35);
        cout<<endl;
        cout<<endl;
        return pelicula;

}


void buscargenero(string genero, Pelicula vpelicula[], int n)
{
    for (int i=0; i< n; i++)
    { 
        if(vpelicula[i].genero == genero)
        {
            cout << "---------------Peliculas con genero elegido -------------" << endl;
            cout << "\tpelicula: " <<vpelicula[i].titulo << "   -   ";
            cout  <<vpelicula[i].director<< "  -    ";
            cout <<vpelicula[i].duracion<< "  -  ";
            cout  <<vpelicula[i].anio_estreno<< "  -    "<<endl;
        }
    }
}

void buscardirector(string director, Pelicula vpelicula[], int n)
{
    for (int i=0; i< n; i++)
    {
        if(vpelicula[i].director == director)
        {
            cout << "---------------Peliculas con director elegido -------------" << endl;
            cout << "\tpelicula: " <<vpelicula[i].titulo << "   -   ";
            cout  <<vpelicula[i].director<< "  -    ";
            cout <<vpelicula[i].duracion<< "  -  ";
            cout  <<vpelicula[i].anio_estreno<< "  -    "<<endl;
        }
    }
}
