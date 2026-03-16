#include <iostream>
using namespace std;

void procesarEmpleados(int &masDosMil, int &entreSieteDosM, float &promedioMenosSiete, int &total) {
    float salario;
    float sumaMenosSiete = 0;
    int cantMenosSiete = 0;
    masDosMil = 0;
    entreSieteDosM = 0;
    total = 0;

    cout << "Ingrese salarios (0 para terminar):" << endl;
    do {
        cout << "Salario empleado " << (total + 1) << ": $";
        cin >> salario;
        if (salario != 0) {
            total++;
            if (salario > 2000000) {
                masDosMil++;
            } else if (salario >= 700000) {
                entreSieteDosM++;
            } else {
                cantMenosSiete++;
                sumaMenosSiete += salario;
            }
        }
    } while (salario != 0);

    promedioMenosSiete = (cantMenosSiete > 0) ? sumaMenosSiete / cantMenosSiete : 0;
}

int main() {
    int masDosMil, entreSieteDosM, total;
    float promedioMenosSiete;

    cout << "=== Analisis de Salarios de Empleados ===" << endl;
    procesarEmpleados(masDosMil, entreSieteDosM, promedioMenosSiete, total);

    float porcentajeEntre = (total > 0) ? (float)entreSieteDosM / total * 100 : 0;

    cout << "\n--- Resultados ---" << endl;
    cout << "Empleados con salario > $2.000.000: " << masDosMil << endl;
    cout << "Porcentaje con salario entre $700.000 y $2.000.000: " << porcentajeEntre << "%" << endl;
    cout << "Promedio salarios menores a $700.000: $" << promedioMenosSiete << endl;

    return 0;
}
