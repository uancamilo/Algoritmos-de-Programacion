#include <iostream>
using namespace std;

void mostrarDia(int numero) {
    switch (numero) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Numero invalido. Ingrese un valor entre 1 y 7." << endl;
    }
}

int main() {
    int numero;

    cout << "=== Dia de la Semana ===" << endl;
    cout << "Ingrese un numero (1-7): ";
    cin >> numero;

    cout << "\nEl dia correspondiente es: ";
    mostrarDia(numero);

    return 0;
}
