#include <iostream>
using namespace std;

/*17. Suma de dígitos pares de un número usando recursividad*/

// Función recursiva para sumar los dígitos pares
int sumaDigitosPares(int n) {
    if (n == 0) return 0; // caso base
    int digito = n % 10;
    if (digito % 2 == 0)
        return digito + sumaDigitosPares(n / 10);
    else
        return sumaDigitosPares(n / 10);
}

int main() {
    int numero;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    if(numero <= 0){
        cout << "Error: el numero debe ser positivo." << endl;
        return 1;
    }

    int resultado = sumaDigitosPares(numero);
    cout << "La suma de los digitos pares de " << numero << " es: " << resultado << endl;

    return 0;
}