#include <iostream> // Librería para entrada y salida estándar
using namespace std;

// Función plantilla para encontrar el mayor elemento en un arreglo
template<typename T>
T EncontrarMayor(T arr[], int n){
    T mayor = arr[0]; // Inicializamos el mayor con el primer elemento
    for(int i = 1; i < n; i++){ // Recorremos desde el segundo elemento
        if(arr[i] > mayor){ // Si encontramos un elemento mayor
            mayor = arr[i]; // Actualizamos el mayor
        }
    }
    return mayor; // Devolvemos el mayor encontrado
}

int main(){
    // Declaramos un arreglo de enteros
    int numeros[] = {3, 7, 2, 9, 5};
    // Calculamos la cantidad de elementos del arreglo
    int n = sizeof(numeros) / sizeof(numeros[0]);

    // Imprimimos el mayor elemento usando la función
    cout << "El mayor elemento es: " << EncontrarMayor(numeros, n) << endl;

    return 0; // Fin del programa
}