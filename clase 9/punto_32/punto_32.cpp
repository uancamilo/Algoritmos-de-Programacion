#include <iostream>
using namespace std;

int ordenForma(float a, float b, float c) {
    if (a < b && b < c) return 1;       // ascendente
    if (a > b && b > c) return 2;       // descendente
    return 0;                            // desorden
}

void mostrarMayorMenorMedio(float a, float b, float c) {
    float mayor, menor, medio;
    mayor = a; menor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    medio = a + b + c - mayor - menor;
    cout << "Mayor: " << mayor << ", Menor: " << menor << ", Medio: " << medio << endl;
}

float calcularPromedio(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

void contarParesImpares(float a, float b, float c) {
    int pares = 0, impares = 0;
    if ((int)a % 2 == 0) pares++; else impares++;
    if ((int)b % 2 == 0) pares++; else impares++;
    if ((int)c % 2 == 0) pares++; else impares++;
    cout << "Pares: " << pares << ", Impares: " << impares << endl;
}

void mostrarTodo(float a, float b, float c) {
    int forma = ordenForma(a, b, c);
    if (forma == 1) cout << "Orden: ASCENDENTE" << endl;
    else if (forma == 2) cout << "Orden: DESCENDENTE" << endl;
    else cout << "Orden: DESORDEN" << endl;

    mostrarMayorMenorMedio(a, b, c);
    cout << "Promedio: " << calcularPromedio(a, b, c) << endl;
    contarParesImpares(a, b, c);
}

int main() {
    float a, b, c;
    int opcion;

    cout << "=== Menu con 3 numeros ===" << endl;
    cout << "Ingrese el numero 1: "; cin >> a;
    cout << "Ingrese el numero 2: "; cin >> b;
    cout << "Ingrese el numero 3: "; cin >> c;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Forma ascendente o descendente" << endl;
        cout << "2. Mayor, menor y medio" << endl;
        cout << "3. Promedio" << endl;
        cout << "4. Par o impar" << endl;
        cout << "5. Todas las anteriores" << endl;
        cout << "6. SALIR" << endl;
        cout << "Seleccione una opcion: "; cin >> opcion;

        switch (opcion) {
            case 1: {
                int forma = ordenForma(a, b, c);
                if (forma == 1) cout << "Los numeros estan en forma ASCENDENTE." << endl;
                else if (forma == 2) cout << "Los numeros estan en forma DESCENDENTE." << endl;
                else cout << "Los numeros estan en DESORDEN." << endl;
                break;
            }
            case 2: mostrarMayorMenorMedio(a, b, c); break;
            case 3: cout << "Promedio: " << calcularPromedio(a, b, c) << endl; break;
            case 4: contarParesImpares(a, b, c); break;
            case 5: mostrarTodo(a, b, c); break;
            case 6: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion invalida." << endl;
        }
    } while (opcion != 6);

    return 0;
}
