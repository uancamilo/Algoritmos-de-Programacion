#include <iostream>
using namespace std;

float calcularPromedio(float v1, float v2, float v3, float v4, float v5) {
    return (v1 + v2 + v3 + v4 + v5) / 5.0;
}

int main() {
    float dia1, dia2, dia3, dia4, dia5;

    cout << "=== Promedio de Ventas (5 dias) ===" << endl;
    cout << "Ingrese las ventas del dia 1: ";
    cin >> dia1;
    cout << "Ingrese las ventas del dia 2: ";
    cin >> dia2;
    cout << "Ingrese las ventas del dia 3: ";
    cin >> dia3;
    cout << "Ingrese las ventas del dia 4: ";
    cin >> dia4;
    cout << "Ingrese las ventas del dia 5: ";
    cin >> dia5;

    float promedio = calcularPromedio(dia1, dia2, dia3, dia4, dia5);
    cout << "\nEl promedio de ventas de los ultimos 5 dias es: $" << promedio << endl;

    return 0;
}
