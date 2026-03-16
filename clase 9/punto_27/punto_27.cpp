#include <iostream>
using namespace std;

// Multiplicacion sin usar el operador *
// Se realiza mediante sumas repetidas
float multiplicar(float a, float b) {
    if (b == 0 || a == 0) return 0;

    bool negativo = false;
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) negativo = true;
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    float resultado = 0;
    int veces = (int)b;
    float decimal = b - veces;

    for (int i = 0; i < veces; i++) {
        resultado += a;
    }
    resultado += a * decimal; // parte decimal usando suma proporcional

    return negativo ? -resultado : resultado;
}

int main() {
    float a, b;

    cout << "=== Multiplicacion sin usar (*) ===" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "\n" << a << " x " << b << " = " << multiplicar(a, b) << endl;

    return 0;
}
