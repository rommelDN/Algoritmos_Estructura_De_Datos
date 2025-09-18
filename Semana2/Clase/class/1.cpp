#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Persona
{
public:
    T1 nombres;
    T2 estado;

public:
    Persona(T1 nombres, T2 estado);
    T2 activar(T2 objeto);
};

template <typename T1, typename T2>
Persona<T1, T2>::Persona(T1 nombres, T2 estado)
{
    this->nombres = nombres;
    this->estado = estado;
}

template <typename T1, typename T2>
T2 Persona<T1, T2>::activar(T2 objeto)
{
    objeto = true;
    return objeto;
}

int main()
{
    Persona<string, bool> objPersona("Carlos", false);
    objPersona.nombres = "Carlos";
    objPersona.estado = true;
    cout << "\Valor actual de nombres_: " << objPersona.nombres;
    bool rs = objPersona.activar(false);
    cout << "\n Nuevo valor de estado" << objPersona.estado;
    return 0;
}