#include <iostream>
using namespace std;
/*1. Encontrar el elemento mayor en un arreglo.*/
template <typename T>
T Mayor(T arr[], int n){
    T mayor = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]> mayor){
            mayor= arr[i];
        }
    }
    return mayor;
}
int main(){
    int arreglo[]={11,2,3,4,5,6};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    cout<<"\nEl mayor de los elemnetos es_: "<<Mayor(arreglo,n);
    return 0;
}