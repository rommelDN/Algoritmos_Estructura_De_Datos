#include <iostream>
using namespace std;
/*4. Encontrar la moda de los elementos de un arreglo.*/
template <typename T>
T Moda(T arr[], int n){
    T moda = arr[0];
    int maxCount = 0;
    for (int i =0 ; i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            moda = arr[i];
        }
        

    }
    return moda;
}

int main(){
    int arreglo[]={1,1,1,2,2,2,2,3};
    int n = sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"La moda del arreglo es_:"<<Moda(arreglo,n);
    return 0;
}