#include <iostream>
using namespace std;

/*6. Ingresar 3 números de tipo 
float donde permita indicar 
si los tres números son iguales o no.*/
template <typename T>
void Verificar(T arr[]){
    auto lam = [&]() {
        (arr[0] == arr[1] && arr[1] == arr[2]) ?
            cout << "Los tres números son iguales." << endl
            : cout << "Los tres números NO son iguales." << endl;
    };

    lam(); 
}

int main(){
    float arr[3];
    cout << "Ingresa 3 valores_: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];

    Verificar(arr);

    return 0;
}