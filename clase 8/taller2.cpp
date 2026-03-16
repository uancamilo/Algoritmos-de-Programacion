#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string ESCUDERIA[6] = {"HONDA", "DUCATI", "YAMAHA", "SUZUKI", "KTM", "APRILIA"};

    string PAIS[15] = {
        "QATAR", "ARGENTINA", "EEUU", "SPAIN", "FRANCE", "ITALY",
        "SUIZA", "NETHERLANDS", "GERMANY", "BRAZIL", "AUSTRIA",
        "CHILE", "THAILAND", "JAPAN", "AUSTRALIA"
    };

    int PUNTOS [6][15] = {
        { 9,  5,  8, 25, 10,  4, 24, 16,  5, 10,  2, 23, 13,  9, 19},  // HONDA
        {23,  7, 22, 10, 23, 14, 10, 17, 12,  5, 20, 21, 20, 15, 14},  // DUCATI
        { 0, 19, 14, 20, 16,  5, 10,  0,  6, 11,  0, 11,  0, 13,  1},  // YAMAHA
        {25, 22,  8, 23,  9, 22,  6, 14, 23,  8,  9,  7, 11, 13, 11},  // SUZUKI
        {16,  6,  7,  8, 11,  9, 11,  3, 19, 25, 24, 15, 18, 11, 25},  // KTM
        { 0,  8, 10,  2,  9,  0,  0,  7, 17,  0, 15, 18,  0,  8,  0}   // APRILIA
    };

    // Encabezado
    for (int j = 0; j < 15; j++) {
        cout << PAIS[j];
    }
    cout << endl;

    // Filas
    for (int i = 0; i < 6; i++) {
        cout << ESCUDERIA[i];
        for (int j = 0; j < 15; j++) {
            cout << PUNTOS[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "TOTAL";

    for (int j = 0; j < 15; j++) {          // recorre cada columna (país/carrera)
        int suma = 0;                       // reinicia la suma para cada nueva columna
        for (int i = 0; i < 6; i++) {       // recorre cada fila (escudería)
            suma += PUNTOS[i][j];            // acumula los puntos de todas las escuderías en esa carrera
        }
        cout << suma << "\t";               // imprime el país y su total de puntos
    }

    // ─────────────────────────────────────────────────────────────
    // 1. Cantidad de puntos por ESCUDERÍA
    // ─────────────────────────────────────────────────────────────
    cout << "\n\n--- 1. TOTAL DE PUNTOS POR ESCUDERIA ---\n";
    for (int i = 0; i < 6; i++) {          // recorre cada escudería (fila)
        int suma = 0;                       // reinicia el acumulador para cada nueva escudería
        for (int j = 0; j < 15; j++) {      // recorre cada carrera/país (columna)
            suma += PUNTOS[i][j];           // acumula los puntos de esa escudería en cada carrera
        }
        cout << ESCUDERIA[i] << ": " << suma << "\n";  // imprime el nombre y total de la escudería
    }

    // ─────────────────────────────────────────────────────────────
    // 2. Promedio de puntos por ESCUDERÍA
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 2. PROMEDIO DE PUNTOS POR ESCUDERIA ---\n";
    for (int i = 0; i < 6; i++) {           // recorre cada escudería
        int suma = 0;
        for (int j = 0; j < 15; j++) {      // suma todos los puntos de esa escudería
            suma += PUNTOS[i][j];
        }
        cout << ESCUDERIA[i] << ": " << (double)suma / 15 << "\n";  // divide entre 15 carreras
    }

    // ─────────────────────────────────────────────────────────────
    // 3. Puntaje mayor por ESCUDERÍA
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 3. PUNTAJE MAYOR POR ESCUDERIA ---\n";
    for (int i = 0; i < 6; i++) {           // recorre cada escudería
        int mayor = PUNTOS[i][0];           // asume el primer valor como el mayor
        for (int j = 1; j < 15; j++) {      // compara con el resto de carreras
            if (PUNTOS[i][j] > mayor) {
                mayor = PUNTOS[i][j];       // actualiza si encuentra un valor más grande
            }
        }
        cout << ESCUDERIA[i] << ": " << mayor << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 4. Puntaje menor por ESCUDERÍA
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 4. PUNTAJE MENOR POR ESCUDERIA ---\n";
    for (int i = 0; i < 6; i++) {           // recorre cada escudería
        int menor = PUNTOS[i][0];           // asume el primer valor como el menor
        for (int j = 1; j < 15; j++) {      // compara con el resto de carreras
            if (PUNTOS[i][j] < menor) {
                menor = PUNTOS[i][j];       // actualiza si encuentra un valor más pequeño
            }
        }
        cout << ESCUDERIA[i] << ": " << menor << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 5. Cantidad de carreras sin puntos (0) por ESCUDERÍA
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 5. CARRERAS SIN PUNTOS POR ESCUDERIA ---\n";
    for (int i = 0; i < 6; i++) {           // recorre cada escudería
        int ceros = 0;                      // contador de ceros
        for (int j = 0; j < 15; j++) {      // recorre cada carrera
            if (PUNTOS[i][j] == 0) {
                ceros++;                    // incrementa si no marcó puntos
            }
        }
        cout << ESCUDERIA[i] << ": " << ceros << " carreras sin puntos\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 6. Cantidad de puntos por PAÍS
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 6. TOTAL DE PUNTOS POR PAIS ---\n";
    for (int j = 0; j < 15; j++) {          // recorre cada país (columna)
        int suma = 0;
        for (int i = 0; i < 6; i++) {       // suma puntos de todas las escuderías en ese país
            suma += PUNTOS[i][j];
        }
        cout << PAIS[j] << ": " << suma << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 7. Promedio de puntos por PAÍS
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 7. PROMEDIO DE PUNTOS POR PAIS ---\n";
    for (int j = 0; j < 15; j++) {          // recorre cada país
        int suma = 0;
        for (int i = 0; i < 6; i++) {       // suma puntos de todas las escuderías
            suma += PUNTOS[i][j];
        }
        cout << PAIS[j] << ": " << (double)suma / 6 << "\n";  // divide entre 6 escuderías
    }

    // ─────────────────────────────────────────────────────────────
    // 8. Puntaje mayor por PAÍS
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 8. PUNTAJE MAYOR POR PAIS ---\n";
    for (int j = 0; j < 15; j++) {          // recorre cada país
        int mayor = PUNTOS[0][j];           // asume la primera escudería como la mayor
        for (int i = 1; i < 6; i++) {       // compara con el resto de escuderías
            if (PUNTOS[i][j] > mayor) {
                mayor = PUNTOS[i][j];       // actualiza si encuentra un valor más grande
            }
        }
        cout << PAIS[j] << ": " << mayor << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 9. Puntaje menor por PAÍS
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 9. PUNTAJE MENOR POR PAIS ---\n";
    for (int j = 0; j < 15; j++) {          // recorre cada país
        int menor = PUNTOS[0][j];           // asume la primera escudería como la menor
        for (int i = 1; i < 6; i++) {       // compara con el resto de escuderías
            if (PUNTOS[i][j] < menor) {
                menor = PUNTOS[i][j];       // actualiza si encuentra un valor más pequeño
            }
        }
        cout << PAIS[j] << ": " << menor << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 10. Puntos impares en posiciones pares por PAÍS
    //     "posición par" = índice de fila par (i = 0, 2, 4)
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 10. PUNTOS IMPARES EN POSICIONES PARES POR PAIS ---\n";
    for (int j = 0; j < 15; j++) {          // recorre cada país (columna)
        int conteo = 0;
        for (int i = 0; i < 6; i++) {       // recorre cada escudería (fila)
            if (i % 2 == 0 && PUNTOS[i][j] % 2 != 0) {  // posición par Y puntos impares
                conteo++;
            }
        }
        cout << PAIS[j] << ": " << conteo << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 11. Buscar un PAÍS e imprimir toda su información
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 11. BUSCAR PAIS ---\n";
    cout << "Ingrese el nombre del pais: ";
    string buscar;
    cin >> buscar;

    int indicePais = -1;
    for (int j = 0; j < 15; j++) {          // busca el país en el arreglo
        if (PAIS[j] == buscar) {
            indicePais = j;                 // guarda el índice si lo encuentra
        }
    }

    if (indicePais == -1) {
        cout << "Pais no encontrado.\n";
    } else {
        cout << "Informacion de " << PAIS[indicePais] << ":\n";
        int suma = 0;
        int mayor = PUNTOS[0][indicePais];
        int menor = PUNTOS[0][indicePais];
        for (int i = 0; i < 6; i++) {       // recorre cada escudería para ese país
            cout << "  " << ESCUDERIA[i] << ": " << PUNTOS[i][indicePais] << "\n";
            suma += PUNTOS[i][indicePais];
            if (PUNTOS[i][indicePais] > mayor) mayor = PUNTOS[i][indicePais];
            if (PUNTOS[i][indicePais] < menor) menor = PUNTOS[i][indicePais];
        }
        cout << "  Total: " << suma << "\n";
        cout << "  Promedio: " << (double)suma / 6 << "\n";
        cout << "  Mayor: " << mayor << "\n";
        cout << "  Menor: " << menor << "\n";
    }

    // ─────────────────────────────────────────────────────────────
    // 12. Buscar una ESCUDERÍA e imprimir toda su información
    // ─────────────────────────────────────────────────────────────
    cout << "\n--- 12. BUSCAR ESCUDERIA ---\n";
    cout << "Ingrese el nombre de la escuderia: ";
    string buscar;
    cin >> buscar;

    int indiceEsc = -1;
    for (int i = 0; i < 6; i++) {           // busca la escudería en el arreglo
        if (ESCUDERIA[i] == buscar) {
            indiceEsc = i;                  // guarda el índice si la encuentra
        }
    }

    if (indiceEsc == -1) {
        cout << "Escuderia no encontrada.\n";
    } else {
        cout << "Informacion de " << ESCUDERIA[indiceEsc] << ":\n";
        int suma = 0;
        int mayor = PUNTOS[indiceEsc][0];
        int menor = PUNTOS[indiceEsc][0];
        int ceros = 0;
        for (int j = 0; j < 15; j++) {      // recorre cada carrera de esa escudería
            cout << "  " << PAIS[j] << ": " << PUNTOS[indiceEsc][j] << "\n";
            suma += PUNTOS[indiceEsc][j];
            if (PUNTOS[indiceEsc][j] > mayor) mayor = PUNTOS[indiceEsc][j];
            if (PUNTOS[indiceEsc][j] < menor) menor = PUNTOS[indiceEsc][j];
            if (PUNTOS[indiceEsc][j] == 0) ceros++;
        }
        cout << "  Total: " << suma << "\n";
        cout << "  Promedio: " << (double)suma / 15 << "\n";
        cout << "  Mayor: " << mayor << "\n";
        cout << "  Menor: " << menor << "\n";
        cout << "  Carreras sin puntos: " << ceros << "\n";
    }

    return 0;
}