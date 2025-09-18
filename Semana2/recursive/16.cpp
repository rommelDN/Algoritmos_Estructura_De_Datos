#include <iostream>
using namespace std;

/*16. Multiplicación de los dígitos de un número usando recursividad*/

// Función recursiva que multiplica los dígitos de un número
int multiplicarDigitos(int n) {
    if (n == 0) return 1; // caso base: multiplicador neutro
    return (n % 10) * multiplicarDigitos(n / 10);
}

int main() {
    int numero;
    cout << "Ingresa un numero mayor a 3 digitos: ";
    cin >> numero;

    if(numero < 1000){
        cout << "Error: el numero debe tener al menos 4 digitos." << endl;
        return 1;
    }

    int resultado = multiplicarDigitos(numero);
    cout << "La multiplicacion de los digitos de " << numero << " es: " << resultado << endl;

    return 0;
}