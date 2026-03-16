#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int FILAS = 8;
    const int COLUMNAS = 8;
    int matriz[FILAS][COLUMNAS];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 90 + 10;  // Rango: 10 a 99
        }
    }

    cout << "Matriz 8x8 (aleatoria 10 a 99):\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << '\n';
    }

    cout << "\nDiagonal principal:\n";
    for (int i = 0; i < FILAS; i++) {
        cout << setw(4) << matriz[i][i];
    }
    cout << '\n';

    return 0;
}
