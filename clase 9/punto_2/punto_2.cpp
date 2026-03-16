#include <iostream>
using namespace std;

float calcularArea(float lado1, float lado2) {
    return lado1 * lado2;
}

void clasificarFigura(float lado1, float lado2) {
    float area = calcularArea(lado1, lado2);
    cout << "\nArea de la figura: " << area << endl;
    if (lado1 == lado2) {
        cout << "La figura es un CUADRADO." << endl;
    } else {
        cout << "La figura es un RECTANGULO." << endl;
    }
}

int main() {
    float lado1, lado2;

    cout << "=== Clasificacion de Figura ===" << endl;
    cout << "Ingrese el valor del lado 1: ";
    cin >> lado1;
    cout << "Ingrese el valor del lado 2: ";
    cin >> lado2;

    clasificarFigura(lado1, lado2);

    return 0;
}
