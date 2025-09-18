#include <fstream>
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;
int main()
{
    Lista<Punto *> pLista;
    pLista.insertarInicio(new Punto(8, 1, 0));
    pLista.insertarFinal(new Punto(8, 0, 0));
    pLista.insertarFinal(new Punto(8, 0, 0));
    pLista.mostrar();

    cin.get();
    cin.ignore();
    return 0;
}