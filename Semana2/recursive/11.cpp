#include <iostream>
using namespace std;

/*11. Mostrar números primos usando una función recursiva.*/

// Función recursiva que verifica si un número n es primo
bool esPrimo(int n, int i = 2) {
    if (n <= 2) 
        return (n == 2); // 2 es primo, 1 o menores no
    if (n % i == 0) 
        return false;   // divisible, no es primo
    if (i * i > n) 
        return true;    // no tiene divisores, es primo
    return esPrimo(n, i + 1); // siguiente divisor
}

// Función recursiva que imprime primos hasta n
void mostrarPrimos(int n, int actual = 2) {
    if (actual > n) 
        return; // caso base
    if (esPrimo(actual)) 
        cout << actual << " ";
    mostrarPrimos(n, actual + 1); // siguiente número
}

int main() {
    int numero;

    cout << "Ingresa un numero positivo menor a 1000: ";
    cin >> numero;

    if(numero <= 0 || numero >= 1000) {
        cout << "Error: el numero debe ser positivo y menor a 1000." << endl;
        return 1;
    }

    cout << "Numeros primos hasta " << numero << ": ";
    mostrarPrimos(numero);
    cout << endl;

    return 0;
}