// Materia: Programación I, Paralelo 4
// Autor: Ariana Guzman Salazar
// Fecha creación: 10/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int verificar(int a,int m)
{
    int dias;
    switch (m) 
    {
    case 1: 
        dias=31;
        break;  
    case 3: 
        dias=31;
        break;     
    case 4: 
        dias=30;
        break;    
    case 5: 
        dias=31;
        break;    
    case 6:
        dias=30;
        break;
    case 7:         
        dias=31;
        break;
    case 8: 
        dias=31;
        break;
    case 9:         
        dias=30;
        break;
    case 10: 
        dias=31;
        break;
    case 11:         
        dias=30;
        break;
    case 12: 
        dias=31;
        break;
    case 2:
        if((a%400==0)||(a%4==0)&&(a%100!=0))
            dias=29;
        else
            dias=28;
        break;

    default: 
    cout<<" Mes invalido "<<endl; 
    }
    cout<<"el mes: "<<m<<" del año "<<a<<"tiene: "<<dias<<" dias"<<endl;
    return dias;  
}
int main ()
{
    system("chcp 65001");
    system("cls");
    int año=0, mes=0;
    cout<<"ingrese un año: "<<endl;
    cin>>año;
    cout<<"ingrese un mes: "<<endl;
    cin>>mes;
    verificar(año,mes);
}
