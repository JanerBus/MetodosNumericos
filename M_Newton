#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Función original: f(x) = ln(x) - 2x + 3
double f(double x) {
    return log(x) - 2*x + 3;
}

// Derivada de la función: f'(x) = 1/x - 2
double df(double x) {
    return 1.0/x - 2;
}

// Método de Newton-Raphson
double newtonRaphson(double x0, double tol = 1e-6, int max_iter = 100) {
    double x = x0;
    cout << fixed << setprecision(6);
    
    cout << "Iteración 0: x0 = " << x << ", f(x0) = " << f(x) << endl;
    
    for (int i = 1; i <= max_iter; ++i) {
        if (abs(f(x)) < tol) {
            break;
        }
        
        if (df(x) == 0) {
            cerr << "Error: Derivada cero en x = " << x << endl;
            break;
        }
        
        x = x - f(x)/df(x);
        cout << "Iteración " << i << ": x = " << x << ", f(x) = " << f(x) << endl;
    }
    
    return x;
}

int main() {
    // Primera raíz (entre 0 y 0.5)
    cout << "\nNewton-Raphson - Buscando primera raíz (entre 0 y 0.5):\n";
    double raiz1 = newtonRaphson(0.3);
    cout << "\nRaíz encontrada: " << raiz1 << "\n\n";
    
    // Segunda raíz (entre 0.5 e infinito)
    cout << "Newton-Raphson - Buscando segunda raíz (entre 0.5 e infinito):\n";
    double raiz2 = newtonRaphson(1.5);
    cout << "\nRaíz encontrada: " << raiz2 << endl;
    
    return 0;
}
