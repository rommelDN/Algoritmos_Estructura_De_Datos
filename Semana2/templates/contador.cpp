#include <iostream>
using namespace std;
/*9. Calcular cuántas veces se repite un elemento X en un arreglo.*/
template <typename T>
int Contador(T arr[], int n,int e){
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == e){
            contador++;
        }
    }
    return contador;
}

int main(){
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int e;
    cout << "Ingrese el elemento a buscar: ";
    cin >> e;
    int resultado = Contador(arr, n, e);
    cout << "El elemento " << e << " se repite " << resultado << " veces en el arreglo." << endl;
    return 0;
}