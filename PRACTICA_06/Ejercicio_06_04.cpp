// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 4
// Problema planteado:
using namespace std;
#include <iostream>
#include <vector>
#include <string>
int n=0;

void RotarVector(int v1[]);
void LlenarVector(int vector1[], int cantidad);
void MostrarVector(int v1[]);


int i=0,j=0;

int main()
{
    int vector[1000];
    cout<<"ingresa la cantidad de numeros que desea ingresar: "<<endl;
    cin>>n;
    LlenarVector(vector, n);
    RotarVector(vector);
    MostrarVector(vector);

}

void MostrarVector(int v1[])
{
    for ( i = 0; i < n; i++)
    {
        cout<<v1[i] <<endl;
        
    }
}

void RotarVector(int v1[])
{
    int pos=0, aux=0, k=0, ultimo=0;
    cout<<"ingresa la cantidad de posiciones para girar a la derecha:"<<endl; 
    cin>>pos;
    cout<<"n: "<<n<<endl;
    for (i=0; i<pos;i++)
    {
        int ultimo = v1[n-1]; 
        for (k = n - 1; k > 0; --k) 
            v1[k] = v1[k - 1];
        v1[0] = ultimo;
    }

}

void LlenarVector(int vector1[], int cantidad)
{
    int numero=0;
    for ( i = 0; i < cantidad; i++)
    {
        cout<<"ingresa un numero: "<<endl;
        cin>>numero;
        vector1[i]=numero;
    }
    
}