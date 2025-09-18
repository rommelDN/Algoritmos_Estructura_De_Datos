#include <iostream>
using namespace std;

/*7. Ingresar número de 5 dígitos 
entero que permita verificar si el dígito
del centro es un número
par, por ejemplo: 34267, el 2 es un 
número par.*/
template <typename T>
void Verificar(T arr[]){
    auto lam = [=]() {
        if(arr[2] % 2 == 0) {
            cout << "El numero_: " << arr[2] << " es un numero par" << endl;
        } else {
            cout << "El numero_: " << arr[2] << " no es un numero par" << endl;
        }
    };

    lam();
}

int main(){
    const int N = 5;
    int arr[N]; // Cambié a int porque % no funciona con float
    cout << "Ingresa " << N << " valores_: " << endl;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    Verificar(arr);

    return 0;
}