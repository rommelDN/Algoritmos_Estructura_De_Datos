#include <iostream> // Incluye la librería para entrada y salida estándar
#include <list>     // Incluye la librería para usar listas enlazadas
#include <algorithm> // Incluye funciones para algoritmos como sort
using namespace std;

// Definición de una clase plantilla Alumno con tres tipos genéricos T1, T2 y T3
template <typename T1,typename T2,typename T3>
class Alumno
{
public:
    T1 nombre;       // Nombre del alumno (tipo T1)
    T1 carrera;      // Carrera del alumno (tipo T1)
    T2 edad;         // Edad del alumno (tipo T2)
    T3 notaParcial;  // Nota del parcial (tipo T3)
    T3 notaFinal;    // Nota del final (tipo T3)

public:
    // Constructor que inicializa los atributos del alumno
    Alumno(T1 nombre,T1 carrera,T2 edad,T3 notaParcial,T3 notaFinal);
    // Método para mostrar los datos del alumno
    void Mostrar() const;
    // Método para calcular el promedio de las notas
    T3 Promedio() const;
};

// Implementación del constructor que asigna los valores a los atributos
template <typename T1,typename T2,typename T3>
Alumno<T1,T2,T3>::Alumno(T1 nombre,T1 carrera,T2 edad,T3 notaParcial,T3 notaFinal){
    this->nombre = nombre;
    this->carrera = carrera;
    this->edad=edad;
    this->notaParcial=notaParcial;
    this->notaFinal=notaFinal;
}

// Método que calcula el promedio entre nota parcial y nota final
template <typename T1,typename T2,typename T3>
T3 Alumno<T1,T2,T3>::Promedio() const {
    return (notaParcial+notaFinal)/2;
}

// Método que muestra en pantalla los datos completos del alumno
template <typename T1,typename T2,typename T3>
void Alumno<T1,T2,T3>::Mostrar() const {
    cout<<endl<<"Nombre_: "<<nombre<<" , Edad_: "<<edad<<" , Carrera_: "<<carrera<<" , Nota Parcial_: "<<notaParcial<<" , Nota Final_: "<<notaFinal<<" , Promedio_: "<<Promedio();
}

int main()
{
    // Lista que almacenará objetos Alumno con tipos string, int y float
    list<Alumno<string,int,float>> alumnos;
    int opcion;
    do {
        // Menú para que el usuario elija la acción a realizar
        cout << "\nMenu:\n";
        cout << "1. Agregar alumno\n";
        cout << "2. Mostrar alumnos\n";
        cout << "3. Mostrar 3 mejores alumnos\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Ignorar el salto de línea pendiente en el buffer

        if (opcion == 1) {
            // Opción para agregar un nuevo alumno solicitando sus datos
            string nombre, carrera;
            int edad;
            float notaParcial, notaFinal;
            cout << "Ingrese nombre: ";
            getline(cin, nombre);
            cout << "Ingrese carrera: ";
            getline(cin, carrera);
            cout << "Ingrese edad: ";
            cin >> edad;
            cout << "Ingrese nota parcial: ";
            cin >> notaParcial;
            cout << "Ingrese nota final: ";
            cin >> notaFinal;
            cin.ignore(); // Ignorar salto de línea para próximas entradas
            // Se crea un objeto Alumno y se añade a la lista
            alumnos.push_back(Alumno<string,int,float>(nombre, carrera, edad, notaParcial, notaFinal));
        }
        else if (opcion == 2) {
            // Opción para mostrar todos los alumnos almacenados
            if (alumnos.empty()) {
                cout << "No hay alumnos para mostrar.\n";
            } else {
                // Se recorre la lista y se muestra cada alumno
                for (auto &alumno : alumnos) {
                    alumno.Mostrar();
                }
                cout << endl;
            }
        }
        else if (opcion == 3) {
            // Opción para mostrar los 3 mejores alumnos según su promedio
            if (alumnos.empty()) {
                cout << "No hay alumnos para mostrar.\n";
            } else {
                // Se crea una copia de la lista para ordenar sin modificar la original
                list<Alumno<string,int,float>> copia = alumnos;
                // Se ordena la copia de mayor a menor promedio usando una lambda
                copia.sort([](const Alumno<string,int,float> &a, const Alumno<string,int,float> &b) {
                    return a.Promedio() > b.Promedio();
                });
                cout << "Los " << (min(3, (int)copia.size())) << " mejores alumnos son:";
                int count = 0;
                // Se muestran los primeros 3 alumnos de la lista ordenada
                for (auto &alumno : copia) {
                    alumno.Mostrar();
                    count++;
                    if (count == 3) break; // Salir después de mostrar 3 alumnos
                }
                cout << endl;
            }
        }
    } while (opcion != 4); // Repetir hasta que el usuario elija salir

    return 0;
}