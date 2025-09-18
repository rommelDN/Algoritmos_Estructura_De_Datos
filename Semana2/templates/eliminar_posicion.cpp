#include <iostream>
using namespace std;
/*6. Eliminar el elemento en una posición de un arreglo.*/

template <typename T>
int Eliminar(T arr[], int n, int pos) {
    for (int i = pos; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main(){
    int arreglo[]={1,1,1,2,2,2,2,3};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);
    int pos;
    cout << "Ingrese la posicion a eliminar: ";
    cin >> pos;
    n = Eliminar(arreglo, n, pos);
    cout << "Nueva lista sin el elemento_: ";
    for (int i = 0; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}

