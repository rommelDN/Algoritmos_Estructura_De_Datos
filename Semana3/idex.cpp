#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Lista<int> *lst = new Lista<int>();
    lst->agregaInicial(50);
    lst->agregaInicial(40);
    lst->agregaInicial(30);
    lst->agregaPos(10, 0);
    lst->agregaPos(20, 1);
    lst->agregaPos(60, 5);
    lst->agregaPos(70, 6);
    lst->agregaPos(80, 7);
    cout<<"############################"<<endl;
    cout<<"Lista Enlazada Original"<<endl;
    lst->imprimirLista();

    cout << endl;
    /*cout << lst->longitud() << endl;
    cout << lst->obtenerInicial() << endl;
    cout << lst->obtenerPos(0) << endl;
    cout << lst->obtenerPos(1) << endl;
    cout << lst->obtenerPos(3) << endl;
    cout << lst->obtenerPos(5) << endl;
    cout << lst->obtenerPos(6) << endl;
    cout << lst->obtenerPos(7) << endl;*/

    cout<<"############################"<<endl;
    cout<<"Buscar"<<endl;
    cout << lst->buscar(40) << endl;

    cout<<"############################"<<endl;
    cout<<"Lista Enlazada Eliminando El Noda Inicial"<<endl;
    lst->eliminaInicial();
    cout<<"Longitud_: "<<lst->longitud()<<endl;
    lst->imprimirLista();
    cout << endl;
    cout<<"############################"<<endl;
    cout<<"Lista Enlazada Eliminando El Noda Final"<<endl;
    lst->eliminarFinal();
    cout<<"Longitud_: "<<lst->longitud()<<endl;
    lst->imprimirLista();
    cout<<"############################"<<endl;
    cout<<"Lista Enlazada Eliminando El Nodo Por Posicion (3)"<<endl;
    lst->eliminarPos(3);
    cout<<"Longitud_: "<<lst->longitud()<<endl;
    lst->imprimirLista();
    cout<<"############################"<<endl;
    lst->obtenerMayor();
    lst->obtenerMenor();

    cin.get();
    return 0;
}