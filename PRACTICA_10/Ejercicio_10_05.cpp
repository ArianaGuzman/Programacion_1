// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 09/11/2025
// Número de ejercicio: 5
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> vproducto;

vector<double> actualizar(string producto, double precio);
void guardarMostrar(vector<double> precios);

int main()
{
    system("cls");
    string producto;
    double precio;
    cout<<"ingresa el producto: "<<endl;
    cin>>producto;
    cout<<"ingresa el nuevo precio: "<<endl;
    cin>>precio;
    vector<double> precios = actualizar(producto, precio);
    guardarMostrar(precios);
    return 0;
}

vector<double> actualizar(string producto, double precio)
{
    ifstream archivo("productos.txt");
    vector<double> vprecio;
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return vprecio;
    }
    
    while(!archivo.eof()){
        string linea;
        getline(archivo, linea);
        stringstream ss(linea);
        string p, nomprod;
        int cont = 1;
        double precioprod, dprecio;
        getline(ss, p, ' ');
        vproducto.push_back(p);   
        nomprod=p;
        getline(ss, p, ' ');  
        dprecio=stod(p);
        if(nomprod==producto)
            vprecio.push_back(precio);     
        else
            vprecio.push_back(dprecio);        
    }
    archivo.close();
    return vprecio;
}

void guardarMostrar(vector<double> precios)
{
    int n = precios.size();
    ofstream archivo("productos_nuevo.txt");
    if(!archivo.is_open()){
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }
    
    for(int i = 0; i < n; i++){
        cout << vproducto[i] << " " << precios[i] << endl;
        archivo << vproducto[i] << " " << precios[i] << "\n";
    }
    archivo.close();
}

