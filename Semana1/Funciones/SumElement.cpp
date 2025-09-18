#include <iostream>
using namespace std;

// Función plantilla que suma todos los elementos de un arreglo
template <typename T>
T SumarElementos(T arr[], int n){
    T suma = arr[0]; // Inicializamos la suma con el primer elemento
    for(int i = 1; i < n; i++){ // Recorremos desde el segundo elemento
        suma += arr[i]; // Acumulamos el valor
    }
    return suma; // Retornamos la suma total
}

int main(){
    int numeros[]={7,3,2}; // Declaramos un arreglo de enteros
    int n = sizeof(numeros) / sizeof(numeros[0]); // Calculamos el tamaño
    cout << "La suma de Elementos es: " << SumarElementos(numeros, n) << endl;
    return 0; // Fin del programa
}