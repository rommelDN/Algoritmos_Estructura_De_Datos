#include <vector>
#include <cmath>
#include <iostream>
#include <SFML/Graphics.hpp>

// Punto class definition
template<typename T>
class Punto {
public:
    T x, y;
    Punto() : x(0), y(0) {}
    Punto(T x, T y) : x(x), y(y) {}
};

// Binomial coefficient function
int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Bezier curve function
template<typename T>
Punto<T> bezier(const std::vector<Punto<T>>& control, double t) {
    int n = control.size() - 1;
    T x = 0;
    T y = 0;
    for (int i = 0; i <= n; ++i) {
        int coeff = binomialCoeff(n, i);
        double term = coeff * pow(1 - t, n - i) * pow(t, i);
        x += control[i].x * term;
        y += control[i].y * term;
    }
    return Punto<T>(x, y);
}

int main() {
    // Definir puntos de control para la curva de Bezier
    std::vector<Punto<double>> control = {
        {100, 500},
        {200, 100},
        {600, 100},
        {700, 500}
    };

    sf::RenderWindow window(sf::VideoMode({800u, 600u}), "Canvas Basico", sf::Style::Default);

    // Crear VertexArray para la curva
    sf::VertexArray curva(sf::PrimitiveType::LineStrip);
    for (double t = 0; t <= 1.00001; t += 0.01) {
        Punto<double> pt = bezier(control, t);
        sf::Vertex v;
        v.position = sf::Vector2f(static_cast<float>(pt.x), static_cast<float>(pt.y));
        v.color = sf::Color::Red;
        curva.append(v);
    }

    // Bucle principal
    while (window.isOpen()) {
        // Manejo de eventos
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        // Limpiar la ventana con color blanco
        window.clear(sf::Color::White);
        // Dibujar la curva de Bezier
        window.draw(curva);
        // Mostrar lo que se dibujó
        window.display();
    }

    return 0;
}