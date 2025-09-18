#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <iostream>

// Clase Punto
template <typename T>
class Punto {
public:
    T x, y;
    Punto() : x(0), y(0) {}
    Punto(T x_, T y_) : x(x_), y(y_) {}
};

// Coeficiente binomial
long long binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

// Curva de Bézier
template <typename T>
Punto<T> bezier(const std::vector<Punto<T>>& puntos, double t) {
    int n = puntos.size() - 1;
    Punto<T> res(0, 0);
    for (int i = 0; i <= n; i++) {
        double coeff = binomialCoeff(n, i) * pow(1 - t, n - i) * pow(t, i);
        res.x += coeff * puntos[i].x;
        res.y += coeff * puntos[i].y;
    }
    return res;
}

int main() {
    sf::RenderWindow window(sf::VideoMode({800u, 600u}), "Formulario: Curva de Bezier", sf::State::Windowed);

    std::vector<Punto<double>> controlPoints;
    sf::VertexArray polygon(sf::PrimitiveType::LineStrip);
    sf::VertexArray curve(sf::PrimitiveType::LineStrip);
    bool curveReady = false;

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            // Click izquierdo para añadir puntos
            if (event->is<sf::Event::MouseButtonPressed>()) {
                auto mouse = event->getIf<sf::Event::MouseButtonPressed>();
                if (mouse && mouse->button == sf::Mouse::Button::Left) {
                    double x = mouse->position.x;
                    double y = mouse->position.y;
                    controlPoints.emplace_back(x, y);

                    sf::Vertex v;
                    v.position = sf::Vector2f(x, y);
                    v.color = sf::Color::Blue;
                    polygon.append(v);

                    std::cout << "Punto agregado: (" << x << ", " << y << ")\n";
                }
            }
            // Enter para generar la curva
            if (event->is<sf::Event::KeyPressed>()) {
                auto key = event->getIf<sf::Event::KeyPressed>();
                if (key && key->code == sf::Keyboard::Key::Enter && controlPoints.size() >= 2) {
                    curve.clear();
                    for (double t = 0; t <= 1.001; t += 0.01) {
                        Punto<double> p = bezier(controlPoints, t);
                        sf::Vertex v;
                        v.position = sf::Vector2f(p.x, p.y);
                        v.color = sf::Color::Red;
                        curve.append(v);
                    }
                    curveReady = true;
                    std::cout << "Curva generada con " << controlPoints.size() << " puntos.\n";
                }
            }
        }

        window.clear(sf::Color::White);

        // Dibujar los puntos de control (polígono azul)
        window.draw(polygon);

        // Dibujar la curva (roja)
        if (curveReady) {
            window.draw(curve);
        }

        window.display();
    }
    return 0;
}