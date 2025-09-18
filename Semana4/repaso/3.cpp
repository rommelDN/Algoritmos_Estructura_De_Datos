#include <iostream>
using namespace std;


template <typename T>
void Calcular(T arr[], int n){
    int suma = 0;
    auto lam = [&](){
        for(int i=0;i<n;i++){
            suma+=arr[i];
        }
        if(suma%3==0){
            cout<<"La suma de los numeros es multiplo de 3";
            
        }else{
            cout<<"La suma no es multiplo de 3";
        };
    
    };
    lam();
};
int main(){
    int arr[3];
    cout<<"Ingresa 3 numeros_: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Numero_:";
        cin>>arr[i];
    };
    Calcular(arr,3);

    return 0;
}