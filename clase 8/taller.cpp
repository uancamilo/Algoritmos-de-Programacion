#include <iostream>   // permite usar cout para imprimir en pantalla
#include <iomanip>    // permite usar setprecision para formatear decimales
using namespace std;

const int edad = 11;  // numero de grupos de edad (filas de la matriz)
const int sedes = 5;  // numero de sedes (columnas de la matriz)

int main () {

    // matriz 11x5 con los porcentajes de cada grupo de edad por sede
    double EDADESXSEDES[edad][sedes] = {
        { 6.85,  6.02,  5.85,  5.94,  5.49},
        { 7.54,  5.37,  7.85,  7.26,  7.94},
        { 6.27,  7.99,  8.85,  8.80,  8.49},
        { 9.72,  7.02,  7.17,  7.85,  9.63},
        {10.03,  8.80,  9.85, 10.40, 10.04},
        { 9.67, 10.20, 10.39, 11.24, 11.92},
        {14.12, 15.90, 14.88, 15.65, 13.54},
        {16.99, 13.78, 14.54, 16.10, 15.97},
        {15.85, 16.47, 15.65, 15.62, 15.76},
        {17.75, 16.33, 17.99, 16.61, 18.02},
        {20.30, 17.05, 17.72, 17.50, 20.72}
    };

    // arreglos para guardar suma, promedio, mayor y menor de cada fila (edad) y columna (sede)
    double sumEdades[11], sumSedes[5], promEdades[11], promSedes[5], mayorEdades[11], mayorSedes[5], menorEdades[11], menorSedes[5];

    cout << fixed << setprecision(2);  // configura la salida para mostrar siempre 2 decimales

    for (int j = 0; j < sedes; j++) {  // recorre cada sede (columna)

        mayorEdades[j] = EDADESXSEDES[0][j];  // asume que el primer grupo de edad es el mayor

        for (int i = 1; i < edad; i++) {  // recorre los demas grupos de edad de esa sede
            if (EDADESXSEDES[i][j] > mayorEdades[j]) {  // si encuentra un valor mas grande
                mayorEdades[j] = EDADESXSEDES[i][j];    // actualiza el mayor
            }
        }
        cout << "Sede " << (j + 1) << ": edad mayor = " << mayorEdades[j] << endl;  // imprime el mayor de la sede
    }
}
