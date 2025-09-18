#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

template<typename T>
class Notas{
    T num1,num2,num3,num4,num5;
public:
    Notas(T num1,T num2, T num3, T num4, T num5);
    ~Notas();
    T Promedio();
    T Mayor();
};

template<typename T>
Notas<T>::Notas(T num1,T num2, T num3, T num4, T num5){
    this->num1=num1;
    this->num2=num2;
    this->num3=num3;
    this->num4=num4;
    this->num5=num5;
}

template<typename T>
Notas<T>::~Notas(){}

template<typename T>
T Notas<T>::Promedio(){
    return (num1+num2+num3+num4+num5)/5.0;
}

template<typename T>
T Notas<T>::Mayor(){
    /**Para NO utilizar una cadena de IFs
     * Utilizamos: #include<algorithm> y #include<array>,
     * Para trabajar con listas.
     */
    std::array<T,5> valores = {num1, num2, num3, num4, num5};
    /**
     *  std::max_element(...) → devuelve iterador al mayor.
	 *  * → obtiene el valor (ejemplo: 9.0 en vez de puntero a 9.0).
     */
    return *std::max_element(valores.begin(), valores.end());
}

int main(){
    double n1,n2,n3,n4,n5;

    cout << "Ingrese 5 notas: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    Notas<double> notas(n1,n2,n3,n4,n5);

    cout << "Promedio: " << notas.Promedio() << endl;
    cout << "Nota mayor: " << notas.Mayor() << endl;

    return 0;
}