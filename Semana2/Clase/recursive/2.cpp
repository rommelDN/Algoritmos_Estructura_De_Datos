#include <iostream>
using namespace std;

int invertir(int num, int num1)
{
    num1 = (num1 * 10) + (num % 10);
    num /= 10;
    if (num > 0)
        return invertir(num, num1);
    else
        return num1; // que tomara el resultado
}
int main()
{
    int num;
    cout << "\n INgresar numero: ";
    cin >> num;
    cout << "\n El numero invertido es: " << invertir(num, 0);
    return 0;
}
