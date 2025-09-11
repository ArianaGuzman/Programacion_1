// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
int mostrar(int m)
{
    int cantidad=0, m200=200, m100=100, m50=50, m20=20, m10=10, m5=5, m2=2, m1=1;
    switch(m) 
    { 
        case 1: 
            if(m >= 200) 
            {
                int cantidad = m/200;
                cout <<cantidad<< "billete de 200Bs" << endl;
                m=m%200;
            }
        case 2:
            if(m >= 100) 
            {
                int cantidad = m/100;
                cout << cantidad << " billete de 100Bs" << endl;
                m= m%100;
            }
        case 3:
            if(m >= 50) 
            {
                int cantidad = m/50;
                cout << cantidad << " billete de 50Bs" << endl;
                m= m %50;
            }
        case 4:
            if(m >= 20)
             {
                int cantidad = m/20;
                cout << cantidad << " billete de 2 Bs" << endl;
                m= m % 20;
            }
        case 5:
            if(m >= 10) 
            {
                int cantidad= m/10;
                cout << cantidad << " billete(s) de 10 Bs" << endl;
                m= m %10;
            }
        case 6:
            if(m >= 5) 
            {
                int cantidad= m/5;
                cout << cantidad << " billete(s) de 5 Bs" << endl;
                m= m %5;
            }
        case 7:
            if(m >= 2) 
            {
                int cantidad= m/2;
                cout << cantidad << " moneda(s) de 2 Bs" << endl;
                m= m %2;
            }
        case 8:
            if(m >= 1) 
            {
                int cantidad= m/1;
                cout << cantidad << " moneda(s) de 1 Bs" << endl;
                m= m %1;
            }
    }
}
int main()
{
    int monto=0;
    cout<<"ingresa el monto de dinero en Bs: "<<endl;
    cin>>monto;
    mostrar(monto);
}

