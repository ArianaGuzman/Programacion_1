#include <iostream>
// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 09/11/2025
// Número de ejercicio: 3
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void leerestudiantes();
void guardarestudiantes(int n);


int main()
{
    system("cls");
    int n=0;
    cout<<"ingrese cantidad de alumnos: "<<endl;
    cin>>n;
    guardarestudiantes(n);
    leerestudiantes();
    return 0;
}

void guardarestudiantes(int n)
{
    int i=0, cont=0;
    ofstream archivo;
    archivo.open("estudiantes.txt");
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
        for ( i = 1; i <= n; i++)
    {
        char nombre[40], edad[10], promedio[10];
        cin.ignore();
        cout << "Ingresar nombre del estudiante: ";
        cin.getline(nombre,40);
        cout << "Ingresar edad del estudiante: ";
        cin.getline(edad, 10);
        cout << "Ingresar promedio: ";
        cin.getline(promedio, 10);
        archivo<<nombre<<" "<<edad<<" "<<promedio<<"\n";
    }
   archivo.close();
}

void leerestudiantes()
{
    ifstream archivo;
    archivo.open("estudiantes.txt");
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    while(!archivo.eof())
    {
        string linea;
        getline(archivo, linea);
        stringstream ss(linea);
        string p, n, e;
        getline(ss, n, ' ');
        getline(ss, e, ' ');
        getline(ss, p, ' ');
            cout<<"Nombre: "<<n<<endl;
            cout<<"edad: "<<e<<endl;
            cout<<"Promedio: "<<p<<endl;            
    }
    archivo.close();
}



