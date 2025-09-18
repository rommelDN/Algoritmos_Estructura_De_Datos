#include <iostream>
using namespace std;
/*8. Determinar si un elemento existe en un arreglo.*/
template <typename T>
int Existe(T arr[], int n, T e){
    for(int i = 0; i < n; i++){
        if(arr[i] == e){
            return i;
        }
    }
    return -1;
}
int main(){
    int arreglo[]={11,2,3,4,5,6};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int e;
    cout<<"\nIngrese el elemnto a buscar_: ";
    cin>>e;
    int pos = Existe(arreglo,n,e);
    if(pos == -1){
        cout<<"\nEl elemento: "<<e<<". No se encontro en el arreglo.";
    } else {
        cout<<"\nEl elemento: "<<e<<" existe . Se encuentra en la posicion_: "<<pos;
    }
    return 0;
}