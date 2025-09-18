#include <iostream>
using namespace std;

template <typename T>
void Calcular(T arr[], int n)
{
    auto lam = [=]()
    {
        bool iguales = true;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]!=arr[0]){
                iguales = false;
                break;
            }
        }
        if (iguales)
        {
            cout<<"Todos los numeros ingresados son iguales";
        }
        else{
            cout<<"No todos los numeros son iguales";
        }
        
    };
    lam();
}

int main()
{
    float arr[3];
    cout << "Ingresa 3 numeros_: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa un Numero_: ";
        cin >> arr[i];
    };
    Calcular(arr, 3);
    return 0;
}
 