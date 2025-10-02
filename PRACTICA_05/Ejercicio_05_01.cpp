// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 1
// Problema planteado: 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void voltajes()
{
    int i=0;
    double randomvolt=0.0; 
    vector<double>voltaje(100);
    for ( i = 0; i < size(voltaje); i++)
    {  
       randomvolt= (((double)(rand()%(22000 - 2000 +1))+2000))/100;
       voltaje[i]=randomvolt;
    }
    cout<<"los primeros 10 de la lista de voltajes son: "<<endl;
      for ( i = 0; i < 10; i++)
       cout<<voltaje[i]<<endl;
    
     
}


void temperaturas()
{
    int i=0;
    double randomtemp=0; 
    vector<double>temperatura(50);
    for ( i = 0; i < size(temperatura); i++)
    {
       randomtemp= (((double)(rand()%(10000 - 0 +1))+ 0))/100;
       temperatura[i]=randomtemp;
    }
    cout<<"los primeros 10 de la lista de temperaturas son: "<<endl;
    for ( i = 1; i <= 10; i++)
       cout<<temperatura[i]<<endl;
    
}

void caracteres()
{
    int i=0;
    vector<char>caracteres(30);
    for ( i = 0; i < size(caracteres); i++)
    {
        if(i%2==0)
            caracteres[i]=(rand()%(57 - 49 +1))+ 49;
        else
            caracteres[i]=(rand()%(122 - 65 +1))+ 65;
       
    }
    cout<<"los primeros 10 de la lista de caracteres son: "<<endl;
    for ( i = 0; i < 10; i++)
       cout<<caracteres[i]<<endl;
    
}

void anios()
{
    int i=0;
    vector<int>anios(100);
    int randomanios=0; 
    for ( i = 0; i < size(anios); i++)
    {
       randomanios= (rand()%(2025 - 1990 +1))+ 1990;
       anios[i]=randomanios;
    }
    cout<<"los primeros 10 de la lista de anios son: "<<endl;
    for ( i = 0; i < 10; i++)
       cout<<anios[i]<<endl;
}

void velocidades()
{
    int i=0;
    vector<double>velocidad(32);
    double randomveloz=0;
    int mini=1000, maxi=30000; 
    for ( i = 0; i < size(velocidad); i++)
    {
       randomveloz= (((double)(rand()%(maxi - mini +1))+ mini))/100;
       velocidad[i]=randomveloz;
    }
    cout<<"los primeros 10 de la lista de velocidades son: "<<endl;
    for ( i = 1; i <= 10; i++)
       cout<<velocidad[i]<<endl;
}

void distancias()
{
    int i=0;
    vector<double>distancias(1000);
    double randomdistancia=0;
    int mini=100, maxi=100000; 
    for ( i = 0; i < size(distancias); i++)
    {
       randomdistancia= (((double)(rand()%(maxi - mini +1))+ mini))/100;
       distancias[i]=randomdistancia;
    }
    cout<<"los primeros 10 de la lista de distancias son: "<<endl;
    for ( i = 0; i < 10; i++)
       cout<<distancias[i]<<endl;
}



int main ()

{
    srand(time(0));
    voltajes ();
    temperaturas();
    caracteres();
    anios();
    velocidades();
    distancias();
}