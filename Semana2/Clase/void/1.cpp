#include<iostream>
using namespace std;

void binario(int n) {
if (n > 1) binario(n / 2);
cout << n % 2;
}
int main() {
int n;
cout << "Ingrese numero: ";
cin >> n;
cout << "Binario: "; binario(n);

return 0;
}