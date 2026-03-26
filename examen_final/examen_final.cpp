#include <iostream>
#include <iomanip>

using namespace std;

// Llena una matriz de enteros con valores aleatorios dentro de un rango dado.
void LlenarMatriz(int**, int, int, int);
// Imprime en pantalla una matriz de enteros con un titulo descriptivo.
void ImprimirMatriz(int**, int, string);
// Asigna manualmente datos de prueba a las matrices de codigos y cantidades.
void QuemarDatos(int**, int**);
// Calcula el valor unitario y el total vendido para cada posicion de las matrices.
void LlenarMatrices(int**, int**, float**, float**, int);
// Imprime en pantalla una matriz de numeros decimales con un titulo descriptivo.
void ImprimirMatrizF(float**, int, string);
// Resuelve los puntos 5 y 6: conteo y porcentaje de aparicion de cada codigo.
void Punto5_6(int**, int, int);

// Metodo principal del programa.
// Solicita la cantidad de departamentos, reserva memoria para las matrices,
// carga los datos base y ejecuta los puntos implementados del examen.
int main()
{
    // CONFIGURACIONES DE PRECISION, ALEATORIOS E IDIOMA ESPAÑOL
    // LECTURA DE LA DIMENSIÓN, DECLARACIÓN Y LLENADO DE ARREGLOS
    cout << fixed << setprecision(1);
    srand(time(NULL));

    int d;
    cout << "Digite la cantidad de departamentos (en este caso 20): ";
    cin >> d;

    string* departamentos = new string[d]{
        "ANTIOQUIA", "ARAUCA", "ATLÁNTICO", "BOGOTÁ", "BOLÍVAR",
        "BOYACÁ", "CALDAS", "CAUCA", "CESAR", "CUNDINAMARCA", "HUILA",
        "LA GUAJIRA", "MAGDALENA", "META", "NARIÑO", "QUINDÍO",
        "RISARALDA", "SANTANDER", "SUCRE", "TOLIMA "
    };

    string* meses = new string[12]{
        "ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO",
        "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE",
    };

    // DECLARAR MATRICES CODIGOS, CANTIDADES, VALORES Y TOTALES
    int** CODIGOS = new int*[d];
    int** CANTIDADES = new int*[d];
    float** VALORES = new float*[d];
    float** TOTALES = new float*[d];

    for (int i = 0; i < d; i++)
    {
        CODIGOS[i] = new int[12];
        CANTIDADES[i] = new int[12];
        VALORES[i] = new float[12];
        TOTALES[i] = new float[12];
    }

    // PUNTO 1-Llenar e imprimir MATRIZ CODIGOS
    // LlenarMatriz(CODIGOS, d, 101, 105);
    // ImprimirMatriz(CODIGOS, d, "CODIGOS");

    // PUNTO 2-Llenar e imprimir MATRIZ CANTIDADES
    // LlenarMatriz(CANTIDADES, d, 1, 30);
    // ImprimirMatriz(CANTIDADES, d, "CANTIDADES");

    // Método Quemar Datos
    QuemarDatos(CODIGOS, CANTIDADES);
    ImprimirMatriz(CODIGOS, d, "CODIGOS");
    ImprimirMatriz(CANTIDADES, d, "CANTIDADES");

    // PUNTO 3-Llenar MATRIZ VALORES
    // PUNTO 4-Llenar MATRIZ TOTALES
    LlenarMatrices(CODIGOS, CANTIDADES, VALORES, TOTALES, d);
    ImprimirMatrizF(VALORES, d, "VALORES");
    ImprimirMatrizF(TOTALES, d, "TOTALES");

    // PUNTO 5
    Punto5_6(CODIGOS, d, 5);
    Punto5_6(CODIGOS, d, 6);

    // PUNTO 6

    // PUNTO 7

    // PUNTO 8

    // PUNTO 9

    // PUNTO 10

    // PUNTO 11

    // PUNTO 12

    // PUNTO 13

    // PUNTO 14

    // PUNTO DEL 15 y 16

    // PUNTO DEL 17 al 28

    // PUNTO 29

    // PUNTO 30
}

// Recorre una matriz de d filas por 12 columnas y la llena con numeros
// aleatorios entre linf y lsup, ambos inclusive.
void LlenarMatriz(int** matriz, int d, int linf, int lsup)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = linf + rand() % (lsup - linf + 1);
        }
    }
}

