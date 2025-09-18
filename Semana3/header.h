#pragma once
#include <iostream>
#include <functional>
typedef unsigned int uint;
template <typename T, T NADA = 0>
class Lista
{
    struct Nodo;
    typedef std::function<int(T, T)> Comp; // lambda de comparación
    Nodo *ini;
    Comp comparar; // lambda criterio de comparación
    uint lon;      // numero de elemento de la lista enlazada
public:
    Lista() : ini(nullptr), lon(0), comparar(Comp([](T a, T b) { return a - b; })) {} // Lista de inicialización por miembros.
    ~Lista();
    uint longitud();
    bool esVacia();
    void agregaInicial(T elem);
    void agregaPos(T elem, uint pos);
    void agregaFinal(T elem);
    void modificarInicial(T elem);
    void modificarPos(T elem, uint pos);
    void modificarFinal(T elem);
    void eliminaInicial();
    T obtenerInicial();
    T obtenerPos(uint pos);
    T obtenerFinal();
    T buscar(T elem);

    /**
     * Eliminar posición de una lista enlazada
     * Eliminar Final de una lista enlazada
     * Obtener el mayor elemento de una lista enlazada
     * Obtener el menor elemento de una lista enalada
     */
    void eliminarPos(uint pos);
    void eliminarFinal();
    void obtenerMayor();
    void obtenerMenor();
    void imprimirLista();
    
};
template <typename T, T NADA>
struct Lista<T, NADA>::Nodo
{
    T elem;    // valor del nodo
    Nodo *sig; // apunta al siguiente nodo
    Nodo(T elem = NADA, Nodo *sig = nullptr) : elem(elem), sig(sig) {}
};
template <typename T, T NADA>
Lista<T, NADA>::~Lista()
{
    Nodo *aux = ini; // copia la información al nodo ini
    while (aux != nullptr)
    {
        ini = ini->sig;
        delete aux;
        aux = ini;
    }
}
template <typename T, T NADA>
uint Lista<T, NADA>::longitud()
{
    return lon;
}
template <typename T, T NADA>
bool Lista<T, NADA>::esVacia()
{
    return lon == 0;
}
template <typename T, T NADA>
void Lista<T, NADA>::agregaInicial(T elem)
{
    Nodo *nuevo = new Nodo(elem, ini); // Constructor , recibe el elemento
    // Ingresa por teclado, y el nodo de ini
    if (nuevo != nullptr)
    {
        ini = nuevo; // ini debe ser el primer nodo
        lon++;       // Incrementa el tamaño de la lista enlazada
    }
}
template <typename T, T NADA>
void Lista<T, NADA>::agregaPos(T elem, uint pos)
{
    if (pos > lon)
        return; //
    if (pos == 0)
    {
        agregaInicial(elem);
        return;
    }
    else
    {
        Nodo *aux = ini; // aux esta tomado direccion de memoria ini
        for (int i = 1; i < pos; i++)
        {
            aux = aux->sig;
        }
        Nodo *nuevo = new Nodo(elem, aux->sig);
        if (nuevo != nullptr)
        {
            aux->sig = nuevo;
            lon++;
        }
    }
}

template <typename T, T NADA>
void Lista<T, NADA>::agregaFinal(T elem)
{
    agregaPos(elem, lon);
}

template <typename T, T NADA>
void Lista<T, NADA>::modificarInicial(T elem)
{
    if (lon > 0)
        ini->elem = elem;
}

template <typename T, T NADA>
void Lista<T, NADA>::eliminaInicial()
{
    if (lon > 0)
    {
        Nodo *aux = ini; // en aux almaceno dirrecion del primer nodo
        ini = ini->sig;  // ini se convierte en el segundo nodo
        delete aux;      // el aux que tiene la informacion del primer nodo, se destruye
        lon--;           // reducimos el tamaño de la lista
    }
}

//FUNCION ELIMINAR POS
template <typename T, T NADA>
void Lista<T, NADA>::eliminarPos(uint pos) {
    if (pos >= lon) return; // posición inválida

    if (pos == 0) {
        eliminaInicial();
        return;
    }

    Nodo* aux = ini;
    for (uint i = 1; i < pos; i++) {
        aux = aux->sig; // llego al nodo anterior al que quiero borrar
    }

    Nodo* borrar = aux->sig;     // este es el nodo a eliminar
    aux->sig = borrar->sig;      // salto el nodo
    delete borrar;               // libero memoria
    lon--;                       // actualizo tamaño
}

template <typename T, T NADA>
void Lista<T,NADA>:: eliminarFinal()
{
    eliminarPos(lon - 1);
}
template <typename T, T NADA>
void Lista<T, NADA>::modificarPos(T elem, uint pos)
{
    if (pos >= 0 && pos < lon)
    {
        Nodo *aux = ini;
        for (int i = 1; i < pos; i++)
        {
            aux = aux->sig;
        }
        aux->elem = elem;
    }
}
template <typename T, T NADA>
void Lista<T, NADA>::modificarFinal(T elem)
{
    modificarPos(elem, lon - 1);
}

template <typename T, T NADA>
T Lista<T, NADA>::obtenerInicial()
{
    return obtenerPos(0); // return ini->elem;
}

template <typename T, T NADA>
T Lista<T, NADA>::obtenerPos(uint pos)
{
    if (pos >= 0 && pos < lon)
    {
        Nodo *aux = ini;
        for (int i = 1; i < pos; i++)
        {
            aux = aux->sig;
        }
        return aux->elem;
    }
    else
    {
        return NADA;
    }
}
template <typename T, T NADA>
T Lista<T, NADA>::obtenerFinal()
{
    return obtenerPos(lon - 1);
}
template <typename T, T NADA>
T Lista<T, NADA>::buscar(T elem)
{
    Nodo *aux = ini;
    while (aux != nullptr)
    {
        if (comparar(aux->elem, elem) == 0)
        { // si es igual a cero, ENCONTRO EL ELEMENTO
            return aux->elem;
        }
        aux = aux->sig; // sino, continua al siguiente nodo, para seguir buscando
    }
    return NADA; // no encontrado
}

template <typename T, T NADA>
void Lista<T,NADA>::obtenerMayor()
{
    if (ini == nullptr) {
        std::cout << "Lista vacia" << std::endl;
        return;
    }
    Nodo* aux = ini;
    T mayor = aux->elem;
    while (aux != nullptr)
    {
        if (aux->elem > mayor) {
            mayor = aux->elem;
        }
        aux = aux->sig;
    }
    std::cout << "Mayor: " << mayor << std::endl;
}
template <typename T, T NADA>
void Lista<T,NADA>::obtenerMenor()
{
    if (ini == nullptr) {
        std::cout << "Lista vacia" << std::endl;
        return;
    }
    Nodo* aux = ini;
    T menor = aux->elem;
    while (aux != nullptr)
    {
        if (aux->elem < menor) {
            menor = aux->elem;
        }
        aux = aux->sig;
    }
    std::cout << "Menor: " << menor << std::endl;
}

template <typename T, T NADA>
void Lista<T, NADA>::imprimirLista()
{
    Nodo* aux = ini;
    while (aux != nullptr)
    {
        std::cout << aux->elem << std::endl;
        aux = aux->sig;
    }
}