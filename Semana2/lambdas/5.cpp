#include <iostream>
#include <cctype> // Para isalpha e isdigit
using namespace std;

/*5. Ingresar 1 caracter de tipo char 
donde permita verificar si es un número o letra.*/

template <typename T>
void Verificar(T item){
    // Lambda que verifica si es letra o número
    auto lam = [](T a){
        if(isalpha(a)){
            cout << a << " es una letra." << endl;
        } else if(isdigit(a)){
            cout << a << " es un número." << endl;
        } else {
            cout << a << " no es letra ni número." << endl;
        }
    };

    lam(item); // Ejecutar la lambda con el carácter
}

int main(){
    char item;
    cout << "Ingresa 1 caracter_: ";
    cin >> item;
    Verificar(item);
    return 0;
}