#include <iostream>
using namespace std;

template<typename T>

class Cuadrado {
	T lado;
public:
	Cuadrado(T lado);
	~Cuadrado();
	T Area();
	T Perimetro();

};
template<typename T >
Cuadrado<T>::Cuadrado(T lado) {
	this->lado = lado;
}
template<typename T>
Cuadrado<T>::~Cuadrado() {}
template<typename T >
T Cuadrado<T>::Area() {
	return lado * lado;
}
template<typename T >
T Cuadrado<T>::Perimetro() {
	return 4 * lado;

}

int main() {
	Cuadrado<double> objCuadrado(12.5);
	//AREA
	double rs = objCuadrado.Area();
	cout << "\nArea: " << rs;

	//PERIMETRO
	double rs2 = objCuadrado.Perimetro();
	cout << "\nPerimetro: " << rs2;
	return 0;
}