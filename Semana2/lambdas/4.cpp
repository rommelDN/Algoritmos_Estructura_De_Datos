#include <iostream>
using namespace std;

template <typename T>
void Calcular(T arr[]){
    int menor = arr[0];
    auto lam = [&](){
        for(int i=0;i<3;i++){
            if(arr[i]<menor){
                menor= arr[i];
            }
        }
        cout<<"El menor numero ingresado es_: "<<menor;
    };
    lam();
}
int main(){
    int arr[3];
    cout << "Ingrese 3 numeros enteros_: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2];
    Calcular(arr);
    return 0;
}