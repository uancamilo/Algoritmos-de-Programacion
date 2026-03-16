#include <iostream>
using namespace std;

float calcularFormula(float a, float b, float c) {
    return b + 3 * a + 80 * c;
}

int main() {
    float a, b, c;

    cout << "=== Formula: X = B + 3*A + 80*C ===" << endl;
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de C: ";
    cin >> c;

    float x = calcularFormula(a, b, c);
    cout << "\nX = " << b << " + 3*" << a << " + 80*" << c << " = " << x << endl;

    return 0;
}
