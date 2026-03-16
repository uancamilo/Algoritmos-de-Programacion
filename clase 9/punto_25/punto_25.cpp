#include <iostream>
#include <string>
using namespace std;

string convertirMayuscula(string palabra) {
    string resultado = "";
    for (int i = 0; i < (int)palabra.length(); i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            resultado += (char)(palabra[i] - 32);
        } else {
            resultado += palabra[i];
        }
    }
    return resultado;
}

int main() {
    string palabra;

    cout << "=== Convertir Minuscula a Mayuscula ===" << endl;
    cout << "Ingrese una palabra en minuscula: ";
    cin >> palabra;

    cout << "\nPalabra en mayuscula: " << convertirMayuscula(palabra) << endl;

    return 0;
}
