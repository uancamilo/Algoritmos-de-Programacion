#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamano del vector: ";
    cin >> N;

    int *vector = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor [" << i << "]: ";
        cin >> vector[i];
    }

    cout << "\nVector ingresado: ";
    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    delete[] vector;

    return 0;
}
