#include <iostream>
using namespace std;

/* 12.Conversión de decimal a hexadecimal usando recursividad */

// Función recursiva para imprimir el número en hexadecimal
void decimalAHex(int numero) {
    if (numero == 0) return; // caso base

    int residuo = numero % 16;
    decimalAHex(numero / 16); // llamada recursiva para el siguiente dígito

    // Convertir el residuo a carácter hexadecimal
    if (residuo < 10)
        cout << residuo;
    else
        cout << char('A' + (residuo - 10));
}

int main() {
    int numero;
    cout << "Ingresa un numero decimal positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: el numero debe ser positivo." << endl;
        return 1;
    }

    cout << "El numero " << numero << " en hexadecimal es: ";
    if (numero == 0) cout << "0"; // caso especial para cero
    else decimalAHex(numero);
    cout << endl;

    return 0;
}