#include <iostream>
using namespace std;

template <typename T>
void Calcular(T num){
    auto lam = [=](){
        // Convertimos el número a string para acceder fácilmente a sus dígitos
        string numStr = to_string(num);
        // El dígito central en un número de 5 cifras está en la posición 2 (empezando desde 0)
        char centralChar = numStr[2];
        // Convertimos ese carácter a número entero
        int centralDigit = centralChar - '0';
        // Mostramos el dígito central
        cout << centralDigit;
        // Verificamos si es par o impar
        if (centralDigit % 2 == 0) {
            cout << " y es PAR" << endl;
        } else {
            cout << " y es IMPAR" << endl;
        }
    };
    lam();
}
int main(){
    int number;
    cout<<"Ingresar un numero de 5 digitos_: ";
    cin>>number;
    if(number>=10000&&number<=99999){
        cout<<"El digito del centro es: ";
        Calcular(number);
    }else{
        cout<<"El numero no tiene 5 digitos"<<endl;
    }
    return 0;
}