#pragma once
#include "Nodo.h"
#include "Punto.h"

// Clase genérica de lista enlazada simple que almacena elementos de tipo T
template <class T>
class Lista
{
public:
    Nodo<T> *inicio; // Puntero que apunta al primer nodo de la lista (inicio de la lista)
public:
    // Constructor: inicializa la lista vacía
    Lista() { inicio = NULL; };
    // Destructor: libera la memoria de todos los nodos para evitar fugas
    ~Lista();
    // Inserta un nuevo elemento al inicio de la lista
    void insertarInicio(T v);
    // Inserta un nuevo elemento al final de la lista (aún no implementado)
    void insertarFinal(T v);
    // Muestra en consola todos los elementos almacenados en la lista
    void mostrar();
};

template <class T>
Lista<T>::~Lista()
{
    Nodo<T> *temp;
    // Recorre la lista y elimina cada nodo para liberar memoria
    while (inicio != NULL)
    {
        temp = inicio;          // Guarda el nodo actual
        inicio = inicio->siguiente; // Avanza al siguiente nodo
        delete temp;            // Elimina el nodo actual
        temp = NULL;            // Evita punteros colgantes
    }
    // Finalmente, asegura que el puntero inicio quede en NULL
    delete inicio;
    inicio = NULL;
}

template <class T>
void Lista<T>::insertarInicio(T v)
{
    // Crea un nuevo nodo con el valor dado
    Nodo<T> *nodo = new Nodo<T>(v);
    // Si la lista está vacía, el nuevo nodo será el inicio
    if (inicio == NULL)
        inicio = nodo;
    else
    {
        // Si la lista no está vacía, el nuevo nodo apunta al nodo actual inicio
        nodo->siguiente = inicio;
    }
    // Actualiza inicio para que apunte al nuevo nodo insertado
    inicio = nodo;
    // Limpia el puntero temporal para evitar errores
    nodo = NULL;
}

template <class T>
void Lista<T>::insertarFinal(T v)
{
}

template <class T>
void Lista<T>::mostrar()
{
    Nodo<T> *nodo = inicio;
    cout << "L -> ";
    // Recorre la lista desde inicio hasta el final (nodo == NULL)
    do
    {
        // Convierte el valor almacenado en nodo a un puntero de tipo Punto para imprimirlo
        Punto *pto = (Punto *)(nodo->valor);
        cout << pto->toString();
        // Si no es el último nodo, imprime la flecha para indicar enlace
        if (nodo != NULL)
            cout << "-> ";
        // Avanza al siguiente nodo
        nodo = nodo->siguiente;
    } while (nodo != NULL);
    cout << endl;
}