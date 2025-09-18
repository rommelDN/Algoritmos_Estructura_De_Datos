#include <iostream> // Librería estándar para entrada y salida
using namespace std;

// Función plantilla que encuentra el menor elemento de un arreglo
template <typename T>
T EncontrarMenor(T arr[],int n){
    T menor = arr[0]; // Inicializamos el menor con el primer elemento
    for(int i=1; i<n;i++){ // Recorremos el arreglo desde el segundo elemento
        if(arr[i]<menor){ // Si encontramos un elemento más pequeño
            menor = arr[i]; // Actualizamos el menor
        }
    }
    return menor; // Retornamos el menor encontrado
}

int main(){
    // Declaramos un arreglo de enteros
    int numeros[]={2,23,1,4,64,4};
    // Calculamos el tamaño del arreglo
    int n = sizeof(numeros)/sizeof(numeros[0]);
    // Imprimimos el menor valor usando la función EncontrarMenor
    cout<<"El menor valor es: "<<EncontrarMenor(numeros,n)<<endl;
    return 0; // Fin del programa
}