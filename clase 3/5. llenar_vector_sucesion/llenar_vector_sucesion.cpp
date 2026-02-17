// Programa: Llenar Vector con Sucesion
// Descripcion: Llena un vector con la sucesion de numeros pares (2, 4, 6, 8...) usando dos soluciones.

#include <iostream>
using namespace std;

int main() {
    int N;

    // Se solicita el tamano del vector
    cout << "Ingrese el tamano del vector: ";
    cin >> N;

    // Solucion 1: Usa una variable que se incrementa de 2 en 2
    cout << "Solucion 1:" << endl;
    int *vec1 = new int[N];
    int elemento = 2; // Inicia en 2 (primer numero par)
    for (int i = 0; i < N; i++) {
        vec1[i] = elemento;      // Asigna el valor actual al vector
        cout << vec1[i] << " ";
        elemento += 2;           // Incrementa en 2 para obtener el siguiente par
    }
    cout << endl;

    // Solucion 2 - Optimizada: Calcula el valor directamente con la formula (i+1)*2
    cout << "Solucion 2 (optimizada):" << endl;
    int *vec2 = new int[N];
    for (int i = 0; i < N; i++) {
        vec2[i] = (i + 1) * 2;   // Formula directa sin variable auxiliar
        cout << vec2[i] << " ";
    }
    cout << endl;

    // Se libera la memoria dinamica de ambos vectores
    delete[] vec1;
    delete[] vec2;

    return 0;
}
