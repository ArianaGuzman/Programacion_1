// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/11/2025
// Número de ejercicio: 6
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> tempaltas;

vector<string> comparar(double temperatura);
void guardarMostrar(vector<string> ciudades);

int main()
{
    double temperatura;
    cout<<"ingresa la temperatura: "<<endl;
    cin>>temperatura;
    vector<string> ciudades = comparar(temperatura);
    guardarMostrar(ciudades);
    return 0;
}

vector<string> comparar(double temperatura)
{
    ifstream archivo("temperaturas.txt");
    vector<string> ciudades;
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return ciudades;
    }
    
    while(!archivo.eof()){
        string linea;
        getline(archivo, linea);
        stringstream ss(linea);
        string p, ciudad;
        int cont = 1;
        while (getline(ss, p, ' ')) {
            if(cont == 1){
                ciudad=p;
            } else {
                double num = stod(p);
                if (num >= temperatura)
                {
                    ciudades.push_back(ciudad);
                    tempaltas.push_back(p);
                }             
            }
            cont++;
        }
    }
    archivo.close();
    return ciudades;
}

void guardarMostrar(vector<string> ciudades) {
    int n = ciudades.size();
    ofstream archivo("altas_temperaturas.txt");
    if(!archivo.is_open()){
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }
    
    for(int i = 0; i < n; i++){
        cout << ciudades[i] << " " << tempaltas[i] << endl;
        archivo << ciudades[i] << " " << tempaltas[i] << "\n";
    }
    archivo.close();
}

