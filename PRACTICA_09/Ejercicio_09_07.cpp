// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/11/2025
// Número de ejercicio: 7

using namespace std;
#include <iostream>
#include <string.h>

    int i=0, sumaprod=0;
;

struct Producto
{
    char nombre[30];
    char codigo[30];
    float precio=0;
    int cantidad_en_inventario=0;
    char obeservaciones[80];
};
Producto IngresarDatosProducto();
Producto preciomayor(int n, Producto vproducto[]);
void verificarcantidad(int n, Producto vproducto[]);
void mostrarproductos(int n, Producto vproducto[]);

int main()
{
    system("cls");
    Producto vproducto [100], dato;
    int n= 0;
    cout << "ingresa la cantidad de productos: "<<endl;
    cin >> n;
    cin.ignore(); 
    for (int i=0; i< n; i++)
    {
        cout<<"productos: "<<i<<endl;
        vproducto[i]=IngresarDatosProducto();  
    }
    dato= preciomayor(n,vproducto);
    cout<<"el producto mas caro es: "<<dato.nombre<<"   "<<dato.precio<<endl;
    cout<<"la suma total de productos de inventario es: "<<sumaprod<<endl;
    verificarcantidad( n, vproducto);
    mostrarproductos( n, vproducto);

    return 0;
}

Producto IngresarDatosProducto()
    {
        Producto dato;
        cout << "Ingrese el nombre: ";
        cin.ignore();  
        cin.getline(dato.nombre, 30);
        cout << "Ingrese el codigo: ";
        cin.getline(dato.codigo, 30);
        cout << "Ingrese el precio: ";
        cin >> dato.precio;
        cout << "Ingrese la cantidad en inventario : ";
        cin>>dato.cantidad_en_inventario;
        cin.ignore(); 
        cout << "Ingrese alguna observacion : ";
        cin.getline(dato.codigo, 80);
        cout<<endl;
        cout<<endl;
        return dato;

}


Producto preciomayor(int n, Producto vproducto[])
{
    Producto prodmayor;
    int productomayor=0;
    for (int i=0; i< n; i++)
    { 
        sumaprod= sumaprod + vproducto[i].cantidad_en_inventario;
        if(vproducto[i].precio > productomayor)
        {
            productomayor= vproducto[i].precio;
            prodmayor= vproducto[i];
        }
    }
    cout<<endl;
    return prodmayor;
}

void verificarcantidad(int n, Producto vproducto[])
{
    for (int i=0; i< n; i++)
    { 
        if(vproducto[i].cantidad_en_inventario < 5)
        {
            strcpy(vproducto[i].obeservaciones, "PRoDUCTO CON BAJA CANTIDAD DE INVENTARIO");
        }
        
    }
}

void mostrarproductos(int n, Producto vproducto[])
{
    for (int i=0; i< n; i++)
    { 
        cout<<"nombre: "<<vproducto[i].nombre<<"------"<<vproducto[i].obeservaciones<<endl;       
        
    }
}

