#include <iostream>
using namespace std;

/*1. Punto, un par ordenado x, y.*/
template <typename T>
class Punto {
public:
    T x;
    T y;

public:
    Punto();
    Punto(T x, T y);
    void mostrar();
};

// Implementación fuera de la clase
template <typename T>
Punto<T>::Punto() {
    this->x = 0;
    this->y = 0;
}

template <typename T>
Punto<T>::Punto(T x, T y) {
    this->x = x;
    this->y = y;
}

template <typename T>
void Punto<T>::mostrar() {
    cout << "P(" << x << "," << y << ")" << endl;
}

int main() {
    Punto<int> objPunto(12, 4);
    cout << "\n Valor actual del Punto o Coordenada_: ";
    objPunto.mostrar();

    Punto<double> objPunto2(3.5, 7.8);
    cout << "\n Otro punto: ";
    objPunto2.mostrar();

    return 0;
}