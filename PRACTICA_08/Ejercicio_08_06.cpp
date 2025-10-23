// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar 
// Fecha creación: 21/10/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int v1[1000], v2[1000];

bool compara(int v1[], int v2[], int i)
{
    if(i < 0)
        return true;
    else
    {
        if( v1[i] == v2[i])
            return compara(v1, v2, i - 1);
        else
            return false;
    }
}

int main()
{
    system("cls");
    int n=0;
    cout << "Ingrese el tamanio del vector: " << endl;
    cin >> n;
    cout<<"ingresa"<<n << "valores:" <<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> v1[i];
    }

        cout<<"ingresa"<<n << "valores:" <<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> v2[i];
    }

    if(compara( v1,v2,n))
        cout << "son iguales " << endl;
    else
        cout << "son diferentes " << endl;

    return 0;
}
