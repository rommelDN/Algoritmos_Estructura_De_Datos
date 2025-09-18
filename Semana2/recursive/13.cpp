#include <iostream>
using namespace std;

/*13. Número perfecto usando recursividad*/

// Función recursiva que suma los divisores de n hasta divisor
int sumaDivisores(int n, int divisor) {
    if(divisor == 0) return 0; // caso base
    if(n % divisor == 0)
        return divisor + sumaDivisores(n, divisor - 1); // sumar si es divisor
    else
        return sumaDivisores(n, divisor - 1); // continuar con siguiente
}

// Función que verifica si un número es perfecto
bool esPerfecto(int n) {
    // Excluimos el número mismo pasando n-1 como divisor máximo
    return sumaDivisores(n, n-1) == n;
}

int main() {
    int numero;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    if(numero <= 0){
        cout << "Error: el numero debe ser positivo." << endl;
        return 1;
    }

    if(esPerfecto(numero))
        cout << numero << " es un numero perfecto." << endl;
    else
        cout << numero << " NO es un numero perfecto." << endl;

    return 0;
}