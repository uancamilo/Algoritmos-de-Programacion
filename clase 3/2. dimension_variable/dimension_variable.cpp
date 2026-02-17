// Programa: Dimension Variable
// Descripcion: Define un vector con un tamano dinamico ingresado por el usuario en tiempo de ejecucion.

#include <iostream>
using namespace std;

int main() {
    int N;

    // Se solicita el tamano del vector al usuario
    cout << "Ingrese el tamano del vector: ";
    cin >> N;

    // Se reserva memoria dinamica para el vector usando new
    int *vector = new int[N];

    // Se llena el vector leyendo valores del usuario
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor [" << i << "]: ";
        cin >> vector[i];
    }

    // Se imprime el vector completo
    cout << "\nVector ingresado: ";
    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    // Se libera la memoria dinamica reservada
    delete[] vector;

    return 0;
}
