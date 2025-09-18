#include <iostream>
using namespace std;

template <typename T>
void Calcular(T num){
    auto lam = [=](){
        string numStr = to_string(num);
        // Obtener los dos últimos dígitos (derecha)
        int derecha = stoi(numStr.substr(2, 2));
        // Obtener los dos primeros dígitos (izquierda)
        int izquierda = stoi(numStr.substr(0, 2));

        // Verificar si los dos dígitos de la derecha son mayores a 50
        if(derecha > 50){
            cout << "Los dos digitos de la derecha (" << derecha << ") son mayores a 50." << endl;
        } else {
            cout << "Los dos digitos de la derecha (" << derecha << ") no son mayores a 50." << endl;
        }

        // Verificar si los dos dígitos de la izquierda forman un número impar
        if(izquierda % 2 != 0){
            cout << "Los dos digitos de la izquierda (" << izquierda << ") forman un numero impar." << endl;
        } else {
            cout << "Los dos digitos de la izquierda (" << izquierda << ") forman un numero par." << endl;
        }
    };
    lam();
}
int main(){
    int num;
    cout<<"Ingresa un numero de 4 digitos_: ";
    cin>>num;
    if(num>=1000&&num<=9999){
        Calcular(num);
    }else{
        cout<<"Necesitas ingresar un numero de 4 digitos";
    }

    return 0;
}