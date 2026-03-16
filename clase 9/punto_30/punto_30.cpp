#include <iostream>
#include <string>
using namespace std;

void calcularMesas(int patas, int &mesas4, int &mesas3, int &sobrantes) {
    mesas4 = patas / 4;
    sobrantes = patas % 4;
    mesas3 = sobrantes / 3;
    sobrantes = sobrantes % 3;
}

int main() {
    int n, patas, totalMesas4 = 0, totalMesas3 = 0;
    string nombre;

    cout << "=== Produccion de Mesas ===" << endl;
    cout << "Ingrese el numero de producciones (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\n-- Produccion " << i << " --" << endl;
        cout << "Nombre del productor: "; cin >> nombre;
        cout << "Numero de patas realizadas: "; cin >> patas;

        int m4, m3, sobrantes;
        calcularMesas(patas, m4, m3, sobrantes);

        totalMesas4 += m4;
        totalMesas3 += m3;

        cout << "Productor " << nombre << ": " << m4 << " mesas de 4 patas, "
             << m3 << " mesas de 3 patas, " << sobrantes << " patas sobrantes." << endl;
    }

    cout << "\n--- Total General ---" << endl;
    cout << "Total mesas de 4 patas: " << totalMesas4 << endl;
    cout << "Total mesas de 3 patas: " << totalMesas3 << endl;

    return 0;
}
