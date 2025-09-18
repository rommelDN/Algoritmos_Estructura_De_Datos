#include <iostream>
using namespace std;

template <typename T>
T Menor(T arr[], int n){
    // Aquí va la lógica de la función
    double menor = arr[0];
    //pasar los datos directamente como referencia
    auto lam = [&](){
        for(int i=0;i<n;i++){
            if(arr[i]<menor){
                menor = arr[i];
            }
        }
    };
    lam();
    return menor;
}
int main(){
    double arr[5];
    cout<<"Ingrese 5 numeros_: ";
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    };
    double menor = Menor(arr,5);
    cout<<"El menor valor que se ingreso es_: "<<menor<<endl;
    return 0;
}