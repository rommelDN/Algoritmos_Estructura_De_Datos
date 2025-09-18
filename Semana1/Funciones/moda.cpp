#include <iostream>
using namespace std;
/*En estadística, la moda es el valor
que aparece con mayor frecuencia
en un conjunto de datos.
•	Puede haber una sola moda (unimodal).
•	Varias modas si hay dos o más valores que se repiten
 con la misma máxima frecuencia (bimodal, multimodal).
•	Si todos los valores aparecen con la misma
frecuencia, se dice que no existe moda.
*/
// Función plantilla para hallar la moda en un arreglo
template <typename T>
T Moda(T arr[], int n)
{
    int maxFrecuencia = 0; // Guardará la frecuencia más alta encontrada
    T moda = arr[0];       // Inicializamos la moda con el primer elemento

    // Recorremos el arreglo
    for (int i = 0; i < n; i++)
    {
        int count = 0; // Contador de frecuencia para arr[i]

        // Contamos cuántas veces aparece arr[i]
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        // Si encontramos una frecuencia mayor, actualizamos la moda
        if (count > maxFrecuencia)
        {
            maxFrecuencia = count;
            moda = arr[i];
        }
    }

    return moda; // Retornamos el valor de la moda
}

int main()
{
    int numeros[] = {11, 11, 11, 11, 23, 23, 22, 22, 1, 2, 3};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    cout << "La moda del arreglo es: " << Moda(numeros, n) << endl;
    return 0;
}