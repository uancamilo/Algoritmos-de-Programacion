#include <iostream>
using namespace std;

void encontrarMayorMenor(float &mayor, float &menor) {
    float peso;
    mayor = -1;
    menor = -1;

    cout << "Ingrese el peso de las 12 esferas:" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << "Esfera " << i << ": ";
        cin >> peso;
        if (i == 1) {
            mayor = peso;
            menor = peso;
        } else {
            if (peso > mayor) mayor = peso;
            if (peso < menor) menor = peso;
        }
    }
}

int main() {
    float mayor, menor;

    cout << "=== Esferas: Mayor y Menor Peso (12 esferas) ===" << endl;
    encontrarMayorMenor(mayor, menor);

    cout << "\nEsfera de mayor peso: " << mayor << endl;
    cout << "Esfera de menor peso: " << menor << endl;

    return 0;
}
