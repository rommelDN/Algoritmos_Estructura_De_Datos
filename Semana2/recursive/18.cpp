#include <iostream>
#include <string>
using namespace std;

/*18. Suma de dígitos de una cadena numérica usando recursividad */

// Función recursiva que suma los dígitos de la cadena
int sumaDigitosCadena(const string &cadena, int index = 0) {
    if (index >= cadena.length()) return 0; // caso base
    int digito = cadena[index] - '0'; // convertir char a int
    return digito + sumaDigitosCadena(cadena, index + 1);
}

int main() {
    string numero;
    cout << "Ingresa una cadena numérica de más de 4 dígitos: ";
    cin >> numero;

    if (numero.length() <= 4) {
        cout << "Error: la cadena debe tener más de 4 dígitos." << endl;
        return 1;
    }

    // Verificar que todos los caracteres sean dígitos
    for (char c : numero) {
        if (!isdigit(c)) {
            cout << "Error: la cadena debe contener solo dígitos." << endl;
            return 1;
        }
    }

    int resultado = sumaDigitosCadena(numero);
    cout << "La suma de los dígitos de " << numero << " es: " << resultado << endl;

    return 0;
}