#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Función a resolver: f(x) = ln(x) - 2x + 3
double f(double x) {
    return log(x) - 2*x + 3;
}

// Método de la secante
double secante(double x0, double x1, double tol = 1e-6, int max_iter = 100) {
    double x_next;
    int iter = 0;
    
    cout << fixed << setprecision(6);
    cout << "Iteración " << iter << ": x0 = " << x0 << ", f(x0) = " << f(x0) << endl;
    iter++;
    cout << "Iteración " << iter << ": x1 = " << x1 << ", f(x1) = " << f(x1) << endl;
    
    for (iter = 2; iter <= max_iter; iter++) {
        if (abs(f(x1)) < tol) {
            break;
        }
        
        if (f(x1) == f(x0)) { // Evitar división por cero
            cerr << "Error: División por cero (f(x1) == f(x0))" << endl;
            break;
        }
        
        x_next = x1 - f(x1)*(x1 - x0)/(f(x1) - f(x0));
        x0 = x1;
        x1 = x_next;
        
        cout << "Iteración " << iter << ": x = " << x1 << ", f(x) = " << f(x1) << endl;
    }
    
    return x1;
}

int main() {
    // Primera raíz (entre 0 y 0.5)
    cout << "\nBuscando primera raíz (entre 0 y 0.5):\n";
    double raiz1 = secante(0.1, 0.4);
    cout << "\nRaíz encontrada: " << raiz1 << "\n\n";
    
    // Segunda raíz (entre 0.5 e infinito)
    cout << "Buscando segunda raíz (entre 0.5 e infinito):\n";
    double raiz2 = secante(1.0, 2.0);
    cout << "\nRaíz encontrada: " << raiz2 << endl;
    
    return 0;
}
