// Programa: Dimension Constante
// Descripcion: Define un vector con un tamano fijo (constante) conocido en tiempo de compilacion.

#include <iostream>
using namespace std;

int main() {
    // Se define el tamano del vector como constante
    const int N = 10;

    // Se declara el vector con dimension constante
    int vector[N];

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

    return 0;
}
