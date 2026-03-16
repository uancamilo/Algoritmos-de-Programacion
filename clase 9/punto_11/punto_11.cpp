#include <iostream>
#define PI 3.14159265358979
using namespace std;

float calcularVolumenEsfera(float radio) {
    return (4.0 / 3.0) * PI * radio * radio;
}

int main() {
    float radio;

    cout << "=== Volumen de una Esfera ===" << endl;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    float volumen = calcularVolumenEsfera(radio);
    cout << "\nVolumen = (4/3) * PI * " << radio << "^2" << endl;
    cout << "Volumen = " << volumen << endl;

    return 0;
}
