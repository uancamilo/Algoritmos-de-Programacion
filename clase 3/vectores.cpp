// Libreria estandar de entrada/salida en C++
#include <iostream>
// Permite usar cout, cin, endl sin escribir std:: cada vez
using namespace std;



int main() {
    // Se declara un arreglo (vector) de 8 enteros para almacenar edades
    int ed[8];

    // Ciclo que recorre las 8 posiciones del arreglo (indices 0 a 7)
    for (int i = 0; i < 8; i++) {
        // Se pide al usuario ingresar la edad de cada persona (muestra 1 a 8)
        cout << "Ingrese la edad de la persona " << i + 1 << ": ";
        // Se lee el valor ingresado y se guarda en la posicion i del arreglo
        cin >> ed[i];

        // Se verifica si la edad es mayor o igual a 18
        if (ed[i] >=18)
        {
            cout << "Mayor de edad" << endl;
        }
        // Si la edad es menor a 18
        else
        {
            cout << "Menor de edad" << endl;
        }

    }

    int *vector = new int[8]; // Se crea un nuevo arreglo dinámico de 8 enteros
    
    // Se declara un arreglo de doubles con valores iniciales (tamano 4, inferido por el compilador)
    double vector2[] = {8.4, 3.1, 4.2, 6.8};

    // ADVERTENCIA: count no esta inicializado, su valor es basura (comportamiento indefinido)
    // Deberia inicializarse, por ejemplo: int count = 8;
    int count;

    // Ciclo que pide al usuario llenar el arreglo dinamico "vector"
    for (int i = 0; i < count; i++)
    {
        cout << "ingrese vector["<<i<<"]:";
        cin >> vector[i];
    }

    // Inicializa la semilla para numeros aleatorios usando el tiempo actual
    srand(time(NULL));
    // Ciclo que llena el arreglo con numeros aleatorios entre 0 y 99
    for (int i = 0; i < count; i++){
        vector[i] = rand() % 100; // rand() % 100 genera un numero en el rango [0, 99]
    };

    // Inicializa la semilla nuevamente (no es necesario hacerlo dos veces)
    srand(time(NULL));
    // Ciclo que llena el arreglo con numeros aleatorios entre 15 y 60
    for (int i = 0; i < count; i++){
        vector[i] = 15 + rand() % 46; // 15 + (0 a 45) = rango [15, 60]
    };

    // ==========================================================================
    // EJEMPLO: Llenar un vector con una sucesion
    // Sucesion de numeros pares: 2, 4, 6, 8, 10, 12, 14, 16
    // Formula general: valor = (i + 1) * 2
    // ==========================================================================
    int pares[8];
    for (int i = 0; i < 8; i++){
        pares[i] = (i + 1) * 2; // i=0 -> 2, i=1 -> 4, i=2 -> 6 ...
    }

    // Imprimir el vector con la sucesion
    cout << "Sucesion de pares: ";
    for (int i = 0; i < 8; i++){
        cout << pares[i] << " ";
    }
    cout << endl;

    // Declar a inicializar un vector entero con 8 elementos y los vamos a imprimir de forma horizontal 

        int vector3[8] = {1, 2, 3, 4, 5, 6, 7, 8};
        cout << "Vector3: ";
        for (int i = 0; i < 8; i++){
            cout << vector3[i] << " ";
        }
        cout << endl;

        //crear un segundo vector de n posiciones y vamos a leer la informacion imprimir vector posicion y elemento de forma vertical 

        int n;
        cout << "Ingrese el tamaño del vector: ";
        cin >> n;

        double *vector4 = new double[n];
        for (int i = 0; i < n; i++) {
            cout << "Ingrese el elemento " << i << ": ";
            cin >> vector4[i];
        }
        //declar un vector de n posiciones con numeros aleatorios entre 0 y 100 e imprimirlo de forma vertical
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            vector4[i] = rand() % 101; // numeros entre 0 y

        // llenar un cuarto vector con la sucesion de numeros: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
        // formula general: valor = (i + 1) * 10

        int sucesion[10];
        for (int i = 0; i < 10; i++) {
            sucesion[i] = (i + 1) * 10; // i=0 -> 10, i=1 -> 20, i=2 -> 30 ...
        }

        //impre

}