#pragma once

// Nodo: representa un nodo de una lista enlazada genérica
template <class T>
class Nodo
{
public:
    // valor: almacena la información del nodo
    T valor;
    // siguiente: puntero al siguiente nodo en la lista enlazada
    Nodo<T> *siguiente; // Creamos un puntero

public:
    // Constructor: inicializa el nodo con un valor y un puntero al siguiente nodo
    // Parámetro v: valor que se almacenará en el nodo
    // Parámetro sig: puntero al siguiente nodo (por defecto es NULL si no se especifica)
    Nodo(T v, Nodo<T> *sig = NULL)
    {
        valor = v;
        siguiente = sig;
    }
};
 