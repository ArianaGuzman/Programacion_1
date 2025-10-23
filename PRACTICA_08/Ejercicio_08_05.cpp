#include <iostream>
using namespace std;


int suma(int i, int vi[])
{
    if (i == 0)
    {
        return vi[0];
    } 
    else 
    {
        return vi[i] + suma(i - 1, vi);
    }
}

int main()
{
    int n;
    int vi[1000];
    cout << "Ingrese el tamanio del vector: " << endl;
    cin >> n;
    cout<<"ingresa"<<n << "valores:" <<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> vi[i];
    }

    int s = suma(n - 1, vi);
    cout << "La suma de los valores del vector es: " << s << endl;

    return 0;
}