// Muestra una matriz de enteros en consola.
// El parametro mensaje se usa como encabezado para identificar la matriz.
void ImprimirMatriz(int** matriz, int d, string mensaje)
{
    cout << "\nMATRIZ " << mensaje << endl;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Muestra una matriz de tipo float en consola.
// Se utiliza para imprimir las matrices de valores y totales.
void ImprimirMatrizF(float** matriz, int d, string mensaje)
{
    cout << "\nMATRIZ " << mensaje << endl;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Carga datos fijos de prueba en las matrices de codigos y cantidades.
// Esto evita depender de valores aleatorios mientras se validan los resultados.
void QuemarDatos(int** codigos, int** cantidades)
{
#pragma region MyRegion
    codigos[0][0] = 101; codigos[0][1] = 103; codigos[0][2] = 105; codigos[0][3] = 101; codigos[0][4] = 103; codigos[0][5] = 101; codigos[0][6] = 103; codigos[0][7] = 103; codigos[0][8] = 104; codigos[0][9] = 105; codigos[0][10] = 105; codigos[0][11] = 105;
    codigos[1][0] = 105; codigos[1][1] = 103; codigos[1][2] = 103; codigos[1][3] = 102; codigos[1][4] = 102; codigos[1][5] = 103; codigos[1][6] = 104; codigos[1][7] = 105; codigos[1][8] = 102; codigos[1][9] = 103; codigos[1][10] = 105; codigos[1][11] = 104;
    codigos[2][0] = 104; codigos[2][1] = 103; codigos[2][2] = 104; codigos[2][3] = 102; codigos[2][4] = 105; codigos[2][5] = 102; codigos[2][6] = 102; codigos[2][7] = 102; codigos[2][8] = 101; codigos[2][9] = 102; codigos[2][10] = 101; codigos[2][11] = 103;
    codigos[3][0] = 104; codigos[3][1] = 105; codigos[3][2] = 101; codigos[3][3] = 103; codigos[3][4] = 102; codigos[3][5] = 103; codigos[3][6] = 102; codigos[3][7] = 105; codigos[3][8] = 104; codigos[3][9] = 105; codigos[3][10] = 104; codigos[3][11] = 105;
    codigos[4][0] = 103; codigos[4][1] = 102; codigos[4][2] = 102; codigos[4][3] = 102; codigos[4][4] = 103; codigos[4][5] = 104; codigos[4][6] = 101; codigos[4][7] = 101; codigos[4][8] = 102; codigos[4][9] = 105; codigos[4][10] = 103; codigos[4][11] = 102;
    codigos[5][0] = 103; codigos[5][1] = 102; codigos[5][2] = 105; codigos[5][3] = 104; codigos[5][4] = 101; codigos[5][5] = 102; codigos[5][6] = 105; codigos[5][7] = 105; codigos[5][8] = 103; codigos[5][9] = 102; codigos[5][10] = 102; codigos[5][11] = 103;
    codigos[6][0] = 103; codigos[6][1] = 103; codigos[6][2] = 104; codigos[6][3] = 105; codigos[6][4] = 102; codigos[6][5] = 103; codigos[6][6] = 104; codigos[6][7] = 103; codigos[6][8] = 104; codigos[6][9] = 102; codigos[6][10] = 103; codigos[6][11] = 104;
    codigos[7][0] = 103; codigos[7][1] = 102; codigos[7][2] = 101; codigos[7][3] = 104; codigos[7][4] = 103; codigos[7][5] = 105; codigos[7][6] = 104; codigos[7][7] = 102; codigos[7][8] = 103; codigos[7][9] = 103; codigos[7][10] = 103; codigos[7][11] = 103;
    codigos[8][0] = 102; codigos[8][1] = 102; codigos[8][2] = 104; codigos[8][3] = 104; codigos[8][4] = 101; codigos[8][5] = 103; codigos[8][6] = 104; codigos[8][7] = 101; codigos[8][8] = 104; codigos[8][9] = 103; codigos[8][10] = 103; codigos[8][11] = 101;
    codigos[9][0] = 103; codigos[9][1] = 103; codigos[9][2] = 104; codigos[9][3] = 105; codigos[9][4] = 102; codigos[9][5] = 104; codigos[9][6] = 104; codigos[9][7] = 104; codigos[9][8] = 105; codigos[9][9] = 103; codigos[9][10] = 104; codigos[9][11] = 101;
    codigos[10][0] = 101; codigos[10][1] = 103; codigos[10][2] = 104; codigos[10][3] = 102; codigos[10][4] = 102; codigos[10][5] = 103; codigos[10][6] = 105; codigos[10][7] = 102; codigos[10][8] = 103; codigos[10][9] = 104; codigos[10][10] = 104; codigos[10][11] = 105;
    codigos[11][0] = 102; codigos[11][1] = 103; codigos[11][2] = 104; codigos[11][3] = 102; codigos[11][4] = 105; codigos[11][5] = 101; codigos[11][6] = 103; codigos[11][7] = 104; codigos[11][8] = 103; codigos[11][9] = 105; codigos[11][10] = 103; codigos[11][11] = 105;
    codigos[12][0] = 103; codigos[12][1] = 104; codigos[12][2] = 102; codigos[12][3] = 104; codigos[12][4] = 102; codigos[12][5] = 105; codigos[12][6] = 104; codigos[12][7] = 103; codigos[12][8] = 103; codigos[12][9] = 105; codigos[12][10] = 101; codigos[12][11] = 105;
    codigos[13][0] = 103; codigos[13][1] = 101; codigos[13][2] = 101; codigos[13][3] = 104; codigos[13][4] = 104; codigos[13][5] = 102; codigos[13][6] = 101; codigos[13][7] = 102; codigos[13][8] = 104; codigos[13][9] = 102; codigos[13][10] = 103; codigos[13][11] = 105;
    codigos[14][0] = 102; codigos[14][1] = 104; codigos[14][2] = 104; codigos[14][3] = 102; codigos[14][4] = 103; codigos[14][5] = 101; codigos[14][6] = 105; codigos[14][7] = 102; codigos[14][8] = 105; codigos[14][9] = 101; codigos[14][10] = 104; codigos[14][11] = 104;
    codigos[15][0] = 105; codigos[15][1] = 103; codigos[15][2] = 103; codigos[15][3] = 103; codigos[15][4] = 103; codigos[15][5] = 101; codigos[15][6] = 105; codigos[15][7] = 101; codigos[15][8] = 103; codigos[15][9] = 103; codigos[15][10] = 104; codigos[15][11] = 101;
    codigos[16][0] = 102; codigos[16][1] = 101; codigos[16][2] = 103; codigos[16][3] = 101; codigos[16][4] = 105; codigos[16][5] = 105; codigos[16][6] = 103; codigos[16][7] = 103; codigos[16][8] = 105; codigos[16][9] = 103; codigos[16][10] = 102; codigos[16][11] = 104;
    codigos[17][0] = 103; codigos[17][1] = 105; codigos[17][2] = 102; codigos[17][3] = 102; codigos[17][4] = 104; codigos[17][5] = 104; codigos[17][6] = 101; codigos[17][7] = 105; codigos[17][8] = 102; codigos[17][9] = 104; codigos[17][10] = 105; codigos[17][11] = 105;
    codigos[18][0] = 105; codigos[18][1] = 102; codigos[18][2] = 101; codigos[18][3] = 103; codigos[18][4] = 101; codigos[18][5] = 103; codigos[18][6] = 102; codigos[18][7] = 104; codigos[18][8] = 101; codigos[18][9] = 102; codigos[18][10] = 103; codigos[18][11] = 103;
    codigos[19][0] = 103; codigos[19][1] = 103; codigos[19][2] = 105; codigos[19][3] = 105; codigos[19][4] = 104; codigos[19][5] = 103; codigos[19][6] = 102; codigos[19][7] = 104; codigos[19][8] = 102; codigos[19][9] = 104; codigos[19][10] = 102; codigos[19][11] = 104;

    cantidades[0][0] = 0; cantidades[0][1] = 23; cantidades[0][2] = 14; cantidades[0][3] = 0; cantidades[0][4] = 17; cantidades[0][5] = 0; cantidades[0][6] = 12; cantidades[0][7] = 26; cantidades[0][8] = 22; cantidades[0][9] = 15; cantidades[0][10] = 19; cantidades[0][11] = 6;
    cantidades[1][0] = 30; cantidades[1][1] = 26; cantidades[1][2] = 14; cantidades[1][3] = 28; cantidades[1][4] = 26; cantidades[1][5] = 10; cantidades[1][6] = 8; cantidades[1][7] = 6; cantidades[1][8] = 18; cantidades[1][9] = 11; cantidades[1][10] = 23; cantidades[1][11] = 6;
    cantidades[2][0] = 24; cantidades[2][1] = 23; cantidades[2][2] = 25; cantidades[2][3] = 1; cantidades[2][4] = 25; cantidades[2][5] = 4; cantidades[2][6] = 3; cantidades[2][7] = 23; cantidades[2][8] = 0; cantidades[2][9] = 4; cantidades[2][10] = 0; cantidades[2][11] = 14;
    cantidades[3][0] = 18; cantidades[3][1] = 21; cantidades[3][2] = 0; cantidades[3][3] = 17; cantidades[3][4] = 10; cantidades[3][5] = 28; cantidades[3][6] = 20; cantidades[3][7] = 17; cantidades[3][8] = 4; cantidades[3][9] = 5; cantidades[3][10] = 2; cantidades[3][11] = 2;
    cantidades[4][0] = 25; cantidades[4][1] = 8; cantidades[4][2] = 12; cantidades[4][3] = 12; cantidades[4][4] = 11; cantidades[4][5] = 27; cantidades[4][6] = 0; cantidades[4][7] = 0; cantidades[4][8] = 14; cantidades[4][9] = 7; cantidades[4][10] = 30; cantidades[4][11] = 4;
    cantidades[5][0] = 5; cantidades[5][1] = 12; cantidades[5][2] = 2; cantidades[5][3] = 9; cantidades[5][4] = 0; cantidades[5][5] = 28; cantidades[5][6] = 19; cantidades[5][7] = 3; cantidades[5][8] = 9; cantidades[5][9] = 9; cantidades[5][10] = 20; cantidades[5][11] = 26;
    cantidades[6][0] = 18; cantidades[6][1] = 16; cantidades[6][2] = 1; cantidades[6][3] = 1; cantidades[6][4] = 7; cantidades[6][5] = 24; cantidades[6][6] = 14; cantidades[6][7] = 28; cantidades[6][8] = 13; cantidades[6][9] = 18; cantidades[6][10] = 27; cantidades[6][11] = 18;
    cantidades[7][0] = 11; cantidades[7][1] = 23; cantidades[7][2] = 0; cantidades[7][3] = 30; cantidades[7][4] = 24; cantidades[7][5] = 27; cantidades[7][6] = 19; cantidades[7][7] = 15; cantidades[7][8] = 8; cantidades[7][9] = 7; cantidades[7][10] = 29; cantidades[7][11] = 14;
    cantidades[8][0] = 30; cantidades[8][1] = 23; cantidades[8][2] = 11; cantidades[8][3] = 10; cantidades[8][4] = 0; cantidades[8][5] = 29; cantidades[8][6] = 19; cantidades[8][7] = 0; cantidades[8][8] = 10; cantidades[8][9] = 4; cantidades[8][10] = 18; cantidades[8][11] = 0;
    cantidades[9][0] = 25; cantidades[9][1] = 21; cantidades[9][2] = 25; cantidades[9][3] = 30; cantidades[9][4] = 16; cantidades[9][5] = 3; cantidades[9][6] = 1; cantidades[9][7] = 25; cantidades[9][8] = 22; cantidades[9][9] = 29; cantidades[9][10] = 1; cantidades[9][11] = 0;
    cantidades[10][0] = 0; cantidades[10][1] = 25; cantidades[10][2] = 27; cantidades[10][3] = 23; cantidades[10][4] = 8; cantidades[10][5] = 6; cantidades[10][6] = 29; cantidades[10][7] = 4; cantidades[10][8] = 29; cantidades[10][9] = 16; cantidades[10][10] = 26; cantidades[10][11] = 26;
    cantidades[11][0] = 11; cantidades[11][1] = 30; cantidades[11][2] = 15; cantidades[11][3] = 27; cantidades[11][4] = 9; cantidades[11][5] = 0; cantidades[11][6] = 26; cantidades[11][7] = 16; cantidades[11][8] = 27; cantidades[11][9] = 17; cantidades[11][10] = 3; cantidades[11][11] = 19;
    cantidades[12][0] = 16; cantidades[12][1] = 3; cantidades[12][2] = 5; cantidades[12][3] = 4; cantidades[12][4] = 5; cantidades[12][5] = 5; cantidades[12][6] = 11; cantidades[12][7] = 18; cantidades[12][8] = 9; cantidades[12][9] = 1; cantidades[12][10] = 0; cantidades[12][11] = 6;
    cantidades[13][0] = 30; cantidades[13][1] = 0; cantidades[13][2] = 0; cantidades[13][3] = 9; cantidades[13][4] = 13; cantidades[13][5] = 23; cantidades[13][6] = 0; cantidades[13][7] = 14; cantidades[13][8] = 18; cantidades[13][9] = 18; cantidades[13][10] = 21; cantidades[13][11] = 6;
    cantidades[14][0] = 26; cantidades[14][1] = 24; cantidades[14][2] = 5; cantidades[14][3] = 15; cantidades[14][4] = 22; cantidades[14][5] = 0; cantidades[14][6] = 7; cantidades[14][7] = 2; cantidades[14][8] = 29; cantidades[14][9] = 0; cantidades[14][10] = 5; cantidades[14][11] = 9;
    cantidades[15][0] = 22; cantidades[15][1] = 8; cantidades[15][2] = 2; cantidades[15][3] = 11; cantidades[15][4] = 8; cantidades[15][5] = 0; cantidades[15][6] = 12; cantidades[15][7] = 0; cantidades[15][8] = 9; cantidades[15][9] = 7; cantidades[15][10] = 7; cantidades[15][11] = 0;
    cantidades[16][0] = 30; cantidades[16][1] = 0; cantidades[16][2] = 14; cantidades[16][3] = 0; cantidades[16][4] = 5; cantidades[16][5] = 16; cantidades[16][6] = 21; cantidades[16][7] = 18; cantidades[16][8] = 14; cantidades[16][9] = 18; cantidades[16][10] = 25; cantidades[16][11] = 6;
    cantidades[17][0] = 21; cantidades[17][1] = 26; cantidades[17][2] = 23; cantidades[17][3] = 30; cantidades[17][4] = 8; cantidades[17][5] = 30; cantidades[17][6] = 0; cantidades[17][7] = 2; cantidades[17][8] = 1; cantidades[17][9] = 24; cantidades[17][10] = 14; cantidades[17][11] = 12;
    cantidades[18][0] = 3; cantidades[18][1] = 17; cantidades[18][2] = 0; cantidades[18][3] = 21; cantidades[18][4] = 0; cantidades[18][5] = 24; cantidades[18][6] = 10; cantidades[18][7] = 18; cantidades[18][8] = 0; cantidades[18][9] = 3; cantidades[18][10] = 19; cantidades[18][11] = 1;
    cantidades[19][0] = 10; cantidades[19][1] = 2; cantidades[19][2] = 25; cantidades[19][3] = 7; cantidades[19][4] = 6; cantidades[19][5] = 18; cantidades[19][6] = 7; cantidades[19][7] = 19; cantidades[19][8] = 21; cantidades[19][9] = 1; cantidades[19][10] = 12; cantidades[19][11] = 1;
#pragma endregion
}

// Asigna el precio unitario segun el codigo de producto y calcula el total
// multiplicando la cantidad vendida por ese valor en cada posicion.
void LlenarMatrices(int** cod, int** cant, float** val, float** tot, int d)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            switch (cod[i][j])
            {
                case 101: val[i][j] = 0; break;
                case 102: val[i][j] = 70000; break;
                case 103: val[i][j] = 30000; break;
                case 104: val[i][j] = 58000; break;
                case 105: val[i][j] = 99000; break;
            }
            tot[i][j] = cant[i][j] * val[i][j];
        }
    }
}

