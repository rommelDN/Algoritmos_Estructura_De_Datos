#include <iostream>
using namespace std;

template<typename T>

//T asigna el desarrollador
T suma(T a, T b) { // -> suma (int a , int b)
	return a + b;
}
//int suma(int a, int b) {
//	return a + b;
//}

template<typename T>
T resta(T a, T b) {
	return b - a;
}

template<typename T>
T division(T a, T b) {
	return b / a;
}


int main() {
	double x = 10.5, y = 20.75;

	//TEMPLATE SUMA
	cout<<"\n Entero_: " << suma<int>(x, y);
	cout<<"\n Flotante_: " << suma<float>(x, y);
	cout << "\n Double_: " << suma<double>(x, y);

	//TEMPLATE RESTA
	cout << "\n Resta_: " << resta<int>(x, y);
	//TEMPLATE DIVICION
	cout << "\n Resta_: " << resta<int>(x, y);
	return 0;
}