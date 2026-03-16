#include <iostream>
using namespace std;

void registrarVenta(int producto, int formato, int cantidad, float precio,
                    int &cantAgua, int &cantRon, int &cantVodka,
                    int &cantBotella, int &cantGarrafa,
                    float &totalAgua, float &totalRon, float &totalVodka,
                    float &totalDia) {
    float valor = cantidad * precio;
    totalDia += valor;

    if (producto == 1) { cantAgua += cantidad; totalAgua += valor; }
    else if (producto == 2) { cantRon += cantidad; totalRon += valor; }
    else if (producto == 3) { cantVodka += cantidad; totalVodka += valor; }

    if (formato == 1) cantBotella += cantidad;
    else cantGarrafa += cantidad;
}

int main() {
    int cantAgua = 0, cantRon = 0, cantVodka = 0;
    int cantBotella = 0, cantGarrafa = 0;
    float totalAgua = 0, totalRon = 0, totalVodka = 0, totalDia = 0;
    int n, producto, formato, cantidad;
    float precio;

    cout << "=== Licorera - Registro de Ventas ===" << endl;
    cout << "Ingrese el numero de ventas del dia: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\n-- Venta " << i << " --" << endl;
        cout << "Producto (1=Aguardiente, 2=Ron, 3=Vodka): "; cin >> producto;
        if (producto == 3) {
            formato = 1;
            cout << "Formato: Botella (unico disponible para Vodka)" << endl;
        } else {
            cout << "Formato (1=Botella, 2=Garrafa): "; cin >> formato;
        }
        cout << "Cantidad: "; cin >> cantidad;
        cout << "Precio unitario: $"; cin >> precio;

        registrarVenta(producto, formato, cantidad, precio,
                       cantAgua, cantRon, cantVodka,
                       cantBotella, cantGarrafa,
                       totalAgua, totalRon, totalVodka, totalDia);
    }

    int totalUnidades = cantAgua + cantRon + cantVodka;
    float promedioDia = (totalUnidades > 0) ? totalDia / totalUnidades : 0;

    cout << "\n--- Resumen de Ventas ---" << endl;
    cout << "Aguardiente: " << cantAgua << " uds, Total: $" << totalAgua << endl;
    cout << "Ron:         " << cantRon  << " uds, Total: $" << totalRon  << endl;
    cout << "Vodka:       " << cantVodka << " uds, Total: $" << totalVodka << endl;
    cout << "Total botellas: " << cantBotella << endl;
    cout << "Total garrafas: " << cantGarrafa << endl;
    cout << "Valor promedio ventas del dia: $" << promedioDia << endl;
    cout << "Valor total ventas del dia: $" << totalDia << endl;

    return 0;
}
