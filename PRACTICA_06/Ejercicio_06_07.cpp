// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Fecha creación: 17/10/25
// Número de ejercicio: 7
// Problema planteado:
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int i=0;
int pixeles[1000]; 

void llenarPixeles(int n)
 {
    for(i=0; i<n; i++) 
    {
        pixeles[i]=rand()% 256; 
    }
}

void mostrarPixeles(int n) 
{
    cout<<"pixeles: "<<endl;
    for(int i = 0; i < n; i++) 
    {
      cout<<pixeles[i] <<" ";
    }
    cout<< endl;
}

void contarRangos(int n) 
{
    int h[26]={0};
    int r=0; 
    for(i=0;i<n;i++) 
    {
        r= pixeles[i]/10;
        if (r>25) 
            r=25;
        h[r]=h[r] + 1;
    }
    for (i=0; i<25; i++) 
    {
        cout<<(i*10)<<"-"<<(i*10+9)<<": "<<h[i];
        if(h[i]==1) 
            cout<<"pixel"<<endl;
        else 
            cout<<"pixeles"<<endl;
    }
    cout<< "250-255: "<< h[25]<<endl;
    if(h[25]==1)
        cout<<" píxel"<<endl;
    else 
        cout<<"píxeles"<<endl;
}

int main() 
{
    srand(time(0));
    int n;
    cout << "ingrese la cantidad de pixeles(max 1000): ";
    cin >> n;
    llenarPixeles(n);
    mostrarPixeles(n);
    contarRangos(n);
}
