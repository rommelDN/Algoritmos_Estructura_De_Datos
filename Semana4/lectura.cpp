#include <iostream>
#include <fstream>  // Librería necesaria para manejar archivos
using namespace std;

int main() {
    // Nombre del archivo que vamos a crear
    string nombreArchivo = "datos.txt";

    // Crear un objeto de tipo ofstream para ESCRIBIR en el archivo
    ofstream archivoEscritura(nombreArchivo);

    // Verificar si el archivo se abrió correctamente
    if (!archivoEscritura) {
        cout << "Error al crear el archivo." << endl;
        return 1; // Salimos del programa con código de error
    }

    // Escribimos datos en el archivo
    archivoEscritura << "Hola, este es un archivo de prueba." << endl;
    archivoEscritura << "Puedes guardar varios datos aquí." << endl;
    archivoEscritura << "Número de ejemplo: " << 123 << endl;

    // Cerramos el archivo después de escribir
    archivoEscritura.close();
    cout << "Datos escritos correctamente en " << nombreArchivo << endl;

    // Ahora vamos a LEER el archivo
    ifstream archivoLectura(nombreArchivo);

    // Verificar si se abrió correctamente para lectura
    if (!archivoLectura) {
        cout << "Error al abrir el archivo para lectura." << endl;
        return 1;
    }

    // Variable para almacenar cada línea leída
    string linea;

    cout << "\nContenido del archivo:" << endl;
    // Leemos línea por línea hasta que ya no haya más
    while (getline(archivoLectura, linea)) {
        cout << linea << endl;
    }

    // Cerramos el archivo después de leer
    archivoLectura.close();

    return 0;
}