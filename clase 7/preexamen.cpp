#include <iostream>
#include <string>

using namespace std;

int main() {

    // Columnas: 0=Medellin, 1=Bogota, 2=Cali, 3=Barranquilla, 4=Cartagena, 5=Pasto
    string ciudades[6] = {"Medellin", "Bogota", "Cali", "Barranquilla", "Cartagena", "Pasto"};

    int VENTAS[20][6];

    // Llenar matriz con valores aleatorios entre 0 y 5.000.000
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 6; j++) {
            VENTAS[i][j] = rand() % 5000001;
            cout << VENTAS[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // ── 1. Suma total de ventas ─────────────────────────────────────────────
    long long suma = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            suma += VENTAS[i][j];
    cout << "1. Suma total de ventas: " << suma << endl;

    // ── 2. Venta promedio ───────────────────────────────────────────────────
    double promedio = (double)suma / 120;
    cout << "2. Venta promedio: " << promedio << endl;

    // ── 3. Ventas superiores al promedio ────────────────────────────────────
    int contSup = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] > promedio)
                contSup++;
    cout << "3. Ventas superiores al promedio: " << contSup << endl;

    // ── 4. Ventas inferiores o iguales al promedio ──────────────────────────
    int contInf = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] <= promedio)
                contInf++;
    cout << "4. Ventas inferiores o iguales al promedio: " << contInf << endl;

    // ── 5. Ventas iguales a cero ────────────────────────────────────────────
    int contCero = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] == 0)
                contCero++;
    cout << "5. Ventas iguales a cero: " << contCero << endl;

    // ── 6. Mayor venta y sus posiciones ────────────────────────────────────
    int mayor = VENTAS[0][0], filMayor = 0, colMayor = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] > mayor) {
                mayor = VENTAS[i][j];
                filMayor = i;
                colMayor = j;
            }
    cout << "6. Mayor venta: " << mayor
         << " | Empresa " << filMayor << " - " << ciudades[colMayor] << endl;

    // ── 7. Menor venta y sus posiciones ────────────────────────────────────
    int menor = VENTAS[0][0], filMenor = 0, colMenor = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] < menor) {
                menor = VENTAS[i][j];
                filMenor = i;
                colMenor = j;
            }
    cout << "7. Menor venta: " << menor
         << " | Empresa " << filMenor << " - " << ciudades[colMenor] << endl;

    // ── 8. Buscar valor exacto ──────────────────────────────────────────────
    int buscar;
    cout << "8. Ingrese valor a buscar: ";
    cin >> buscar;
    bool encontrado = false;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] == buscar) {
                cout << "   Encontrado: Empresa " << i << " - " << ciudades[j] << endl;
                encontrado = true;
            }
    if (!encontrado)
        cout << "   No se encontro ninguna venta con ese valor." << endl;

    // ── 9. Ventas entre 500.000 y 1.000.000 en primeras 10 empresas ────────
    int cont9 = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] >= 500000 && VENTAS[i][j] <= 1000000)
                cont9++;
    cout << "9. Ventas entre 500000 y 1000000 (empresas 0-9): " << cont9 << endl;

    // ── 10. Venta total primeras 4 ciudades (j=0,1,2,3) ────────────────────
    long long suma10 = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 4; j++)
            suma10 += VENTAS[i][j];
    cout << "10. Venta total primeras 4 ciudades: " << suma10 << endl;

    // ── 11. Ventas > 1.000.000 en Medellin, Cali y Cartagena ───────────────
    int cont11 = 0;
    for (int i = 0; i < 20; i++) {
        if (VENTAS[i][0] > 1000000) cont11++;   // Medellin
        if (VENTAS[i][2] > 1000000) cont11++;   // Cali
        if (VENTAS[i][4] > 1000000) cont11++;   // Cartagena
    }
    cout << "11. Ventas > 1000000 en Medellin, Cali y Cartagena: " << cont11 << endl;

    // ── 12. Venta total 10 ultimas empresas (i=10..19) ──────────────────────
    long long suma12 = 0;
    for (int i = 10; i < 20; i++)
        for (int j = 0; j < 6; j++)
            suma12 += VENTAS[i][j];
    cout << "12. Venta total 10 ultimas empresas: " << suma12 << endl;

    // ── 13. Promedio de las 4 primeras empresas (i=0..3) ───────────────────
    long long suma13 = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            suma13 += VENTAS[i][j];
    double prom13 = (double)suma13 / 24;
    cout << "13. Promedio 4 primeras empresas: " << prom13 << endl;

    // ── 14. Venta total primera (i=0) y ultima empresa (i=19) ──────────────
    long long suma14 = 0;
    for (int j = 0; j < 6; j++)
        suma14 += VENTAS[0][j] + VENTAS[19][j];
    cout << "14. Venta total empresa 0 y empresa 19: " << suma14 << endl;

    // ── 15. Venta mayor en Medellin (j=0) ──────────────────────────────────
    int mayor15 = VENTAS[0][0];
    for (int i = 1; i < 20; i++)
        if (VENTAS[i][0] > mayor15)
            mayor15 = VENTAS[i][0];
    cout << "15. Mayor venta en Medellin: " << mayor15 << endl;

    // ── 16. Venta menor de empresas pares (i=0,2,4,...,18) ─────────────────
    int menor16 = VENTAS[0][0];
    for (int i = 0; i < 20; i += 2)
        for (int j = 0; j < 6; j++)
            if (VENTAS[i][j] < menor16)
                menor16 = VENTAS[i][j];
    cout << "16. Venta menor empresas pares: " << menor16 << endl;

    // ── 17. Porcentaje ventas 4 primeras empresas en ultimas 3 ciudades ─────
    long long sumaUlt3 = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 3; j < 6; j++)
            sumaUlt3 += VENTAS[i][j];
    double porc17 = (double)sumaUlt3 / suma13 * 100;
    cout << "17. Porcentaje ventas (4 primeras emp, ultimas 3 ciudades): " << porc17 << "%" << endl;

    // ── 18. Porcentaje ventas < 500.000 en emp 3,6,9,12,15 en Medellin y Bogota
    int cont18 = 0;
    int emp18[] = {3, 6, 9, 12, 15};
    for (int k = 0; k < 5; k++) {
        if (VENTAS[emp18[k]][0] < 500000) cont18++;   // Medellin
        if (VENTAS[emp18[k]][1] < 500000) cont18++;   // Bogota
    }
    double porc18 = (double)cont18 / 10 * 100;
    cout << "18. Porcentaje ventas < 500000 (emp 3,6,9,12,15 en Medellin y Bogota): " << porc18 << "%" << endl;

    // ── 19. Venta total en la costa (Barranquilla j=3, Cartagena j=4) ───────
    long long suma19 = 0;
    for (int i = 0; i < 20; i++)
        suma19 += VENTAS[i][3] + VENTAS[i][4];
    cout << "19. Venta total en la costa: " << suma19 << endl;

    // ── 20. Porcentaje ventas <= 3.000.000 en Medellin, Bogota, Cartagena y Pasto
    int cont20 = 0;
    for (int i = 0; i < 20; i++) {
        if (VENTAS[i][0] <= 3000000) cont20++;   // Medellin
        if (VENTAS[i][1] <= 3000000) cont20++;   // Bogota
        if (VENTAS[i][4] <= 3000000) cont20++;   // Cartagena
        if (VENTAS[i][5] <= 3000000) cont20++;   // Pasto
    }
    double porc20 = (double)cont20 / 80 * 100;
    cout << "20. Porcentaje ventas <= 3000000 (Medellin, Bogota, Cartagena, Pasto): " << porc20 << "%" << endl;

    // ── 21. Promedio diagonal: emp0-Medellin, emp1-Bogota, ..., emp5-Pasto ──
    long long suma21 = VENTAS[0][0] + VENTAS[1][1] + VENTAS[2][2]
                     + VENTAS[3][3] + VENTAS[4][4] + VENTAS[5][5];
    double prom21 = (double)suma21 / 6;
    cout << "21. Promedio (emp0-Med, emp1-Bog, emp2-Cali, emp3-Bar, emp4-Car, emp5-Pas): " << prom21 << endl;

    // ── 22. Total Pasto (j=5) emp 0-9 + Cartagena (j=4) emp 10-19 ──────────
    long long suma22 = 0;
    for (int i = 0; i < 10; i++)
        suma22 += VENTAS[i][5];    // Pasto
    for (int i = 10; i < 20; i++)
        suma22 += VENTAS[i][4];   // Cartagena
    cout << "22. Total Pasto (emp 0-9) + Cartagena (emp 10-19): " << suma22 << endl;

    // ── 23. Multiplos de 100.000 en empresa 15 (i=15) ──────────────────────
    int cont23 = 0;
    for (int j = 0; j < 6; j++)
        if (VENTAS[15][j] % 100000 == 0)
            cont23++;
    cout << "23. Multiplos de 100000 en empresa 15: " << cont23 << endl;

    // ── 24. Total Medellin, total Pasto y promedio de ambas ─────────────────
    long long sumaMed = 0, sumaPasto = 0;
    for (int i = 0; i < 20; i++) {
        sumaMed   += VENTAS[i][0];
        sumaPasto += VENTAS[i][5];
    }
    double prom24 = (double)(sumaMed + sumaPasto) / 40;
    cout << "24. Total Medellin: " << sumaMed
         << " | Total Pasto: " << sumaPasto
         << " | Promedio: " << prom24 << endl;

    // ── 25. Copiar a vector, ordenar (burbuja) e imprimir ───────────────────
    int v[120];
    int idx = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 6; j++)
            v[idx++] = VENTAS[i][j];

    for (int i = 0; i < 119; i++)
        for (int j = 0; j < 119 - i; j++)
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }

    cout << "25. Ventas ordenadas ascendente:" << endl;
    for (int i = 0; i < 120; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
