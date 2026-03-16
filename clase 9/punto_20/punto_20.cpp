#include <iostream>
using namespace std;

float calcularComision(int librosVendidos, float valorVenta) {
    if (librosVendidos > 80 && valorVenta > 2000000) {
        return valorVenta * 0.22;
    } else if (librosVendidos < 80 && valorVenta > 2000000) {
        return valorVenta * 0.11;
    }
    return 0;
}

int main() {
    int libros;
    float valorVenta;

    cout << "=== Comision de Vendedor de Libros ===" << endl;
    cout << "Ingrese la cantidad de libros vendidos: ";
    cin >> libros;
    cout << "Ingrese el valor total de la venta: $";
    cin >> valorVenta;

    float comision = calcularComision(libros, valorVenta);

    if (comision == 0) {
        cout << "\nEl vendedor NO tiene comision." << endl;
    } else {
        cout << "\nComision del vendedor: $" << comision << endl;
    }

    return 0;
}
