#include <iostream>
using namespace std;

void calcularPrestamo(float montoPrestamo, float &intereses, float &totalPagar, float &valorCuota) {
    float tasaAnual = 0.132;
    intereses = montoPrestamo * tasaAnual;
    totalPagar = montoPrestamo + intereses;
    valorCuota = totalPagar / 12.0;
}

int main() {
    float monto, intereses, totalPagar, valorCuota;

    cout << "=== Calculo de Prestamo Bancario ===" << endl;
    cout << "Ingrese el monto del prestamo: $";
    cin >> monto;

    calcularPrestamo(monto, intereses, totalPagar, valorCuota);

    cout << "\n--- Detalle del Prestamo ---" << endl;
    cout << "Monto prestado:      $" << monto << endl;
    cout << "Intereses (13.2%):   $" << intereses << endl;
    cout << "Total a pagar:       $" << totalPagar << endl;
    cout << "Valor cuota mensual: $" << valorCuota << " (12 cuotas)" << endl;

    return 0;
}
