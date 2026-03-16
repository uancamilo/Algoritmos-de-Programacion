#include <iostream>
using namespace std;

void procesarNumeros(float &minVal, float &maxVal, float &promedio,
                     int &cantMayores20, int &cantEntre40y80,
                     int &cantEntre50y60, int &cantMayores80, int &cantMenores10) {
    float numero;
    float suma = 0;
    int total = 0;
    minVal = -1;
    maxVal = -1;
    cantMayores20 = 0;
    cantEntre40y80 = 0;
    cantEntre50y60 = 0;
    cantMayores80 = 0;
    cantMenores10 = 0;

    cout << "Ingrese numeros positivos (0 para terminar):" << endl;
    do {
        cout << "Numero: ";
        cin >> numero;
        if (numero > 0) {
            total++;
            suma += numero;
            if (total == 1) { minVal = numero; maxVal = numero; }
            if (numero < minVal) minVal = numero;
            if (numero > maxVal) maxVal = numero;
            if (numero > 20)       cantMayores20++;
            if (numero >= 40 && numero <= 80) cantEntre40y80++;
            if (numero >= 50 && numero <= 60) cantEntre50y60++;
            if (numero > 80)       cantMayores80++;
            if (numero < 10)       cantMenores10++;
        }
    } while (numero != 0);

    promedio = (total > 0) ? suma / total : 0;
}

int main() {
    float minVal, maxVal, promedio;
    int cantMayores20, cantEntre40y80, cantEntre50y60, cantMayores80, cantMenores10;

    cout << "=== Estadisticas de numeros positivos ===" << endl;
    procesarNumeros(minVal, maxVal, promedio, cantMayores20, cantEntre40y80,
                    cantEntre50y60, cantMayores80, cantMenores10);

    cout << "\n--- Resultados ---" << endl;
    cout << "Valor minimo: " << minVal << endl;
    cout << "Valor maximo: " << maxVal << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad mayores de 20: " << cantMayores20 << endl;
    cout << "Cantidad entre 40 y 80: " << cantEntre40y80 << endl;
    cout << "Cantidad entre 50 y 60: " << cantEntre50y60 << endl;
    cout << "Cantidad mayores de 80: " << cantMayores80 << endl;
    cout << "Cantidad menores de 10: " << cantMenores10 << endl;

    return 0;
}
