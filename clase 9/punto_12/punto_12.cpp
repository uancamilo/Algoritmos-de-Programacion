#include <iostream>
using namespace std;

void clasificarCifras(int numero) {
    int abs_num = numero < 0 ? -numero : numero;
    if (abs_num < 10) {
        cout << "El numero " << numero << " tiene UNA cifra." << endl;
    } else if (abs_num < 100) {
        cout << "El numero " << numero << " tiene DOS cifras." << endl;
    } else if (abs_num < 1000) {
        cout << "El numero " << numero << " tiene TRES cifras." << endl;
    } else {
        cout << "El numero " << numero << " tiene MAS de tres cifras." << endl;
    }
}

int main() {
    int numero;

    cout << "=== Clasificacion de Cifras (50 numeros) ===" << endl;
    for (int i = 1; i <= 50; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        clasificarCifras(numero);
    }

    return 0;
}
