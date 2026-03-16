#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int FILAS = 7;
    const int COLUMNAS = 7;
    int matriz[FILAS][COLUMNAS];
    int suma = 0;

    srand(static_cast<unsigned int>(time(0)));
    cout << "Matriz 7x7 generada aleatoriamente (10 a 99):\n";

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 90 + 10;
            suma += matriz[i][j];
            cout << setw(4) << matriz[i][j];
        }
        cout << '\n';
    }

    double promedio = static_cast<double>(suma) / (FILAS * COLUMNAS);

    cout << "\nSuma total: " << suma << '\n';
    cout << fixed << setprecision(2);
    cout << "Promedio: " << promedio << '\n';

    return 0;
}
