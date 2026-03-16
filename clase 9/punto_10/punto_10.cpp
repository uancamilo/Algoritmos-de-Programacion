#include <iostream>
using namespace std;

void compararNumeros(float a, float b) {
    if (a == b) {
        cout << "Los numeros " << a << " y " << b << " SON IGUALES." << endl;
    } else {
        cout << "Los numeros " << a << " y " << b << " NO son iguales." << endl;
    }
}

int main() {
    float a, b;

    cout << "=== Comparacion de dos numeros ===" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << endl;
    compararNumeros(a, b);

    return 0;
}
