#include <iostream>
using namespace std;

long long calcularFactorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double calcularSerie(int n) {
    double suma = 0;
    for (int i = 1; i <= n; i++) {
        long long fact = calcularFactorial(i);
        suma += (double)i / ((double)fact * n);
    }
    return suma;
}

int main() {
    int n;

    cout << "=== Serie: X = 1/(1!n) + 2/(2!n) + ... + n/(n!n) ===" << endl;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser mayor que 0." << endl;
    } else {
        double resultado = calcularSerie(n);
        cout << "\nX = " << resultado << endl;
    }

    return 0;
}
