// Programa: Busqueda Binaria
// Descripcion: Divide repetidamente un vector ordenado por la mitad hasta localizar el elemento buscado.

#include <iostream>
using namespace std;

int main() {
    int N, buscar;

    // Se solicita el tamano del vector
    cout << "Ingrese el tamano del vector: ";
    cin >> N;

    // Se reserva memoria dinamica para el vector
    int *vector = new int[N];

    // Se llena el vector (debe estar en orden ascendente)
    cout << "Ingrese los elementos en orden ascendente:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor [" << i << "]: ";
        cin >> vector[i];
    }

    // Se solicita el valor a buscar
    cout << "Ingrese el valor a buscar: ";
    cin >> buscar;

    // Se definen los limites de busqueda
    int inicio = 0;
    int fin = N - 1;
    bool encontrado = false;

    // Se divide el rango por la mitad en cada iteracion
    while (inicio <= fin) {
        int mitad = (inicio + fin) / 2; // Se calcula el punto medio

        if (vector[mitad] == buscar) {
            // El elemento esta en el punto medio
            cout << "Elemento encontrado en la posicion: " << mitad << endl;
            encontrado = true;
            break;
        } else if (buscar < vector[mitad]) {
            // El elemento esta en la mitad izquierda
            fin = mitad - 1;
        } else {
            // El elemento esta en la mitad derecha
            inicio = mitad + 1;
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
