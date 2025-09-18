#include <iostream>
#include <vector>
using namespace std;

/*5. Ordenar un arreglo.*/
template <typename T>
vector<T> Ordenar(T arr[], int n){
    vector<T> newOrder(arr, arr+n);  // copiar arreglo al vector

    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (newOrder[j] < newOrder[minIndex]) {
                minIndex = j;
            }
        }
        // intercambiar
        T temp = newOrder[i];
        newOrder[i] = newOrder[minIndex];
        newOrder[minIndex] = temp;
    }

    return newOrder;
}
int main(){
    int arreglo[]={1,4,5,2,6,0,3};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);

    vector<int> resultado = Ordenar(arreglo,n);

    cout << "Lista resultante: ";
    for (int i = 0; i < resultado.size(); i++) {
    cout << resultado[i] << " ";
}
    cout << endl;
    return 0;
}