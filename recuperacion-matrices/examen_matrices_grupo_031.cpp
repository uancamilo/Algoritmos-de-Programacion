#include<iostream>
#include<iomanip>
using namespace std;

const string NO = "NO";
const string SI = "SI";

int main() {
	cout << fixed << setprecision(2);

	int N;
	cout << "Ingrese la cantidad de tiendas [N]: ";
	cin >> N;

	int PRODUCCION[12][N];

	PRODUCCION[0][0] = 1166;	PRODUCCION[0][1] = 5987;	PRODUCCION[0][2] = 7739;	PRODUCCION[0][3] = 6018;	PRODUCCION[0][4] = 7360;	PRODUCCION[0][5] = 761;		PRODUCCION[0][6] = 222;		PRODUCCION[0][7] = 2765;
	PRODUCCION[1][0] = 7691;	PRODUCCION[1][1] = 102;		PRODUCCION[1][2] = 4640;	PRODUCCION[1][3] = 3682;	PRODUCCION[1][4] = 7098;	PRODUCCION[1][5] = 562;		PRODUCCION[1][6] = 4841;	PRODUCCION[1][7] = 4019;
	PRODUCCION[2][0] = 3987;	PRODUCCION[2][1] = 1493;	PRODUCCION[2][2] = 5671;	PRODUCCION[2][3] = 3029;	PRODUCCION[2][4] = 3558;	PRODUCCION[2][5] = 2512;	PRODUCCION[2][6] = 714;		PRODUCCION[2][7] = 1754;
	PRODUCCION[3][0] = 553;		PRODUCCION[3][1] = 2712;	PRODUCCION[3][2] = 5589;	PRODUCCION[3][3] = 7016;	PRODUCCION[3][4] = 4807;	PRODUCCION[3][5] = 4679;	PRODUCCION[3][6] = 390;		PRODUCCION[3][7] = 826;
	PRODUCCION[4][0] = 1251;	PRODUCCION[4][1] = 1790;	PRODUCCION[4][2] = 4325;	PRODUCCION[4][3] = 2853;	PRODUCCION[4][4] = 1533;	PRODUCCION[4][5] = 6113;	PRODUCCION[4][6] = 989;		PRODUCCION[4][7] = 5286;
	PRODUCCION[5][0] = 4093;	PRODUCCION[5][1] = 2926;	PRODUCCION[5][2] = 6434;	PRODUCCION[5][3] = 1116;	PRODUCCION[5][4] = 745;		PRODUCCION[5][5] = 5103;	PRODUCCION[5][6] = 3601;	PRODUCCION[5][7] = 2258;
	PRODUCCION[6][0] = 5016;	PRODUCCION[6][1] = 6263;	PRODUCCION[6][2] = 6679;	PRODUCCION[6][3] = 2504;	PRODUCCION[6][4] = 7856;	PRODUCCION[6][5] = 676;		PRODUCCION[6][6] = 5563;	PRODUCCION[6][7] = 436;
	PRODUCCION[7][0] = 6507;	PRODUCCION[7][1] = 3712;	PRODUCCION[7][2] = 5050;	PRODUCCION[7][3] = 3997;	PRODUCCION[7][4] = 7931;	PRODUCCION[7][5] = 1009;	PRODUCCION[7][6] = 2753;	PRODUCCION[7][7] = 2553;
	PRODUCCION[8][0] = 3025;	PRODUCCION[8][1] = 310;		PRODUCCION[8][2] = 5300;	PRODUCCION[8][3] = 7814;	PRODUCCION[8][4] = 3219;	PRODUCCION[8][5] = 3649;	PRODUCCION[8][6] = 1342;	PRODUCCION[8][7] = 1229;
	PRODUCCION[9][0] = 4080;	PRODUCCION[9][1] = 6731;	PRODUCCION[9][2] = 1258;	PRODUCCION[9][3] = 4638;	PRODUCCION[9][4] = 901;		PRODUCCION[9][5] = 425;		PRODUCCION[9][6] = 3881;	PRODUCCION[9][7] = 5734;
	PRODUCCION[10][0] = 7428;	PRODUCCION[10][1] = 4917;	PRODUCCION[10][2] = 7122;	PRODUCCION[10][3] = 1041;	PRODUCCION[10][4] = 5935;	PRODUCCION[10][5] = 6687;	PRODUCCION[10][6] = 5815;	PRODUCCION[10][7] = 2125;
	PRODUCCION[11][0] = 910;	PRODUCCION[11][1] = 121;	PRODUCCION[11][2] = 1888;	PRODUCCION[11][3] = 1961;	PRODUCCION[11][4] = 505;		PRODUCCION[11][5] = 5734;	PRODUCCION[11][6] = 5883;	PRODUCCION[11][7] = 4562;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			cout << PRODUCCION[i][j] << "  ";
		}
		cout << endl;
	}

	int produccionTotal = 0;
	int cantidadProducciones = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			produccionTotal += PRODUCCION[i][j];
			cantidadProducciones++;
		}
	}

	double promedioProduccion = produccionTotal * 1.0 / cantidadProducciones;
	cout << "\n1. Produccion total en toneladas: " << produccionTotal << " y produccion promedio en toneladas: " << promedioProduccion << "." << endl;

	int produccionTotalColumnasImparesUltimoTrimestre = 0;
	int cantidadProduccionesColumnasImparesUltimoTrimestre = 0;
	for (int i = 9; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if (j % 2 != 0) {
				produccionTotalColumnasImparesUltimoTrimestre += PRODUCCION[i][j];
				cantidadProduccionesColumnasImparesUltimoTrimestre++;
			}
		}
	}

	double promedioProduccionColumnasImparesUltimoTrimestre = produccionTotalColumnasImparesUltimoTrimestre * 1.0 / cantidadProduccionesColumnasImparesUltimoTrimestre;
	cout << "\n2. Produccion total en toneladas: " << produccionTotalColumnasImparesUltimoTrimestre << " y produccion promedio en toneladas: " << promedioProduccionColumnasImparesUltimoTrimestre << " de las tiendas ubicadas en las columnas impares en el ultimo trimestre." << endl;

	int produccionTotalPrimeraTienda = 0;
	int produccionTotalUltimaTienda = 0;
	for (int i = 0; i < 12; i++) {
		produccionTotalPrimeraTienda += PRODUCCION[i][0];
		produccionTotalUltimaTienda += PRODUCCION[i][N - 1];
	}

	double promedioProduccionPrimeraTienda = produccionTotalPrimeraTienda * 1.0 / 12;
	double promedioProduccionUltimaTienda = produccionTotalUltimaTienda * 1.0 / 12;
	cout << "\n3. Produccion promedio en toneladas de la primera tienda: " << promedioProduccionPrimeraTienda << " y produccion promedio en toneladas de la ultima tienda: " << promedioProduccionUltimaTienda << "." << endl;

	int cantidadProduccionesEntre500y2500 = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if (PRODUCCION[i][j] >= 500 && PRODUCCION[i][j] <= 2500) {
				cantidadProduccionesEntre500y2500++;
			}
		}
	}

	double porcentajeProduccionesEntre500y2500 = cantidadProduccionesEntre500y2500 * 100.0 / cantidadProducciones + 0.0000001;
	cout << "\n4. Cantidad de producciones entre 500 y 2500 toneladas: " << cantidadProduccionesEntre500y2500 << " representan el " << porcentajeProduccionesEntre500y2500 << "%." << endl;

	int cantidadProduccionesImparesPosicionesPares = 0;
	int cantidadPosicionesPares = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if ((i + j) % 2 == 0) {
				cantidadPosicionesPares++;
				if (PRODUCCION[i][j] % 2 != 0) {
					cantidadProduccionesImparesPosicionesPares++;
				}
			}
		}
	}

	double porcentajeProduccionesImparesPosicionesPares = cantidadProduccionesImparesPosicionesPares * 100.0 / cantidadPosicionesPares;
	cout << "\n5. Cantidad de producciones impares que esten en posiciones pares: " << cantidadProduccionesImparesPosicionesPares << " representan el " << porcentajeProduccionesImparesPosicionesPares << "%." << endl;

	int cantidadProduccionesSuperioresPromedio = 0;
	for (int i = 0; i < 12; i++) {
		if (i == 0 || i == 3 || i == 6 || i == 9) {
			for (int j = 0; j < N; j++) {
				if (PRODUCCION[i][j] > promedioProduccion) {
					cantidadProduccionesSuperioresPromedio++;
				}
			}
		}
	}

	double porcentajeProduccionesSuperioresPromedio = cantidadProduccionesSuperioresPromedio * 100.0 / cantidadProducciones;
	cout << "\n6. Cantidad de producciones superiores al promedio general, en los meses de enero, abril, julio y octubre: " << cantidadProduccionesSuperioresPromedio << " representan el " << porcentajeProduccionesSuperioresPromedio << "%." << endl;

	int mayorProduccionMesesImparesTiendasPares = 0;
	int filaMayorProduccionMesesImparesTiendasPares = 0;
	int columnaMayorProduccionMesesImparesTiendasPares = 0;
	string existeMayorProduccionMesesImparesTiendasPares = NO;
	for (int i = 0; i < 12; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < N; j++) {
					if (j % 2 == 0) {
							if (existeMayorProduccionMesesImparesTiendasPares == NO || PRODUCCION[i][j] > mayorProduccionMesesImparesTiendasPares) {
							mayorProduccionMesesImparesTiendasPares = PRODUCCION[i][j];
							filaMayorProduccionMesesImparesTiendasPares = i;
							columnaMayorProduccionMesesImparesTiendasPares = j;
							existeMayorProduccionMesesImparesTiendasPares = SI;
						}
					}
			}
		}
	}
	cout << "\n7. Mayor produccion en meses impares de las tiendas pares: " << mayorProduccionMesesImparesTiendasPares << ". Coordenadas: [" << filaMayorProduccionMesesImparesTiendasPares << "][" << columnaMayorProduccionMesesImparesTiendasPares << "]." << endl;

	int menorProduccionTermineEn10 = 0;
	int filaMenorProduccionTermineEn10 = 0;
	int columnaMenorProduccionTermineEn10 = 0;
	string existeMenorProduccionTermineEn10 = NO;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if (PRODUCCION[i][j] % 100 == 10) {
					if (existeMenorProduccionTermineEn10 == NO || PRODUCCION[i][j] < menorProduccionTermineEn10) {
					menorProduccionTermineEn10 = PRODUCCION[i][j];
					filaMenorProduccionTermineEn10 = i;
					columnaMenorProduccionTermineEn10 = j;
					existeMenorProduccionTermineEn10 = SI;
				}
			}
		}
	}
	cout << "\n8. Menor produccion que termine en 10: " << menorProduccionTermineEn10 << ". Coordenadas: [" << filaMenorProduccionTermineEn10 << "][" << columnaMenorProduccionTermineEn10 << "]." << endl;

	int mayorProduccion = PRODUCCION[0][0];
	int menorProduccion = PRODUCCION[0][0];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if (PRODUCCION[i][j] > mayorProduccion) {
				mayorProduccion = PRODUCCION[i][j];
			}
			if (PRODUCCION[i][j] < menorProduccion) {
				menorProduccion = PRODUCCION[i][j];
			}
		}
	}

	int productoMayorMenorProduccion = mayorProduccion * menorProduccion;
	cout << "\n9. El producto entre la mayor: " << mayorProduccion << " y la menor: " << menorProduccion << " produccion en toneladas: " << productoMayorMenorProduccion << "." << endl;

	int produccionBuscada;
	cout << "Ingrese la produccion a buscar: ";
	cin >> produccionBuscada;

	string existeProduccionBuscada = NO;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			if (PRODUCCION[i][j] == produccionBuscada) {
				cout << "10. La produccion " << produccionBuscada << " SI existe en las coordenadas: [" << i << "][" << j << "]." << endl;
				existeProduccionBuscada = SI;
			}
		}
	}
	if (existeProduccionBuscada == NO) {
		cout << "10. La produccion " << produccionBuscada << " NO existe en la matriz." << endl;
	}

	int limiteCuadrada = N;
	if (limiteCuadrada > 12) {
		limiteCuadrada = 12;
	}

	int produccionTriangularSuperior = 0;
	int produccionTriangularInferior = 0;
	for (int i = 0; i < limiteCuadrada; i++) {
		for (int j = 0; j < N; j++) {
			if (j > i) {
				produccionTriangularSuperior += PRODUCCION[i][j];
			}
			if (i > j) {
				produccionTriangularInferior += PRODUCCION[i][j];
			}
		}
	}

	if (produccionTriangularSuperior > produccionTriangularInferior) {
		cout << "\n11. SI se realizo mayor produccion en la triangular superior: " << produccionTriangularSuperior << " que en la triangular inferior: " << produccionTriangularInferior << "." << endl;
	} else {
		cout << "\n11. NO se realizo mayor produccion en la triangular superior: " << produccionTriangularSuperior << " que en la triangular inferior: " << produccionTriangularInferior << "." << endl;
	}

	int produccionTercerTrimestre = 0;
	int produccionCuartoTrimestre = 0;
	for (int i = 6; i < 9; i++) {
		for (int j = 0; j < N; j++) {
			produccionTercerTrimestre += PRODUCCION[i][j];
		}
	}
	for (int i = 9; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			produccionCuartoTrimestre += PRODUCCION[i][j];
		}
	}

	if (produccionTercerTrimestre > produccionCuartoTrimestre) {
		cout << "\n12. SI se realizo mayor produccion en el tercer trimestre: " << produccionTercerTrimestre << " que en el cuarto trimestre del anio: " << produccionCuartoTrimestre << "." << endl;
	} else {
		cout << "\n12. NO se realizo mayor produccion en el tercer trimestre: " << produccionTercerTrimestre << " que en el cuarto trimestre del anio: " << produccionCuartoTrimestre << "." << endl;
	}

	
	return 0;
}
