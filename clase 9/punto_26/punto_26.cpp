#include <iostream>
#include <cmath>
using namespace std;

bool esCuadradoPerfecto(int n) {
    if (n < 0) return false;
    int raiz = (int)sqrt((double)n);
    return raiz * raiz == n;
}

int main() {
    int numero;

    cout << "=== Cuadrado Perfecto ===" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (esCuadradoPerfecto(numero)) {
        cout << "\n" << numero << " ES un cuadrado perfecto." << endl;
    } else {
        cout << "\n" << numero << " NO es un cuadrado perfecto." << endl;
    }

    return 0;
}
