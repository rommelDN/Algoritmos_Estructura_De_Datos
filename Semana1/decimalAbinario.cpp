#include <iostream>
#include <string>
using namespace std;
/*Un número decimal se convierte a binario dividiendo sucesivamente entre 2 y guardando los residuos.*/
template <typename T>
string decimalABinario(T numero)
{
    if (numero == 0) return "0";

    string binario = "";
    while (numero > 0)
    {
        binario = to_string(numero % 2) + binario;
        numero /= 2;
    }
    return binario;
}

int main()
{
    int n;
    cout << "Ingrese un numero decimal: ";
    cin >> n;

    cout << "El numero en binario es: " << decimalABinario<int>(n) << endl;

    return 0;
}