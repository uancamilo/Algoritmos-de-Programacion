#include <iostream>
using namespace std;

long long calcularFactorial(int n) {
    long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;

    cout << "=== Factorial de un numero ===" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "No existe el factorial de un numero negativo." << endl;
    } else {
        cout << "\n" << n << "! = " << calcularFactorial(n) << endl;
    }

    return 0;
}
