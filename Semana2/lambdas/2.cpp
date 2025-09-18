#include <iostream>
using namespace std;
/*2. Ingresar 5 números de tipo entero
 y que permita retornar el menor número.*/
template <typename T> 
T Calcular(T arr[]){
    int menor = arr[0];
    auto lam = [&] (){
        for(int i = 0;i<5;i++){
            if(arr[i]<menor){
                menor = arr[i];
            }
        }
    };
    lam();
    return menor;
 }
int main(){
    int arr[5];
    cout<<"Ingresa 5 numeros enteros_: "<<endl;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    int menor = Calcular(arr);
    cout<<"El menor valor ingresado es_: "<<menor;
    return 0;
}