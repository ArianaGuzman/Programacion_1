// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 1
#include <iostream>
#include <string.h>
using namespace std;

struct Libro
{
    char titulo [60];
    char autor [35];
    int anio_publicacion=0;
    bool disponible;
};

Libro IngresarDatos(); 
void DesplegarDatos(Libro datos);

int main()
{
    Libro libro1;
    libro1 = IngresarDatos();
    DesplegarDatos(libro1);
    return 0;
}

Libro IngresarDatos()
{
    Libro datos;
    int opcion=0;
    cout<<"ingresa el titulo del libro: "<<endl; 
    cin.getline(datos.titulo,60);
    cout<<"ingresa el autor del libro: "<<endl; 
    cin.getline(datos.autor,35);
    cout<<"ingresa el anio del libro: "<<endl; 
    cin>>datos.anio_publicacion;
    //cin.ignore();
    cout<<"ingresa si el libro esta disponible o no (si=1   no=0)"<<endl; 
    cin>>opcion;
    if  (opcion==1)
        datos.disponible= true;
    else
        datos.disponible= false;
    return datos;

}

void DesplegarDatos(Libro datos)
{
   cout << "-------------------------------------------" << endl;
   cout << "\tTitulo: " << datos.titulo << endl;
   cout << "\tAutor: " << datos.autor << endl;
   cout << "\tAnio: " << datos.anio_publicacion << endl;
   if(datos.disponible)
        cout<<"\testa disponible"<<endl;
   else
        cout<<"\tno se encuentra disponible"<<endl;
   cout << "-------------------------------------------" << endl;  
}
