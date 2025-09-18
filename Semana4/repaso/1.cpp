#include <iostream>
#include <cmath>
using namespace std;

/*1. Ingresar 3 números de tipo 
double donde permita calcular la raíz 
cuadrada de cada uno y debe
retornar la sumatoria de los tres resultados.*/

/*
FUNCION LAMBDA:
auto lam = [capturas](parámetros) -> tipo_retorno {
    // cuerpo de la función
}
•	[ ] → no captura nada.
•	[=] → captura todas las variables externas por valor. Hace una copia y no afecta al original
•	[&] → captura todas las variables externas por referencia. Accede directame a la variable y la modifica
•	[&x, y] → captura x por referencia y y por valor.
*/

template <typename T>
T Calcular(T arr[], int n){
    T suma = 0;
    auto lam = [&](){
        for(int i=0;i<n;i++){
            T raiz = sqrt(arr[i]);
            cout<<"La raiz cuadrada de "<<arr[i]<< " es_: "<<raiz<<endl;
            suma += raiz;
        };
    };
    lam();
    return suma;
};
int main(){
    double arr[3];
    cout<<"Ingresa 3 numeros_: "<<endl;
    for(int i =0;i<3;i++){
        cin>>arr[i];
    };
    double total = Calcular(arr,3);
    cout<<"La sumatoria de las raices cuadradas es_: "<<total<<endl;
    return 0;
}