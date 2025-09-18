#include <iostream>
using namespace std;

/*9. Ingresar número de 4 dígitos enteros que permita indicar si los dos dígitos enteros de la derecha
es un número mayor 50, y los dos números de la izquierda verificar si es impar.*/

template <typename T>
void Verificar(T numero) {
    // Lambda que verifica las condiciones
    auto lam = [=]() {
        int derecha = numero % 100;   // últimos 2 dígitos
        int izquierda = numero / 100; // primeros 2 dígitos

        if(derecha > 50)
            cout << "Los dos digitos de la derecha (" << derecha << ") son mayores que 50." << endl;
        else
            cout << "Los dos digitos de la derecha (" << derecha << ") NO son mayores que 50." << endl;

        if(izquierda % 2 != 0)
            cout << "Los dos digitos de la izquierda (" << izquierda << ") forman un numero impar." << endl;
        else
            cout << "Los dos digitos de la izquierda (" << izquierda << ") NO forman un numero impar." << endl;
    };

    lam(); // ejecutar la lambda
}

int main() {
    int numero;
    cout << "Ingresa un numero entero de 4 digitos: ";
    cin >> numero;

    if(numero < 1000 || numero > 9999){
        cout << "Error: El numero debe tener 4 digitos." << endl;
        return 1;
    }

    Verificar(numero);

    return 0;
}