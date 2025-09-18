#include <iostream>
using namespace std;

template <typename T>
class Calculadora
{
    T num1;
    T num2;
public:
    Calculadora(T num1, T num2);
    ~Calculadora();
    T Resta();
    T Suma();
    T Division();
    T Multiplicacion();
};
template<typename T>
Calculadora<T>::Calculadora(T num1,T num2){
    this->num1 = num1;
    this->num2 = num2;
}
template<typename T>
Calculadora<T>::~Calculadora(){}
template<typename T>
T Calculadora<T>::Suma(){
    return num1 + num2;
}
template<typename T>
T Calculadora<T>::Resta(){
    return num1 - num2;
}
template<typename T>
T Calculadora<T>::Multiplicacion(){
    return num1 * num2;
}
template<typename T>
T Calculadora<T>::Division(){
    if (num2 == 0) {
        cout << "Error: No se puede dividir entre 0" << endl;
        return 0;
    }
    return num1 / num2;
}
int main()
{
    int opcion;
    double a, b;
    cout<<"Ingrese dos numeros: ";
    cin>>a>>b;
    Calculadora<double>calc(a,b);
    cout<<"\nSeleccione la operación:" <<endl;
    cout<<"1: Suma"<<endl;
    cout<<"2: Resta"<<endl;
    cout<<"3: Multiplicación"<<endl;
    cout<<"4: Divición"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Resultado "<< calc.Suma()<<endl;
        break;
    case 2:
        cout << "Resultado: " << calc.Resta() << endl;
        break;
    case 3:
        cout << "Resultado: " << calc.Multiplicacion() << endl;
        break;
    case 4:
        cout << "Resultado: " << calc.Division() << endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }
    return 0;
}