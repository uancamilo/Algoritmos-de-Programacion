#include <iostream>
using namespace std;

void contarFumadores(int &fuman, int &noFuman, int total) {
    int respuesta;
    fuman = 0;
    noFuman = 0;

    for (int i = 1; i <= total; i++) {
        cout << "Persona " << i << " - ¿Fuma? (1=Si, 0=No): ";
        cin >> respuesta;
        if (respuesta == 1) fuman++;
        else noFuman++;
    }
}

int main() {
    int total, fuman, noFuman;

    cout << "=== Fumadores en un Grupo ===" << endl;
    cout << "Ingrese la cantidad de personas: ";
    cin >> total;

    contarFumadores(fuman, noFuman, total);

    float porcentajeFuman = (float)fuman / total * 100;
    float porcentajeNoFuman = (float)noFuman / total * 100;

    cout << "\n--- Resultados ---" << endl;
    cout << "Personas que fuman:     " << fuman << " (" << porcentajeFuman << "%)" << endl;
    cout << "Personas que no fuman:  " << noFuman << " (" << porcentajeNoFuman << "%)" << endl;

    return 0;
}
