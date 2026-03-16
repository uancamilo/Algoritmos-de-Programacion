#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    long long anterior = 0, actual = 1, siguiente;

    cout << "Serie Fibonacci (" << n << " terminos):" << endl;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << anterior;
        } else if (i == 2) {
            cout << ", " << actual;
        } else {
            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
            cout << ", " << actual;
        }
    }
    cout << endl;
}

int main() {
    cout << "=== Serie Fibonacci (primeros 20 terminos) ===" << endl;
    generarFibonacci(20);

    return 0;
}
