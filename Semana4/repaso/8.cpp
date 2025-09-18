#include <iostream>
using namespace std;

template <typename T>
void Calcular(T arr[]){
    int suma = 0;
    auto lam = [&](){
        for(int i=0;i<2;i++){
            suma+=arr[i];
        }
        cout<<"La suma de los dumeros es_: "<<suma;
        if(suma%3==0){
            cout<<" y es multiplo de 3";
        }else{
            cout<<" y no es multiplo de 3";
        }
    };
    lam();

}
int main(){
    int arr[2];
    cout<<"Ingresa 2 numeros_: "<<endl;
    for(int i=0;i<2;i++){
        cout<<"Ingresa Numero"<<i+1<<" _: ";
        cin>>arr[i];
    }
    Calcular(arr);
    return 0;
}