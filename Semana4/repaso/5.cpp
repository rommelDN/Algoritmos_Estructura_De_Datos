#include <iostream>
using namespace std;

template <typename T>
void Calcular(T a){
    auto lam = [=](){
        if(isalpha(a)){
            cout<<"El caracter es una Letra";
        }else if (isdigit(a))
        {
            cout<<"El caracter es una Numero";
        }
        else
        {
            cout<<"No es letra ni numero";
        }     
    };
    lam();
}

int main(){
    char letra;
    cout<<"Ingresa un caracter cualquiera_: "<<endl;
    cin>>letra;
    Calcular(letra);
    return 0;
}