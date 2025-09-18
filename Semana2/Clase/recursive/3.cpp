#include <iostream>
using namespace std;

int factorial(int n) {
if (n == 0) {
return 1;
}
else
return n * factorial(n - 1);
}
int main() {
int n;
int resultado;
cout << "Ingresar el numero__: ";
cin >> n;
resultado = factorial(n);
cout << "El factorial de" << n << " es: " << resultado;
return 0;
}