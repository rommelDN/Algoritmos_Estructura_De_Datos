#include <iostream>
using namespace std;

/*14. Verificar si un número es primo usando recursividad*/

// Función recursiva que verifica si n es divisible por algún número desde i hasta n-1
bool esPrimoRec(int n, int i = 2) {
    if (n <= 1) return false;      // 0 y 1 no son primos
    if (i * i > n) return true;    // no se encontraron divisores, es primo
    if (n % i == 0) return false;  // divisible, no es primo
    return esPrimoRec(n, i + 1);   // probar siguiente divisor
}

int main() {
    int numero;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Error: el numero debe ser positivo." << endl;
        return 1;
    }

    if (esPrimoRec(numero))
        cout << numero << " es un numero primo." << endl;
    else
        cout << numero << " NO es un numero primo." << endl;

    return 0;
}