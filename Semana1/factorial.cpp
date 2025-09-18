#include <iostream>
using namespace std;

template <typename T>
/*T factorial(T a)
{
    if(a==0)return 1;
    T resultado = 1;
    for (T i = 1 ; i<=a;i++){
        resultado*=i;
    }
    return resultado;
}*/
T factorial(T a)
{
    if(a==0)return 1;
    return a * factorial(a-1);//Recursividad
}

int main()
{
    double x;
    cout << "\n Ingresa un valor para hallar su factorial_: ";
    cin >> x;
    cout << "\n El factorial del numero es: " << factorial<int>(x)<<endl;
    return 0;
}