#include<iostream>

using namespace std;

template<typename T>
class Rectangulo{
    T base;
    T altura;
public:
Rectangulo(T base, T altura);
~Rectangulo();
T Area();
};
template<typename T>
Rectangulo<T>::Rectangulo(T base, T altura){
    this->base=base;
    this->altura=altura;
}
template<typename T>
Rectangulo<T>::~Rectangulo(){}
template<typename T>
T Rectangulo<T>::Area(){
    return base * altura;
}
int main(){
    double b,h;
    cout<<"Ingrese el valor de la base: ";
    cin>>b;
    cout<<"Ingrese el valor de la altura: ";
    cin>>h;
    Rectangulo<double>calc(b,h);
    cout<<"El resultado del Area del Rectangulo es: "<<calc.Area()<<endl;
    return 0;
}