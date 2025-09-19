#include <iostream>
#include<list>
#include <string>

using namespace std;
template<typename T1,typename T2,typename T3>
class Docente{
    public:
     T1 nombre;
     T1 apellido;
     T2 dni;
     T1 codigo;
     T3 sueldo;
    public:

    Docente(){};
    Docente(T1 nombre,T1 apellido,T2 dni, T1 codigo, T3 sueldo);

    void Mostrar();
    void PromedioTotal(list<Docente<T1,T2,T3>> &docentes);
    void DocenteMayor_Por_DNI(list<Docente<T1,T2,T3>> &docentes);
};

template<typename T1,typename T2,typename T3>
Docente<T1,T2,T3>::Docente(T1 nombre,T1 apellido,T2 dni, T1 codigo, T3 sueldo){
    this->nombre=nombre;
    this->apellido=apellido;
    this->dni=dni;
    this->sueldo=sueldo;
};

template<typename T1,typename T2,typename T3>
void Docente<T1,T2,T3>::Mostrar(){
    cout<<endl;
    cout<<"Nombre_: "<<nombre<<endl;
    cout<<"Apellido_:: "<<apellido<<endl;
    cout<<"DNI_: "<<dni<<endl;
    cout<<"Codigo_: "<<codigo<<endl;
    cout<<"Sueldo_: "<<sueldo<<endl;
};

template<typename T1,typename T2,typename T3>
void Docente<T1,T2,T3>::PromedioTotal(list<Docente<T1,T2,T3>> &docentes){
    if(docentes.empty()){
        cout<<"No. hay docentes registrados"<<endl;
        return;
    };
    double suma = 0;
    int contador=0;
    for(auto &docente : docentes){
        suma +=docente.sueldo;
        contador++
    }
    cout<<"Promedio de los sueldos_: "<<(suma/contador)<<endl;
};

template<typename T1,typename T2,typename T3>
void Docente<T1,T2,T3>::DocenteMayor_Por_DNI(list<Docente<T1,T2,T3>> &docentes){
    
};

int main(){
    
    list<Docente<string,int,double>> docentes;
    int opcion;
    cout<<"Ingrese una opcion_: ";
    cout<<"1.- Listar Todos Los Docentes: ";
    cout<<"2.- Promedio de Sueldo de Docentes: ";
    cout<<"3.- Mostrar el Docente de Mayor edad: ";
    cout<<"0.- Salir ";
    cin>>opcion;
    do{
        if(opcion==1){
            for(auto &docente : docentes){
                docente.Mostrar();
            }
        };
        if(opcion==2){
            Docente<string,int,double> aux;
            aux.PromedioTotal(docentes);
        };
        if(opcion==3){

        };

    }while (opcion!=0);
    
    return 0;
};