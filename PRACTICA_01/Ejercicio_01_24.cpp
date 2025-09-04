// Materia: Programación I, Paralelo 4
// Autor: Ariana Camille Guzman Salazar
// Carnet: 9873537 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 23/08/2025
// Número de ejercicio: 24
#include <iostream>
using namespace std;
 int main() {
    system("chcp 65001");
    system("cls");
    int numero=1;
    cout<<" Menu de opciones "<<endl;
    cout<<"1. opcion 1"<<endl;
    cout<<"2. opcion 2"<<endl;
    cout<<"3. opcion 3"<<endl;
    cout<<"0. Salir"<<endl;
    while(numero!=0)
    {
        cout<<"ingresa una opcion"<<endl;
        cin>>numero;
        switch(numero)
        {
            case 1: cout<<"1. opcion 1"<<endl;
                    cout<<"2. opcion 2"<<endl;
                    cout<<"3. opcion 3"<<endl;
                    cout<<"4. Salir"<<endl;
                    break;
            case 2: cout<<"1. opcion 1"<<endl;
                    cout<<"2. opcion 2"<<endl;
                    cout<<"3. opcion 3"<<endl;
                    cout<<"4. Salir"<<endl;
                    break;
            case 3: cout<<"1. opcion 1"<<endl;
                    cout<<"2. opcion 2"<<endl;
                    cout<<"3. opcion 3"<<endl;
                    cout<<"4. Salir"<<endl;
                    break;
            case 0: cout<<"salida con exito"<<endl;
                    break;
            default: cout<<"vuelve a intentarlo"<<endl;
                    break;
        }     
    }
    return 0;
  }
 