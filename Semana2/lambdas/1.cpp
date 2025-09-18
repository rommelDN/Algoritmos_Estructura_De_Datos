#include <iostream>
#include <cmath>
using namespace std;

/*1. Ingresar 3 números de tipo 
double donde permita calcular la raíz 
cuadrada de cada uno y debe
retornar la sumatoria de los tres resultados.*/

template <typename T>
T Calcular(T arr[], int n) {
    T suma = 0;
    // Lambda para calcular raíz cuadrada y mostrar cada resultado
    auto lam = [&]() {
        for (int i = 0; i < n; i++) {
            T raiz = sqrt(arr[i]);
            cout << "Raíz cuadrada de " << arr[i] << " es: " << raiz << endl;
            suma += raiz;
        }
    };
    lam(); // llamar la lambda
    return suma;
}

int main() {
    double arr[3];
    cout << "Ingresa 3 numeros: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];

    double total = Calcular(arr, 3);
    cout << "La sumatoria de las raíces cuadradas es: " << total << endl;

    return 0;
}