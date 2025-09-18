#pragma once
#include <string>
#include <sstream>

using namespace std;

// Clase Punto: representa un punto en el espacio 3D con coordenadas x, y, z
class Punto
{
    // Atributos privados que almacenan las coordenadas del punto en el espacio 3D
    int x, y, z;

public:
    // Constructor que inicializa las coordenadas x, y, z del punto.
    // Los parámetros tienen valores por defecto de 0, por lo que si no se especifican,
    // el punto se ubicará en el origen (0, 0, 0).
    Punto(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {};

    // Método que devuelve una representación en cadena del punto en formato "p(x, y, z) "
    string toString()
    {
        // Se crea un objeto ostringstream para construir la cadena de texto
        ostringstream ss;
        // Se añade el texto inicial "p("
        ss << "p(";
        // Se añade el valor de x
        ss << x;
        // Se añade una coma y espacio
        ss << ", ";
        // Se añade el valor de y
        ss << y;
        // Se añade una coma y espacio
        ss << ", ";
        // Se añade el valor de z
        ss << z;
        // Se cierra el paréntesis y se añade un espacio final
        ss << ") ";
        // Se retorna la cadena construida
        return (ss.str());
    }
};