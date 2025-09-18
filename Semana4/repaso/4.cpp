#include <iostream>
using namespace std;

template <typename T>
void Calcular(T arr[], int n){
    T mayor = arr[0];
    auto lam = [&](){
        for(int i=0;i<n;i++){
            if(arr[i]>mayor){
                mayor = arr[i];
            }
        }
    };
    lam();
    cout<<"El mayor valor ingresado es_: "<<mayor;
};
int main(){
    double arr[3];
    cout<<"Ingresa 3 numeros_: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Numero "<<i<<"_: ";
        cin>>arr[i];
    }
    Calcular(arr,3);

    return 0;
}