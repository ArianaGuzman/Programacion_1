// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 19-11-2025
// Número de ejercicio: 3
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct producto {
    int codigo;
    char nombre[50];
    char tipo [30];
    char tamaño [30];
    double precio;
};

const char* Archivoprod = "producto.bin";
const char* Archivoventas = "ventas.txt";


producto ingresar (){
    producto prod;
    cout << "Ingrese codigo" << endl;
    cin.ignore();
    cin>>prod.codigo;
    cout << "Ingrese su nombre" << endl;
    cin.ignore();
    cin.getline(prod.nombre, 50);
    cout << "Ingrese tipo:" << endl;
    cin.getline(prod.tipo, 50);  
    cout << "Ingrese tamaño" << endl;
    cin.getline(prod.tamaño, 50);  
    cout << "Ingrese el precio: " << endl;
    cin>>prod.precio;
    cin.ignore();
    return prod;
}

void Agregarproducto (){
    producto prod = ingresar();
    ofstream archivo(Archivoprod, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al agregar" << endl;
        return;
    }
    if (prod.tipo=="ESPECIAL")
    {
        prod.precio=prod.precio + (prod.precio * 0.10);
    }
    archivo.write((char*)&prod, sizeof(producto));
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

void ingresarventa (){
    char CI[30], tamaño[30];
    int codigo=0, cantidad;
    ofstream archivo(Archivoventas, ios::app);
    if(!archivo.is_open()){
        cout << "Error al agregar" << endl;
        return;
    }
    cout << "Ingrese CI" << endl;
    cin.ignore(); 
    cin.getline(CI,30);
    cout << "Ingrese codigo de pizza" << endl;
    cin>>codigo;
    cout << "Ingrese tamaño" << endl;
    cin.ignore();
    cin.getline(tamaño, 30);  
    cout << "Ingres e la cantidad: " << endl;
    cin>>cantidad;
    cin.ignore();
    archivo<<CI<<";"<<codigo<<";"<<tamaño<<";"<<cantidad<<"\n";
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

void modificarproducto (){
    fstream archivo(Archivoprod, ios::in | ios::out | ios::binary);
    if(!archivo.is_open()){
        cout << "Error en modificar" << endl;
        return;
    }
    producto prod;
    
    cout << "Ingrese el codigo de pizza a cambiar: " << endl;
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
    if (modificado)
    {
        cout<<"no se encontro el codigo de pizza";
    } 
    archivo.close();
}


void listaproductos (){
    ifstream archivop(Archivoprod, ios::binary); 
    if(!archivop.is_open()){
        cout << "Error en modificar" << endl;
        return;
    }
    producto prod;
    while (archivop.read((char*)(&prod), sizeof(producto)))
    {
        ifstream archivov(Archivoventas);  
        if(!archivov.is_open())
        {
            cout << "Error en modificar" << endl;
            return;
        }
        int suma=0;
        while(!archivov.eof())
        {
            string linea;
            getline(archivov, linea);
            stringstream ss(linea);
            string p, n, e;
            int codp, cant;
            getline(ss, p, ';');
            getline(ss, n, ';');
            codp= stoi(n);
            if (codp == prod.codigo)
            {
                getline(ss, p, ';');
                getline(ss, e, ';');
                cant= stoi(e);
                suma= suma + cant;
            }    
        }
        cout << prod.codigo <<"    " << prod.nombre <<"      "<< prod.tipo <<"    " << prod.tamaño<< "   "<< prod.precio<< "   "<<suma<<"   "<<prod.precio * suma<<endl;
        archivov.close();
    }
    archivop.close();

}

void eliminarproducto(){
    ifstream archivo(Archivoprod);
    if(!archivo.is_open()){
        cout << "Error en modificar" << endl;
        return;
    }
    producto prod;
    vector<producto> vproductos;
    while (archivo.read((char*)(&prod), sizeof(producto))){
        vproductos.push_back(prod);
    }
    archivo.close();
     
    cout << "Ingrese el codigo de pizza a eliminar: " << endl;
    int codeliminar;
    cin>>codeliminar;

    ofstream archivoEscritura(Archivoprod, ios::binary);
    if(!archivoEscritura.is_open()){
        cout << "Error al sobreescribir" << endl;
        return;
    }
    
    for(int i = 0; i < vproductos.size(); i++){
        if(vproductos[i].codigo != codeliminar){
            archivoEscritura.write((char*)&vproductos[i], sizeof(vproductos));
        }
    }
    cout << "Eliminado exitosamente" << endl;
    vproductos.clear();
    archivoEscritura.close();
}


void menu () {
    int opcion = 0;
    bool bandera = true;
    system("cls");
    while(bandera){
        cout << "1. Adicionar Pizza \n";
        cout << "2. Listado de Pizzas\n";
        cout << "3. Modificar el precio de la Pizza \n";
        cout << "4. Eliminar una Pizza\n";
        cout << "5. Adicionar Venta de Pizzas \n";
        cout << "6. Salir\n";
        cin >> opcion;
        switch(opcion){
            case 1:
                Agregarproducto();
                break;
            case 2:
                listaproductos();
                break;
            case 3:
                modificarproducto();
                break;
            case 4:
                eliminarproducto();
                break;
            case 5:
                ingresarventa();
                break;                
            case 6:
                bandera = false;
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