// Cuenta cuantas veces aparece cada codigo en toda la matriz.
// Si n vale 5, imprime las cantidades por codigo.
// Si n vale 6, imprime el porcentaje de participacion de cada codigo.
void Punto5_6(int** cod, int d, int n)
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            switch (cod[i][j])
            {
                case 101: c1++; break;
                case 102: c2++; break;
                case 103: c3++; break;
                case 104: c4++; break;
                case 105: c5++; break;
            }
        }
    }

    if (n == 5)
    {
        cout << "\nPunto 5. Cantidades por codigo" << endl;
        cout << "Codigo 101: " << c1 << endl;
        cout << "Codigo 102: " << c2 << endl;
        cout << "Codigo 103: " << c3 << endl;
        cout << "Codigo 104: " << c4 << endl;
        cout << "Codigo 105: " << c5 << endl;
    }
    else if (n == 6)
    {
        cout << "\nPunto 6. Porcentajes por codigo" << endl;
        cout << "Porcentaje Codigo 101: " << (float)c1 / (d * 12) * 100 << "%" << endl;
        cout << "Porcentaje Codigo 102: " << (float)c2 / (d * 12) * 100 << "%" << endl;
        cout << "Porcentaje Codigo 103: " << (float)c3 / (d * 12) * 100 << "%" << endl;
        cout << "Porcentaje Codigo 104: " << (float)c4 / (d * 12) * 100 << "%" << endl;
        cout << "Porcentaje Codigo 105: " << (float)c5 / (d * 12) * 100 << "%" << endl;
    }
}
