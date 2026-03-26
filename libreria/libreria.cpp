#include <iostream>
#include <iomanip>
#include "libreria.h"

using namespace std;

int main() {
	cout << setprecision(2) << fixed;
	double n1 = 2.5, n2 = -5.0;
	double n3 = 2, n4 = 5;
	cout << "Suma       " << n1 << " + " << n2 << " = " << Sum(n1, n2) << endl;
	cout << "Diferencia " << n1 << " - " << n2 << " = " << Dif(n1, n2) << endl;
	cout << "Producto   " << n1 << " * " << n2 << " = " << Pro(n1, n2) << endl;
	cout << "Cociente   " << n1 << " / " << n2 << " = " << Coc(n1, n2) << endl;
	cout << "Valor Absoluto " << n1 << " = " << Vabs(n1) << endl;
	cout << "Valor Absoluto " << n2 << " = " << Vabs(n2) << endl;
	cout << "Mayor entre " << n1 << " y " << n2 << ": " << May(n1, n2) << endl;
	cout << "Menor entre " << n3 << " y " << n4 << ": " << Men(n3, n4) << endl;
	cout << n3 << " elevado a " << n4 << ": " << Pot(n3, n4) << endl;
	cout << "Raiz cuadrada de 25: " << Rzcd(25) << endl;
	cout << "Raiz cubica de 27: " << Rzcb(27) << endl;
	cout << "Raiz 4 de 16: " << Rzn(16, 4) << endl;
	cout << "Cuadrado de 6: " << Cua(6) << endl;
	cout << "Cubo de 3: " << Cub(3) << endl;
	cout << "2 a la 8: " << Potn(2, 8) << endl;
	cout << "20 es divisible por 5: " << Div(20, 5) << endl;
	cout << "Suma entre 3 y 7: " << SumaXY(3, 7) << endl;
	cout << "Factorial de 5: " << Factorial(5) << endl;
	cout << "29 es primo: " << Primo(29) << endl;
	cout << "220 y 284 son amigos: " << Amigo(220, 284) << endl;
	cout << "28 es perfecto: " << Perfecto(28) << endl;
	return 0;
}
