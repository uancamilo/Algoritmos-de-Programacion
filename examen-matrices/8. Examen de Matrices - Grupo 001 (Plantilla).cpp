#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	//Configurar de precisión y tildes
	cout << fixed << setprecision(2);

	//Declarar la matriz dinámica
	int N;
	cout << "Ingrese la cantidad de fábricas [N]: ";
	cin >> N;
	
	int VENTAS[N][7];

	//Dejar estos datos para quemar los datos de la matriz
	VENTAS[0][0] = 1189;	VENTAS[0][1] = 4733;	VENTAS[0][2] = 4296;	VENTAS[0][3] = 5803;	VENTAS[0][4] = 1983;	VENTAS[0][5] = 6306;	VENTAS[0][6] = 7693;
	VENTAS[1][0] = 218;		VENTAS[1][1] = 4289;	VENTAS[1][2] = 7216;	VENTAS[1][3] = 2860;	VENTAS[1][4] = 20;		VENTAS[1][5] = 54;		VENTAS[1][6] = 37;
	VENTAS[2][0] = 6174;	VENTAS[2][1] = 7452;	VENTAS[2][2] = 31;		VENTAS[2][3] = 7739;	VENTAS[2][4] = 5554;	VENTAS[2][5] = 5468;	VENTAS[2][6] = 64;
	VENTAS[3][0] = 488;		VENTAS[3][1] = 7425;	VENTAS[3][2] = 2983;	VENTAS[3][3] = 3869;	VENTAS[3][4] = 85;		VENTAS[3][5] = 2060;	VENTAS[3][6] = 7938;
	VENTAS[4][0] = 5271;	VENTAS[4][1] = 5551;	VENTAS[4][2] = 5402;	VENTAS[4][3] = 811;		VENTAS[4][4] = 585;		VENTAS[4][5] = 75;		VENTAS[4][6] = 902;
	VENTAS[5][0] = 2435;	VENTAS[5][1] = 75;		VENTAS[5][2] = 7358;	VENTAS[5][3] = 5614;	VENTAS[5][4] = 34;		VENTAS[5][5] = 4941;	VENTAS[5][6] = 6191;
	VENTAS[6][0] = 4625;	VENTAS[6][1] = 1360;	VENTAS[6][2] = 5024;	VENTAS[6][3] = 4048;	VENTAS[6][4] = 2162;	VENTAS[6][5] = 6712;	VENTAS[6][6] = 5236;
	VENTAS[7][0] = 7837;	VENTAS[7][1] = 4026;	VENTAS[7][2] = 5604;	VENTAS[7][3] = 7480;	VENTAS[7][4] = 4339;	VENTAS[7][5] = 4162;	VENTAS[7][6] = 35;
	VENTAS[8][0] = 421;		VENTAS[8][1] = 790;		VENTAS[8][2] = 5960;	VENTAS[8][3] = 2872;	VENTAS[8][4] = 3049;	VENTAS[8][5] = 7039;	VENTAS[8][6] = 7202;
	VENTAS[9][0] = 2353;	VENTAS[9][1] = 4060;	VENTAS[9][2] = 2617;	VENTAS[9][3] = 49;		VENTAS[9][4] = 7468;	VENTAS[9][5] = 1777;	VENTAS[9][6] = 4498;
	VENTAS[10][0] = 7994;	VENTAS[10][1] = 2917;	VENTAS[10][2] = 1672;	VENTAS[10][3] = 1805;	VENTAS[10][4] = 850;	VENTAS[10][5] = 4260;	VENTAS[10][6] = 6743;
	VENTAS[11][0] = 7938;	VENTAS[11][1] = 7022;	VENTAS[11][2] = 7485;	VENTAS[11][3] = 5330;	VENTAS[11][4] = 6743;	VENTAS[11][5] = 35;		VENTAS[11][6] = 248;
	VENTAS[12][0] = 3991;	VENTAS[12][1] = 35;		VENTAS[12][2] = 5078;	VENTAS[12][3] = 7127;	VENTAS[12][4] = 6146;	VENTAS[12][5] = 7616;	VENTAS[12][6] = 297;
	VENTAS[13][0] = 1766;	VENTAS[13][1] = 5572;	VENTAS[13][2] = 1111;	VENTAS[13][3] = 4793;	VENTAS[13][4] = 3769;	VENTAS[13][5] = 5308;	VENTAS[13][6] = 762;
	VENTAS[14][0] = 5657;	VENTAS[14][1] = 812;	VENTAS[14][2] = 7221;	VENTAS[14][3] = 2491;	VENTAS[14][4] = 2353;	VENTAS[14][5] = 5365;	VENTAS[14][6] = 662;
	VENTAS[15][0] = 144;	VENTAS[15][1] = 6746;	VENTAS[15][2] = 4112;	VENTAS[15][3] = 6288;	VENTAS[15][4] = 3311;	VENTAS[15][5] = 228;	VENTAS[15][6] = 4751;
	VENTAS[16][0] = 6151;	VENTAS[16][1] = 5411;	VENTAS[16][2] = 4608;	VENTAS[16][3] = 7073;	VENTAS[16][4] = 2606;	VENTAS[16][5] = 1977;	VENTAS[16][6] = 4160;
	VENTAS[17][0] = 2787;	VENTAS[17][1] = 6062;	VENTAS[17][2] = 3824;	VENTAS[17][3] = 4783;	VENTAS[17][4] = 425;	VENTAS[17][5] = 6327;	VENTAS[17][6] = 5772;
	VENTAS[18][0] = 500;	VENTAS[18][1] = 72;		VENTAS[18][2] = 3486;	VENTAS[18][3] = 2506;	VENTAS[18][4] = 281;	VENTAS[18][5] = 2939;	VENTAS[18][6] = 5084;
	VENTAS[19][0] = 7855;	VENTAS[19][1] = 7940;	VENTAS[19][2] = 6274;	VENTAS[19][3] = 3301;	VENTAS[19][4] = 759;	VENTAS[19][5] = 5039;	VENTAS[19][6] = 70;
	VENTAS[20][0] = 7787;	VENTAS[20][1] = 7827;	VENTAS[20][2] = 3295;	VENTAS[20][3] = 670;	VENTAS[20][4] = 3488;	VENTAS[20][5] = 2029;	VENTAS[20][6] = 7340;
	VENTAS[21][0] = 178;	VENTAS[21][1] = 7825;	VENTAS[21][2] = 2187;	VENTAS[21][3] = 901;	VENTAS[21][4] = 4029;	VENTAS[21][5] = 5272;	VENTAS[21][6] = 5314;
	VENTAS[22][0] = 6536;	VENTAS[22][1] = 4642;	VENTAS[22][2] = 1666;	VENTAS[22][3] = 4139;	VENTAS[22][4] = 728;	VENTAS[22][5] = 35;		VENTAS[22][6] = 6489;
	VENTAS[23][0] = 2713;	VENTAS[23][1] = 4471;	VENTAS[23][2] = 6762;	VENTAS[23][3] = 134;	VENTAS[23][4] = 2717;	VENTAS[23][5] = 1478;	VENTAS[23][6] = 230;
	VENTAS[24][0] = 1666;	VENTAS[24][1] = 3217;	VENTAS[24][2] = 1519;	VENTAS[24][3] = 4291;	VENTAS[24][4] = 2836;	VENTAS[24][5] = 5362;	VENTAS[24][6] = 1779;

	//Imprimir la matriz
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			cout << VENTAS[i][j] << "  ";
		}
		cout << endl;
	}
	
	//Punto 1
	int ventasTotales = 0;
	int cantidadVentas = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			ventasTotales += VENTAS[i][j];
			cantidadVentas++;
		}
	}
	
	double promedioVentas = ventasTotales * 1.0 / cantidadVentas;
	

	cout << "\n1. Ventas totales: " << ventasTotales << " y promedio de ventas de todas las empresas: " << promedioVentas << endl;

	//Punto 2		
	int cantidadVentasInferioresPromedio = 0;
	int inicioFabricasPunto2 = N - 6;
	if (inicioFabricasPunto2 < 0) {
		inicioFabricasPunto2 = 0;
	}
	for (int i = inicioFabricasPunto2; i < N; i++) {
		for (int j = 3; j < 7; j++) {
			if (VENTAS[i][j] < promedioVentas) {
				cantidadVentasInferioresPromedio++;
			}
		}
	}
	
	double porcentajeVentasInferioresPromedio = cantidadVentasInferioresPromedio * 100.0 / cantidadVentas;
	cout << "\n2. Cantidad de ventas inferiores al promedio últimas 6 fábricas últimos 4 días: " << cantidadVentasInferioresPromedio << ". Representan el " << porcentajeVentasInferioresPromedio << "%." << endl;

	//Punto 3	
	int ventasTotalesFinDeSemana = 0;
	int cantidadVentasFinDeSemana = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 5; j < 7; j++) {
			ventasTotalesFinDeSemana += VENTAS[i][j];
			cantidadVentasFinDeSemana++;
		}
	}
	
	double promedioVentasFinDeSemana = ventasTotalesFinDeSemana * 1.0 / cantidadVentasFinDeSemana;
	cout << "\n3. Ventas totales: " << ventasTotalesFinDeSemana << " y promedio de ventas del fin de semana: " << promedioVentasFinDeSemana << endl;

	//Punto 4	
	int cantidadVentasParesPosicionesImpares = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			if ((i + 1) % 2 != 0 && (j + 1) % 2 != 0 && VENTAS[i][j] % 2 == 0) {
				cantidadVentasParesPosicionesImpares++;
			}
		}
	}
	
	double porcentajeVentasParesPosicionesImpares = cantidadVentasParesPosicionesImpares * 100.0 / cantidadVentas;
	cout << "\n4. Cantidad ventas pares en posiciones impares: " << cantidadVentasParesPosicionesImpares << ". Representan el " << porcentajeVentasParesPosicionesImpares << "%." << endl;

	//Punto 5	
	int mayorVentaPrimeraUltimaFabrica = VENTAS[0][0];
	int menorVentaPrimeraUltimaFabrica = VENTAS[0][0];
	for (int j = 0; j < 7; j++) {
		if (VENTAS[0][j] > mayorVentaPrimeraUltimaFabrica) {
			mayorVentaPrimeraUltimaFabrica = VENTAS[0][j];
		}
		if (VENTAS[0][j] < menorVentaPrimeraUltimaFabrica) {
			menorVentaPrimeraUltimaFabrica = VENTAS[0][j];
		}
		if (VENTAS[N - 1][j] > mayorVentaPrimeraUltimaFabrica) {
			mayorVentaPrimeraUltimaFabrica = VENTAS[N - 1][j];
		}
		if (VENTAS[N - 1][j] < menorVentaPrimeraUltimaFabrica) {
			menorVentaPrimeraUltimaFabrica = VENTAS[N - 1][j];
		}
	}
	cout << "\n5. Mayor venta: " << mayorVentaPrimeraUltimaFabrica << " y menor venta: " << menorVentaPrimeraUltimaFabrica << " de la primera y última fábrica." << endl;

	//Punto 6 (este mensaje repite 3 veces)
	int ventasTotalesPrimerosCuatroDias = 0;
	int cantidadVentasPrimerosCuatroDias = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			ventasTotalesPrimerosCuatroDias += VENTAS[i][j];
			cantidadVentasPrimerosCuatroDias++;
		}
	}
	
	double promedioVentasPrimerosCuatroDias = ventasTotalesPrimerosCuatroDias * 1.0 / cantidadVentasPrimerosCuatroDias;
	string comparacionPromedios = "IGUAL";
	if (promedioVentasFinDeSemana > promedioVentasPrimerosCuatroDias) {
		comparacionPromedios = "MAYOR";
	} else if (promedioVentasFinDeSemana < promedioVentasPrimerosCuatroDias) {
		comparacionPromedios = "MENOR";
	}
	cout << "\n6. Promedio de venta fines de semana: " << promedioVentasFinDeSemana << " es " << comparacionPromedios << " que promedio de cuatro primeros días de semana: " << promedioVentasPrimerosCuatroDias << endl;
	
	//Punto 7	
	int sumaVentasImparesTriangularSuperior = 0;
	int cantidadVentasImparesTriangularSuperior = 0;
	int sumaVentasParesTriangularInferior = 0;
	int cantidadVentasParesTriangularInferior = 0;
	int limiteDiagonal = N;
	if (limiteDiagonal > 7) {
		limiteDiagonal = 7;
	}
	for (int i = 0; i < limiteDiagonal; i++) {
		for (int j = 0; j < 7; j++) {
			if (j > i && VENTAS[i][j] % 2 != 0) {
				sumaVentasImparesTriangularSuperior += VENTAS[i][j];
				cantidadVentasImparesTriangularSuperior++;
			}
			if (i > j && VENTAS[i][j] % 2 == 0) {
				sumaVentasParesTriangularInferior += VENTAS[i][j];
				cantidadVentasParesTriangularInferior++;
			}
		}
	}
	
	double promedioVentasImparesTriangularSuperior = 0;
	if (cantidadVentasImparesTriangularSuperior > 0) {
		promedioVentasImparesTriangularSuperior = sumaVentasImparesTriangularSuperior * 1.0 / cantidadVentasImparesTriangularSuperior;
	}
	
	double promedioVentasParesTriangularInferior = 0;
	if (cantidadVentasParesTriangularInferior > 0) {
		promedioVentasParesTriangularInferior = sumaVentasParesTriangularInferior * 1.0 / cantidadVentasParesTriangularInferior;
	}
	cout << "\n7. Promedio ventas impares triangular superior: " << promedioVentasImparesTriangularSuperior << " y promedio ventas pares triangular inferior: " << promedioVentasParesTriangularInferior << endl;

	//Punto 8	
	int cantidadVentasMultiplosTresOCinco = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			if (VENTAS[i][j] % 3 == 0 || VENTAS[i][j] % 5 == 0) {
				cantidadVentasMultiplosTresOCinco++;
			}
		}
	}
	
	double porcentajeVentasMultiplosTresOCinco = cantidadVentasMultiplosTresOCinco * 100.0 / cantidadVentas;
	cout << "\n8. Cantidad ventas múltiplos de 3 o 5: " << cantidadVentasMultiplosTresOCinco << ". Representan el " << porcentajeVentasMultiplosTresOCinco << "%." << endl;

	//Punto 9	
	int mayorVentaFilasImpares = -1;
	int filaMayorVentaFilasImpares = 1;
	int columnaMayorVentaFilasImpares = 1;
	for (int i = 0; i < N; i++) {
		if ((i + 1) % 2 != 0) {
			for (int j = 0; j < 7; j++) {
				if (j == 0 || j == 3 || j == 6) {
					if (VENTAS[i][j] > mayorVentaFilasImpares) {
						mayorVentaFilasImpares = VENTAS[i][j];
						filaMayorVentaFilasImpares = i + 1;
						columnaMayorVentaFilasImpares = j + 1;
					}
				}
			}
		}
	}
	cout << "\n9. Mayor venta en filas impares lunes, jueves y domingo: " << mayorVentaFilasImpares << " (primera aparición) ubicada en coordenadas: [" << filaMayorVentaFilasImpares << "][" << columnaMayorVentaFilasImpares << "]" << endl;

	//Punto 10
	int menorVentaFilasPares = 0;
	int filaMenorVentaFilasPares = 0;
	int columnaMenorVentaFilasPares = 0;
	bool existeMenorVentaFilasPares = false;
	for (int i = 0; i < N; i++) {
		if ((i + 1) % 2 == 0) {
			for (int j = 0; j < 7; j++) {
				if (j == 1 || j == 3 || j == 5) {
					if (!existeMenorVentaFilasPares || VENTAS[i][j] <= menorVentaFilasPares) {
						menorVentaFilasPares = VENTAS[i][j];
						filaMenorVentaFilasPares = i + 1;
						columnaMenorVentaFilasPares = j + 1;
						existeMenorVentaFilasPares = true;
					}
				}
			}
		}
	}
	cout << "\n10. Menor venta ubicadas en filas pares martes, jueves y sábado: " << menorVentaFilasPares << " (última aparición) ubicada en coordenadas: [" << filaMenorVentaFilasPares << "][" << columnaMenorVentaFilasPares << "]" << endl;

	//Punto 11
	int mayorVenta = VENTAS[0][0];
	int menorVenta = VENTAS[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			if (VENTAS[i][j] > mayorVenta) {
				mayorVenta = VENTAS[i][j];
			}
			if (VENTAS[i][j] < menorVenta) {
				menorVenta = VENTAS[i][j];
			}
		}
	}
	
	long long productoMayorMenorVenta = mayorVenta * 1LL * menorVenta;
	cout << "\n11. Producto (la multiplicación) entre la mayor: " << mayorVenta << " y la menor venta: " << menorVenta << " es igual a: " << productoMayorMenorVenta << endl;

	//Punto 12 (este mensaje repite 3 veces)	
	int ventasDiagonalPrincipal = 0;
	int ventasDiagonalSecundaria = 0;
	for (int i = 0; i < limiteDiagonal; i++) {
		ventasDiagonalPrincipal += VENTAS[i][i];
		ventasDiagonalSecundaria += VENTAS[i][6 - i];
	}
	
	double porcentajeVentasDiagonalPrincipal = ventasDiagonalPrincipal * 100.0 / ventasTotales;
	double porcentajeVentasDiagonalSecundaria = ventasDiagonalSecundaria * 100.0 / ventasTotales;
	string comparacionDiagonales = "ES IGUAL";
	if (porcentajeVentasDiagonalSecundaria > porcentajeVentasDiagonalPrincipal) {
		comparacionDiagonales = "ES MAYOR";
	} else if (porcentajeVentasDiagonalSecundaria < porcentajeVentasDiagonalPrincipal) {
		comparacionDiagonales = "NO ES MAYOR";
	}
	cout << "\n12. Porcentaje de ventas diagonal secundaria: " << porcentajeVentasDiagonalSecundaria << "% " << comparacionDiagonales << " que las ventas diagonal principal: %" << porcentajeVentasDiagonalPrincipal << "." << endl;	

	//Punto 13 (este mensaje se imprime cada vez que encuentra el elemento. Al final validar que diga NO EXISTE
	int ventaBuscada;
	cout << "Ingrese la venta a buscar: ";
	cin >> ventaBuscada;
	
	bool ventaExiste = false;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			if (VENTAS[i][j] == ventaBuscada) {
				cout << "13. La venta existe en la Fabrica: " << i + 1 << " el día: " << j + 1 << endl;
				ventaExiste = true;
			}
		}
	}
	if (!ventaExiste) {
		cout << "13. La venta NO EXISTE en la matriz." << endl;
	}

	//Punto 14 (este mensaje se muestra 3 veces)	
	int totalPrimerasDiezFabricas = 0;
	int totalUltimasDiezFabricas = 0;
	int limitePrimerasDiezFabricas = N;
	if (limitePrimerasDiezFabricas > 10) {
		limitePrimerasDiezFabricas = 10;
	}
	for (int i = 0; i < limitePrimerasDiezFabricas; i++) {
		for (int j = 0; j < 7; j++) {
			totalPrimerasDiezFabricas += VENTAS[i][j];
		}
	}
	
	int inicioUltimasDiezFabricas = N - 10;
	if (inicioUltimasDiezFabricas < 0) {
		inicioUltimasDiezFabricas = 0;
	}
	for (int i = inicioUltimasDiezFabricas; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			totalUltimasDiezFabricas += VENTAS[i][j];
		}
	}
	
	string mensajeMasVentas = "NO";
	if (totalPrimerasDiezFabricas > totalUltimasDiezFabricas) {
		mensajeMasVentas = "SÍ";
	}
	cout << "\n14. " << mensajeMasVentas << " se realizaron más ventas en las primeras 10 fábricas con un total: " << totalPrimerasDiezFabricas << " que en las últimas 10 fábricas con un total de: " << totalUltimasDiezFabricas << endl;
	return 0;
}
