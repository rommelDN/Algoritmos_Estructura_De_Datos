#include <iostream>
using namespace std;
/*3. Sumar todos los elementos de un arreglo.*/
template <typename T>
T Sumar(T arr[], int n){
    T suma=0;
    for(int i=0;i<n;i++){
        suma = arr[i] + suma;
    }
    return suma;
}
int main(){
    int arreglo[]={0,1,0,3,3,4};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"La suma de los elementos es_: "<<Sumar(arreglo,n);
    return 0;
}