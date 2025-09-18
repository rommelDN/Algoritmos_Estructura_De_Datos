#include <iostream>
using namespace std;
/*2. Encontrar el elemento menor en un arreglo.*/
template <typename T>
T Menor(T arr[],int n){
    T menor = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]<menor){
            menor=arr[i];
        }
    }
    return menor;
}
int main(){
    int arreglo[]={1,2,3,4,5,6,0};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"\nEl menor elemento es_: "<<Menor(arreglo,n);
    return 0;
}