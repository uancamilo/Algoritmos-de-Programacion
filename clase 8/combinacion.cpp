#include <iostream>  // Librería para entrada y salida (cout, cin)
#include <iomanip>   // Librería para formatear la salida (setprecision, fixed)
using namespace std; // Permite usar cout, cin, string, etc. sin escribir std::

int main() {
    cout << fixed << setprecision(2); // Muestra los decimales con exactamente 2 cifras

    // Matriz de notas: cada fila es un estudiante, cada columna es una materia
    //USAR ESTOS DATOS PARA QUEMAR LOS DATOS.
    double NOTAS[5][5] = { {3.2, 4.5, 5.0, 1.8, 2.10},   // Notas de Jorge
    {4.0, 3.0, 4.8, 5.0, 3.2}, {1.0, 0.0, 0.2, 1.0, 4.0}, // Notas de Juan y Carlos
    {2.0, 2.1, 4.9, 4.8, 4.0}, {1.0, 0.5, 5.0, 4.0, 3.0}  // Notas de Pedro y Luis
    };
    string MATERIAS[5]={ "Inglés", "Física", "Ética", "Religión", "Química" }; // Nombres de las 5 materias
    string ESTUDIANTES[5]={"Jorge","Juan", "Carlos", "Pedro", "Luis" };        // Nombres de los 5 estudiantes

    // Arrays para almacenar estadísticas por ESTUDIANTE (recorrido por columnas)
    double sumEst[5], proEst[5], mayEst[5], menEst[5]; // Suma, promedio, mayor y menor nota por estudiante
    int cantEst[5]; // Cantidad de materias aprobadas (nota >= 3) por estudiante

    // Recorre cada COLUMNA (j = estudiante)
    for (int j=0; j<5; j++) {
        double sum=0, may=0, men=5; // Inicializa suma=0, mayor=0, menor=5 (nota máxima posible)
        int cont=0;                 // Contador de materias aprobadas
        for (int i=0; i<5; i++) {          // Recorre cada FILA (i = materia)
            sum+=NOTAS[i][j];              // Acumula la nota del estudiante j en la materia i
            if (NOTAS[i][j] > may)         // Si la nota actual es mayor que la mayor registrada...
                may = NOTAS[i][j];         // ...actualiza la mayor
            if (NOTAS[i][j] < men)         // Si la nota actual es menor que la menor registrada...
                men = NOTAS[i][j];         // ...actualiza la menor
            if (NOTAS[i][j] >= 3)          // Si la nota es mayor o igual a 3 (aprobado)...
                cont++;                    // ...incrementa el contador de aprobadas
        }
        sumEst[j] = sum;       // Guarda la suma total de notas del estudiante j
        proEst[j] = sum / 5;   // Calcula y guarda el promedio (total / 5 materias)
        mayEst[j] = may;       // Guarda la nota más alta del estudiante j
        menEst[j] = men;       // Guarda la nota más baja del estudiante j
        cantEst[j] = cont;     // Guarda cuántas materias aprobó el estudiante j
    }
    cout << "NOMBRE   SUMA  PROM  MAY  MEN CANT" << endl; // Encabezado de la tabla de estudiantes
    for (int i=0; i<5; i++) { // Recorre cada estudiante para imprimir sus estadísticas
        cout << ESTUDIANTES[i] << "\t" << sumEst[i]  << "  " << proEst[i] << "  " << mayEst[i] << "  " << menEst[i] << "  " << cantEst[i] << endl;
    }

    // Arrays para almacenar estadísticas por MATERIA (recorrido por filas)
    double sumMat[5], proMat[5], mayMat[5], menMat[5]; // Suma, promedio, mayor y menor nota por materia
    int cantMat[5]; // Cantidad de estudiantes que aprobaron (nota >= 3) cada materia

    // Recorre cada FILA (i = materia)
    for (int i=0; i<5; i++) {
        double sum=0, may=0, men=5; // Inicializa suma=0, mayor=0, menor=5
        int cont=0;                 // Contador de estudiantes que aprobaron la materia
        for (int j=0; j<5; j++) {          // Recorre cada COLUMNA (j = estudiante)
            sum+=NOTAS[i][j];              // Acumula la nota de la materia i del estudiante j
            if (NOTAS[i][j] > may)         // Si la nota actual es mayor que la mayor registrada...
                may = NOTAS[i][j];         // ...actualiza la mayor
            if (NOTAS[i][j] < men)         // Si la nota actual es menor que la menor registrada...
                men = NOTAS[i][j];         // ...actualiza la menor
            if (NOTAS[i][j] >= 3)          // Si la nota es mayor o igual a 3 (aprobado)...
                cont++;                    // ...incrementa el contador de aprobados
        }
        sumMat[i] = sum;       // Guarda la suma total de notas de la materia i
        proMat[i] = sum / 5;   // Calcula y guarda el promedio (total / 5 estudiantes)
        mayMat[i] = may;       // Guarda la nota más alta de la materia i
        menMat[i] = men;       // Guarda la nota más baja de la materia i
        cantMat[i] = cont;     // Guarda cuántos estudiantes aprobaron la materia i
    }
    cout << "MATERIA  SUMA  PROM  MAY  MEN CANT" << endl; // Encabezado de la tabla de materias
    for (int i=0; i<5; i++) { // Recorre cada materia para imprimir sus estadísticas
        cout << MATERIAS[i] << "\t" << sumMat[i]  << "  " << proMat[i] << "  " << mayMat[i] << "  " << menMat[i] << "  " << cantMat[i] << endl;
    }

    return 0; // El programa termina correctamente
}