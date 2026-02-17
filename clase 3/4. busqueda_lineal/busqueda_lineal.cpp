// Programa: Busqueda Lineal
// Descripcion: Recorre secuencialmente un vector hasta encontrar el elemento buscado.

#include <iostream>
using namespace std;

int main() {
    int N, buscar;

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

    // Se solicita el valor a buscar
    cout << "Ingrese el valor a buscar: ";
    cin >> buscar;

    // Se recorre el vector de inicio a fin comparando cada elemento
    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (vector[i] == buscar) {
            cout << "Elemento encontrado en la posicion: " << i << endl;
            encontrado = true;
            break; // Se detiene al encontrar el elemento
        }
    }

    // Si no se encontro, se informa al usuario
    if (!encontrado) {
        cout << "Elemento no encontrado." << endl;
    }

    // Se libera la memoria dinamica
    delete[] vector;

    return 0;
}
