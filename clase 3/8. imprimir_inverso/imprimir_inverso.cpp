// Programa: Imprimir Inverso
// Descripcion: Muestra los elementos de un vector en sentido inverso, con y sin posicion.

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

    // Imprimir elementos en sentido inverso (desde N-1 hasta 0)
    cout << "\nElementos en sentido inverso:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << vector[i] << "  ";
    }
    cout << endl;

    // Imprimir posicion y elementos en sentido inverso
    cout << "\nPosicion y elementos en sentido inverso:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << "vector[" << i << "]: " << vector[i] << endl;
    }

    // Se libera la memoria dinamica
    delete[] vector;

    return 0;
}
