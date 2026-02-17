// Programa: Imprimir Pares e Impares
// Descripcion: Muestra los elementos en posiciones pares (0, 2, 4...) e impares (1, 3, 5...) de un vector.

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

    // Imprimir elementos en posiciones pares (i empieza en 0, salta de 2 en 2)
    cout << "\nElementos en posiciones pares:" << endl;
    for (int i = 0; i < N; i += 2) {
        cout << vector[i] << "  ";
    }
    cout << endl;

    // Imprimir elementos en posiciones impares (i empieza en 1, salta de 2 en 2)
    cout << "\nElementos en posiciones impares:" << endl;
    for (int i = 1; i < N; i += 2) {
        cout << vector[i] << "  ";
    }
    cout << endl;

    // Se libera la memoria dinamica
    delete[] vector;

    return 0;
}
