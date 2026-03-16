#include <iostream>
using namespace std;

float calcularDescuento(float totalFactura) {
    if (totalFactura >= 50000 && totalFactura <= 100000) {
        return totalFactura * 0.05;
    } else if (totalFactura > 100000 && totalFactura <= 150000) {
        return totalFactura * 0.07;
    } else if (totalFactura > 150000) {
        return totalFactura * 0.09;
    }
    return 0;
}

void mostrarResumen(float totalFactura) {
    float descuento = calcularDescuento(totalFactura);
    float totalPagar = totalFactura - descuento;

    if (descuento == 0) {
        cout << "No aplica descuento (factura menor a $50.000)." << endl;
    } else if (totalFactura <= 100000) {
        cout << "Descuento aplicado: 5%" << endl;
    } else if (totalFactura <= 150000) {
        cout << "Descuento aplicado: 7%" << endl;
    } else {
        cout << "Descuento aplicado: 9%" << endl;
    }

    cout << "Valor del descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << totalPagar << endl;
}

int main() {
    float totalFactura;

    cout << "=== Calculo de Descuento en Factura ===" << endl;
    cout << "Ingrese el total de la factura: $";
    cin >> totalFactura;

    cout << endl;
    mostrarResumen(totalFactura);

    return 0;
}
