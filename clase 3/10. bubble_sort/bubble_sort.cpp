// Programa: Bubble Sort
// Descripcion: Ordena un vector comparando elementos adyacentes e intercambiando los que estan desordenados.

#include <iostream>
using namespace std;

int main() {
    int N;

    // Se solicita el tamano del vector
    cout << "Ingrese el tamano del vector: ";
    cin >> N;

    // Se reserva memoria dinamica para el vector
    int *vector = new int[N];

    // Se llena el vector leyendo valores del usuario
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor [" << i << "]: ";
        cin >> vector[i];
    }

    // Bubble Sort: ciclo externo controla las pasadas
    for (int i = 0; i < N - 1; i++) {
        // Ciclo interno compara elementos adyacentes
        // N-1-i porque en cada pasada el mayor elemento ya queda al final
        for (int j = 0; j < N - 1 - i; j++) {
            if (vector[j] > vector[j + 1]) {
                // Intercambio usando variable temporal
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    // Se imprime el vector ordenado
    cout << "\nVector ordenado: ";
    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    // Se libera la memoria dinamica
    delete[] vector;

    return 0;
}
