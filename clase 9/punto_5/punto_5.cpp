#include <iostream>
using namespace std;

void clasificarTriangulo(float l1, float l2, float l3) {
    if (l1 == l2 && l2 == l3) {
        cout << "El triangulo es EQUILATERO (todos los lados iguales)." << endl;
    } else if (l1 == l2 || l1 == l3 || l2 == l3) {
        cout << "El triangulo es ISOSCELES (al menos dos lados iguales)." << endl;
    } else {
        cout << "El triangulo es ESCALENO (todos los lados diferentes)." << endl;
    }
}

int main() {
    float l1, l2, l3;

    cout << "=== Clasificacion de Triangulo ===" << endl;
    cout << "Ingrese el lado 1: ";
    cin >> l1;
    cout << "Ingrese el lado 2: ";
    cin >> l2;
    cout << "Ingrese el lado 3: ";
    cin >> l3;

    cout << endl;
    clasificarTriangulo(l1, l2, l3);

    return 0;
}
