#include <iostream>
using namespace std;
/*15.Desarrollar un algoritmo con recursividad, que permita mostrar lo números Fibonacci de
acuerdo a un número ingresado por teclado Ejemplo, 6 = 1 1 2 3 5 8 13 21*/

// Función recursiva que calcula Fibonacci (1, 1, 2, 3...)
int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Función recursiva para mostrar los primeros n términos
void mostrarFibonacci(int n, int actual = 1) {
    if (actual > n) return;
    cout << fibonacci(actual) << " ";
    mostrarFibonacci(n, actual + 1);
}

int main() {
    int n;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: el numero debe ser positivo." << endl;
        return 1;
    }

    cout << "Serie Fibonacci: ";
    mostrarFibonacci(n);
    cout << endl;

    return 0;
}