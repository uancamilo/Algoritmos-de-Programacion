#include <iostream>
using namespace std;

float calcularDefinitiva(float n1, float n2, float n3, float n4) {
    return (n1 + n2 + n3 + n4) / 4.0;
}

void imprimirEstado(float definitiva) {
    if (definitiva >= 3.0) {
        cout << "Estado: GANO" << endl;
    } else if (definitiva >= 2.0) {
        cout << "Estado: HABILITO" << endl;
    } else {
        cout << "Estado: PERDIO" << endl;
    }
}

int main() {
    int n;
    float n1, n2, n3, n4, definitiva;
    int ganaron = 0, perdieron = 0, habilitaron = 0;

    cout << "=== Notas de Estudiantes ===" << endl;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\n-- Estudiante " << i << " --" << endl;
        cout << "Nota 1: "; cin >> n1;
        cout << "Nota 2: "; cin >> n2;
        cout << "Nota 3: "; cin >> n3;
        cout << "Nota 4: "; cin >> n4;

        definitiva = calcularDefinitiva(n1, n2, n3, n4);
        cout << "Definitiva: " << definitiva << endl;
        imprimirEstado(definitiva);

        if (definitiva >= 3.0) ganaron++;
        else if (definitiva >= 2.0) habilitaron++;
        else perdieron++;
    }

    cout << "\n--- Resumen ---" << endl;
    cout << "Alumnos que ganaron: " << ganaron << endl;
    cout << "Alumnos que habilitaron: " << habilitaron << endl;
    cout << "Alumnos que perdieron: " << perdieron << endl;

    return 0;
}
