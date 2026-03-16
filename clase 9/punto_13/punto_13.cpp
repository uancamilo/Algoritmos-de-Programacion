#include <iostream>
using namespace std;

void procesarNumeros(float &sumaMayores, float &sumaMenores, int &total) {
    float numero;
    sumaMayores = 0;
    sumaMenores = 0;
    total = 0;

    cout << "Ingrese numeros (999 para terminar):" << endl;
    do {
        cout << "Numero: ";
        cin >> numero;
        if (numero != 999) {
            total++;
            if (numero > 100) {
                sumaMayores += numero;
            } else {
                sumaMenores += numero;
            }
        }
    } while (numero != 999);
}

int main() {
    float sumaMayores, sumaMenores;
    int total;

    cout << "=== Sumatoria de numeros hasta 999 ===" << endl;
    procesarNumeros(sumaMayores, sumaMenores, total);

    cout << "\nTotal de numeros leidos: " << total << endl;
    cout << "Sumatoria de numeros mayores a 100: " << sumaMayores << endl;
    cout << "Sumatoria de numeros menores o iguales a 100: " << sumaMenores << endl;

    return 0;
}
