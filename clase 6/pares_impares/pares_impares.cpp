#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese la cantidad de filas (F): ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas (C): ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        cout << "F y C deben ser mayores que 0.\n";
        return 1;
    }

    // Reserva un arreglo de punteros, uno por cada fila de la matriz.
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        // Para cada fila, reserva un arreglo de enteros con 'columnas' elementos.
        matriz[i] = new int[columnas];
    }

    srand(time(0));

    int cantidadPares = 0;
    int cantidadImpares = 0;
    long long suma = 0;

    cout << "\nMatriz generada aleatoriamente (10 a 99):\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 90 + 10;
            int valor = matriz[i][j];

            suma += valor;
            if (valor % 2 == 0) {
                cantidadPares++;
            } else {
                cantidadImpares++;
            }

            cout << setw(4) << valor;
        }
        cout << '\n';
    }

    int totalElementos = filas * columnas;
    double porcentajePares =
        static_cast<double>(cantidadPares) * 100.0 / totalElementos;
    double porcentajeImpares =
        static_cast<double>(cantidadImpares) * 100.0 / totalElementos;
    double promedio = static_cast<double>(suma) / totalElementos;

    cout << fixed << setprecision(2);
    cout << "\nCantidad de pares: " << cantidadPares << '\n';
    cout << "Porcentaje de pares: " << porcentajePares << "%\n";
    cout << "Cantidad de impares: " << cantidadImpares << '\n';
    cout << "Porcentaje de impares: " << porcentajeImpares << "%\n";
    cout << "Suma total: " << suma << '\n';
    cout << "Promedio: " << promedio << '\n';

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
