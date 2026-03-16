#include <iostream>
using namespace std;

int calcularClave(int numero) {
    if (numero < 0) return -1;

    int d1 = numero / 100;
    int d2 = (numero / 10) % 10;
    int d3 = numero % 10;
    int suma = d1 + d2 + d3;

    return suma % 7;
}

int main() {
    int numero;

    cout << "=== Clave de numero de 3 cifras ===" << endl;
    cout << "Ingrese numeros de 3 cifras (0 para terminar):" << endl;

    do {
        cout << "Numero: ";
        cin >> numero;
        if (numero != 0) {
            int clave = calcularClave(numero);
            if (clave == -1) {
                cout << "El numero " << numero << " es NEGATIVO." << endl;
            } else {
                cout << "La clave del numero " << numero << " es: " << clave << endl;
            }
        }
    } while (numero != 0);

    return 0;
}
