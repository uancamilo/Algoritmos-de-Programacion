// Programa: Imprimir Vector
// Descripcion: Muestra los elementos de un vector de forma horizontal y vertical con su posicion.

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

    // Imprimir elementos de forma horizontal (todos en una linea)
    cout << "\nForma horizontal:" << endl;
    for (int i = 0; i < N; i++) {
        cout << vector[i] << "  ";
    }
    cout << endl;

    // Imprimir posicion y elementos de forma vertical (uno por linea)
    cout << "\nForma vertical:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "vector[" << i << "]: " << vector[i] << endl;
    }

    // Se libera la memoria dinamica
    delete[] vector;

    return 0;
}
