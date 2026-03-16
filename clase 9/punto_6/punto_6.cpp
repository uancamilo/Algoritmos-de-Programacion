#include <iostream>
using namespace std;

float calcularMedio(float a, float b, float c) {
    float suma = a + b + c;
    float max, min;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    return suma - max - min;
}

int main() {
    float a, b, c;

    cout << "=== Numero Medio de 3 numeros ===" << endl;
    cout << "Ingrese el numero 1: ";
    cin >> a;
    cout << "Ingrese el numero 2: ";
    cin >> b;
    cout << "Ingrese el numero 3: ";
    cin >> c;

    cout << "\nEl numero medio (central) es: " << calcularMedio(a, b, c) << endl;

    return 0;
}
