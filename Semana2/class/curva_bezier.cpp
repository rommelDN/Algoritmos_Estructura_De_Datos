/**Curva de Bézier, definida por conjuntos de puntos */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Clase Punto
template <typename T>
class Punto
{
public:
    T x, y;
    Punto() : x(0), y(0) {}
    Punto(T x_, T y_) : x(x_), y(y_) {}
};

// Función para calcular coeficiente binomial
long long binomialCoeff(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

// Curva de Bézier
template <typename T>
Punto<T> bezier(const vector<Punto<T> > &puntos, double t)
{
    int n = puntos.size() - 1;
    Punto<T> res(0, 0);
    for (int i = 0; i <= n; i++)
    {
        double coeff = binomialCoeff(n, i) * pow(1 - t, n - i) * pow(t, i);
        res.x += coeff * puntos[i].x;
        res.y += coeff * puntos[i].y;
    }
    return res;
}

int main()
{
    // Definimos puntos de control
    vector<Punto<double> > control;
    control.push_back(Punto<double>(0, 0));
    control.push_back(Punto<double>(1, 2));
    control.push_back(Punto<double>(3, 3));
    control.push_back(Punto<double>(4, 0));

    cout << "Curva de Bezier con 4 puntos de control:" << endl;
    for (double t = 0; t <= 1.001; t += 0.1)
    {
        Punto<double> p = bezier(control, t);
        cout << "t=" << t << " -> (" << p.x << ", " << p.y << ")" << endl;
    }

    return 0;
}