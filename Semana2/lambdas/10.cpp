#include <iostream>
#include <algorithm> // para std::sort
using namespace std;

/*10. Ordene los números de manera ascendente utilizando una función lambda para definir el
criterio de ordenamiento.*/

template <typename T>
void Ordenar(T arr[], int n){
    // Lambda que define el criterio de ordenamiento (ascendente)
    auto criterio = [](T a, T b) {
        return a < b;
    };

    sort(arr, arr + n, criterio); // ordenar usando la lambda

    cout << "Números ordenados de manera ascendente: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int N = 5; // puedes cambiar la cantidad de números
    int arr[N];

    cout << "Ingresa " << N << " números: ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    Ordenar(arr, N);

    return 0;
}