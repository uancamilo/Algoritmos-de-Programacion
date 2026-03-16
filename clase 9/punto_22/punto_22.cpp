#include <iostream>
using namespace std;

void imprimirSucesion() {
    float valor = 1.1;
    int i = 1;
    while (valor <= 44.0) {
        cout << valor;
        if (valor < 43.9) cout << ", ";
        valor = (i + 1) * 1.1;
        i++;
    }
    cout << endl;
}

int main() {
    cout << "=== Sucesion 1.1, 2.2, 3.3, ... hasta 44 ===" << endl;
    cout << "\nSucesion:" << endl;
    imprimirSucesion();

    return 0;
}
