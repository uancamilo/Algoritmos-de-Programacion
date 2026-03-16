#include <iostream>
using namespace std;

float calcularFormula(float a, float b, float c) {
    float denominador = c * (a + b);
    if (denominador == 0) {
        cout << "Error: division por cero." << endl;
        return 0;
    }
    return (a * b) / denominador;
}

int main() {
    float a, b, c;

    cout << "=== Formula: F = (a*b) / (c*(a+b)) ===" << endl;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    if (c == 0 || (a + b) == 0) {
        cout << "\nError: division por cero. No se puede calcular la formula." << endl;
    } else {
        float resultado = calcularFormula(a, b, c);
        cout << "\nFormula = (" << a << " * " << b << ") / (" << c << " * (" << a << " + " << b << "))" << endl;
        cout << "Resultado = " << resultado << endl;
    }

    return 0;
}
