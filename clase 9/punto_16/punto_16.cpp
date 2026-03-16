#include <iostream>
using namespace std;

float calcularPrecio(float distanciaKm, int diasEstancia) {
    float precioPorKm = 20000.0;
    float precioBase = distanciaKm * precioPorKm * 2; // ida y vuelta

    if (distanciaKm > 1000 && diasEstancia > 7) {
        precioBase = precioBase * 0.70; // 30% de descuento
        cout << "Se aplica descuento del 30% por distancia > 1000 km y estancia > 7 dias." << endl;
    }

    return precioBase;
}

int main() {
    float distancia;
    int dias;

    cout << "=== Precio Pasaje de Avion Ida y Vuelta ===" << endl;
    cout << "Ingrese la distancia a recorrer (km): ";
    cin >> distancia;
    cout << "Ingrese el numero de dias de estancia: ";
    cin >> dias;

    float precio = calcularPrecio(distancia, dias);
    cout << "\nPrecio del pasaje ida y vuelta: $" << precio << endl;

    return 0;
}
