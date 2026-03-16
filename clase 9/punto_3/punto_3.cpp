#include <iostream>
using namespace std;

float calcularMinimo(float a, float b, float c) {
    float min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

float calcularMaximo(float a, float b, float c) {
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    float a, b, c;

    cout << "=== Minimo y Maximo de 3 valores ===" << endl;
    cout << "Ingrese el valor A: ";
    cin >> a;
    cout << "Ingrese el valor B: ";
    cin >> b;
    cout << "Ingrese el valor C: ";
    cin >> c;

    cout << "\nValor minimo: " << calcularMinimo(a, b, c) << endl;
    cout << "Valor maximo: " << calcularMaximo(a, b, c) << endl;

    return 0;
}
