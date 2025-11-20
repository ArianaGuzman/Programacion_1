// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17-11-2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct producto {
    int codigo;
    char nombre[50];
    int cantidadini;
    double precio;
};

struct ventas {
    char CI[10];
    char nombre[50];
    int codigo;
    int cantidadvend;
};

const char* Archivoprod = "productos.bin";
const char* Archivoventas = "ventas.bin";


producto ingresar (){
    producto prod;
    cout << "Ingrese el codigo del producto: " << endl;
    cin.ignore();
    cin>>prod.codigo;
    cout << "Ingrese el nombre del producto: " << endl;
    cin.ignore();
    cin.getline(prod.nombre, 50);
    cout << "Ingrese la cantidad inicial: " << endl;
    cin>>prod.cantidadini;
    cin.ignore();
    cout << "Ingrese el precio: " << endl;
    cin>>prod.precio;
    cin.ignore();
    return prod;
}

ventas Ingresarventa (){
    ventas vent;
    cout << "Ingrese CI" << endl;
    cin.ignore();
    cin.getline(vent.CI,30);
    cout << "Ingrese su nombre" << endl;
    cin.ignore();
    cin.getline(vent.nombre, 50);
    cout << "Ingrese el codigo: " << endl;
    cin>>vent.codigo;
    cin.ignore();
    cout << "Ingrese la cantidad: " << endl;
    cin>>vent.cantidadvend;
    cin.ignore();
    return vent;
}

void Agregarproducto (){
    producto prod = ingresar();
    ofstream archivo(Archivoprod, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al agregar" << endl;
        return;
    }
    archivo.write((char*)&prod, sizeof(producto));
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

void listaproductos (){
    ifstream ar1(Archivoprod, ios::binary);
    
    producto prod;
    ventas vent;
    while (ar1.read((char*)(&prod), sizeof(producto))){
        int suma=0;
        ifstream ar2(Archivoventas, ios::binary);
        while(ar2.read((char*)(&vent), sizeof(ventas))){
            if(vent.codigo==prod.codigo)
            {
                suma= suma + vent.cantidadvend;
            }
        }
        cout << prod.codigo <<"    " << prod.nombre <<"      "<< prod.cantidadini <<"    " << prod.precio<< "   "<<suma<<"   "<<prod.precio * suma<<endl;
        ar2.close();
    }

    ar1.close();
}


void modificarproducto (){
    fstream archivo(Archivoprod, ios::in | ios::out | ios::binary);
    if(!archivo.is_open()){
        cout << "Error en modificar" << endl;
        return;
    }
    producto prod;
    
    cout << "Ingrese el codigo de producto a cambiar: " << endl;
    int codprod;
    cin >> codprod;
    cout << "Ingrese el nuevo precio: " << endl;
    double precioprod;
    cin>>precioprod;

    bool modificado=true;
    while (archivo.read((char*)(&prod), sizeof(producto))&&modificado){
        if (codprod==prod.codigo)
        {
            archivo.seekp(-sizeof(producto), ios::cur);
            prod.precio=precioprod;
            archivo.write((char*)&prod, sizeof(producto));
            modificado=false;
        }
    }
    archivo.close();
}

void agregarventa () {
    ventas vent = Ingresarventa();
    ofstream archivo(Archivoventas, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al agregar" << endl;
        return;
    }
       archivo.write((char*)&vent, sizeof(ventas));
    archivo.close();
}

void buscarproducto (){
    ifstream archivo(Archivoprod, ios::binary);   
    producto prod;
    int codprod, bandera=0;
    cout<<"ingrese el codigo del producto: "<<endl;
    cin>>codprod;
    while (archivo.read((char*)(&prod), sizeof(producto))&&bandera==0){
        if (codprod==prod.codigo)
        {
            cout << "Codigo: " << prod.codigo << endl;
            cout << "Nombre: " << prod.nombre << endl;
            cout << "cantidad inicial: " << prod.cantidadini << endl;
            cout << "precio: " << prod.precio << endl;
            bandera=1;
        }
    }
    if (bandera==0)
    {
       cout<<"producto no encontrado"<<endl;
    }
    archivo.close();
}

void menu () {
    int opcion = 0;
    bool bandera = true;
    system("cls");
    while(bandera){
        cout << "MENU FARMACIA\n";
        cout << "=============================\n";
        cout << "1. Adicionar producto\n";
        cout << "2. Listado de productos\n";
        cout << "3. Buscar producto\n";
        cout << "4. Modificar producto\n";
        cout << "5. Adicionar ventas de un producto\n";
        cout << "6. Salir\n";
        cout << "=============================\n";
        cin >> opcion;
        switch(opcion){
            case 1:
                Agregarproducto();
                break;
            case 2:
                listaproductos();
                break;
            case 3:
                buscarproducto();
                break;
            case 4:
                modificarproducto();
                break;
            case 5:
                agregarventa();
                break;
            case 6:
                bandera = false;
                cout<<"Saliendo....";
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
    }
    
}

int main()
{
    menu();

    return 0;
}