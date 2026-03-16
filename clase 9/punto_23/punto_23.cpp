#include <iostream>
using namespace std;

void ingresarPantalon(int &blancos30, int &negros28, int &totalPantalones, float &totalValor) {
    int color, talla, cantidad;
    float precio;

    cout << "Ingrese los datos del pantalon:" << endl;
    cout << "Color (1=Blanco, 2=Negro, 3=Otro): "; cin >> color;
    cout << "Talla: "; cin >> talla;
    cout << "Cantidad: "; cin >> cantidad;
    cout << "Precio unitario: $"; cin >> precio;

    totalPantalones += cantidad;
    totalValor += cantidad * precio;

    if (color == 1 && talla == 30) blancos30 += cantidad;
    if (color == 2 && talla == 28) negros28 += cantidad;
}

int main() {
    int blancos30 = 0, negros28 = 0, totalPantalones = 0;
    float totalValor = 0;
    int n, continuar;

    cout << "=== Almacen de Pantalones ===" << endl;
    cout << "¿Cuantos tipos de pantalones desea ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\n-- Pantalon " << i << " --" << endl;
        ingresarPantalon(blancos30, negros28, totalPantalones, totalValor);
    }

    cout << "\n--- Resumen del Almacen ---" << endl;
    cout << "Pantalones blancos talla 30: " << blancos30 << endl;
    cout << "Pantalones negros talla 28: " << negros28 << endl;
    cout << "Total de pantalones: " << totalPantalones << endl;
    cout << "Valor total: $" << totalValor << endl;

    return 0;
}
