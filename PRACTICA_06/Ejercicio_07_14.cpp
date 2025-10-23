#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void contar(string f, int t );
int main(){
    string frase;
    cout<<"ingresa la frase: "<<endl;
    getline(cin,frase);
    contar(frase,frase.size());
    return 0;
}

void contar(string f, int t )
{
    int ca=0, ce=0, ci=0, co=0, cu=0;
    for(int i = 0; i<t; i++){
            switch(f[i]){
                           case 'a': ca++;break;
                           case 'e': ce++;break;
                           case 'i': ci++;break;
                           case 'o': co++;break;
                           case 'u': cu++;break;
            }
    }
    cout<<"La cantidad de 'a' en la frase es: "<<ca<<endl;
    cout<<"La cantidad de 'e' en la frase es: "<<ce<<endl;
    cout<<"La cantidad de 'i' en la frase es: "<<ci<<endl;
    cout<<"La cantidad de 'o' en la frase es: "<<co<<endl;
    cout<<"La cantidad de 'u' en la frase es: "<<cu<<endl;
}
