#include <iostream>
#include <vector>
using namespace std;

/*2. Polígono el cual está definido por un conjunto de Puntos.*/
template <typename T>
class Punto {
public:
    T x;
    T y;

public:
    Punto();                 // constructor por defecto
    Punto(T x, T y);         // constructor con parámetros
    void mostrar();          // mostrar el punto
};

// Implementación de Punto
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
    cout << "(" << x << "," << y << ")";
}

/*2. Polígono, definido por un conjunto de puntos*/
template <typename T>
class Poligono {
private:
    vector<Punto<T> > puntos;   // conjunto dinámico de puntos

public:
    // Agregar un punto al polígono
    void agregarPunto(Punto<T> p);
    // Mostrar todos los puntos
    void mostrar();
    // Obtener cantidad de puntos
    int cantidadPuntos();
};

// Implementación de Polígono
template <typename T>
void Poligono<T>::agregarPunto(Punto<T> p) {
    puntos.push_back(p);
}

template <typename T>
void Poligono<T>::mostrar() {
    cout << "Poligono con " << puntos.size() << " puntos: ";
    for (int i = 0; i < puntos.size(); i++) {
        puntos[i].mostrar();
        if (i < puntos.size() - 1) cout << " - ";
    }
    cout << endl;
}

template <typename T>
int Poligono<T>::cantidadPuntos() {
    return puntos.size();
}

int main() {
    // Crear algunos puntos
    Punto<int> p1(0, 0);
    Punto<int> p2(4, 0);
    Punto<int> p3(4, 3);

    // Crear un polígono
    Poligono<int> poli;
    poli.agregarPunto(p1);
    poli.agregarPunto(p2);
    poli.agregarPunto(p3);

    // Mostrar polígono
    poli.mostrar();

    return 0;
}