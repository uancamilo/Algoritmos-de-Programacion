#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int FILAS = 6;
    const int COLUMNAS = 6;
    int matriz[FILAS][COLUMNAS];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 90 + 10;  // Rango: 10 a 99
        }
    }

    cout << "Matriz 6x6 (numeros aleatorios de 10 a 99)\n";

    for (int j = 0; j < COLUMNAS; j++) {
        cout << "+----";
    }
    cout << "+\n";

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "| " << setw(2) << matriz[i][j] << " ";
        }
        cout << "|\n";

        for (int j = 0; j < COLUMNAS; j++) {
            cout << "+----";
        }
        cout << "+\n";
    }

    return 0;
}
