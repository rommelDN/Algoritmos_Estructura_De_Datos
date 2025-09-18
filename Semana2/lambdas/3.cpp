#include <iostream>
using namespace std;
/*3. Ingresar 3 números de tipo
entero donde permita verificar
si la suma de los tres números
es un número múltiplo de 3.*/
template <typename T>
void Calcular(T arr[])
{
    int suma = 0;
    auto lam = [&]() {
        for (int i = 0; i < 3; i++)
        {
            suma += arr[i];
        }
        cout << "La suma de los valores es_: " << suma << endl;
        if (suma % 3 == 0)
            cout << "La suma es múltiplo de 3" << endl;
        else
            cout << "La suma NO es múltiplo de 3" << endl;
    };
    lam();
}
int main()
{
    int arr[3];
    cout << "Ingrese 3 numeros enteros_: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];
    Calcular(arr);
    return 0;
}
