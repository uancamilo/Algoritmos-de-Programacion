#include <cmath>
#include "libreria.h"

int SumaDivisoresPropios(int var) {
	if (var <= 1)
		return 0;
	int suma = 1;
	for (int i = 2; i * i <= var; i++) {
		if (var % i == 0) {
			suma += i;
			int otro = var / i;
			if (otro != i)
				suma += otro;
		}
	}
	return suma;
}

double Sum(double var1, double var2) {
	return var1 + var2;
}

double Dif(double var1, double var2) {
	return var1 - var2;
}

double Pro(double var1, double var2) {
	return var1 * var2;
}

double Coc(double var1, double var2) {
	return var1 / var2;
}

double Vabs(double var) {
	if (var < 0)
		return var * -1;
	return var;
}

double May(double var1, double var2) {
	if (var1 > var2)
		return var1;
	return var2;
}

double Men(double var1, double var2) {
	if (var1 < var2)
		return var1;
	return var2;
}

double Pot(double var1, double var2) {
	return pow(var1, var2);
}

double Rzcd(double var) {
	return sqrt(var);
}

double Rzcb(double var) {
	return cbrt(var);
}

double Rzn(double var, int n) {
	return pow(var, 1.0 / n);
}

double Cua(double var) {
	return var * var;
}

double Cub(double var) {
	return var * var * var;
}

double Potn(double var, int n) {
	return pow(var, n);
}

bool Div(int var1, int var2) {
	if (var2 == 0)
		return false;
	return var1 % var2 == 0;
}

int SumaXY(int var1, int var2) {
	int inicio = static_cast<int>(Men(var1, var2));
	int fin = static_cast<int>(May(var1, var2));
	int suma = 0;
	for (int i = inicio; i <= fin; i++) {
		suma += i;
	}
	return suma;
}

long long Factorial(int var) {
	if (var < 0)
		return 0;
	long long resultado = 1;
	for (int i = 2; i <= var; i++) {
		resultado *= i;
	}
	return resultado;
}

bool Primo(int var) {
	if (var < 2)
		return false;
	for (int i = 2; i * i <= var; i++) {
		if (var % i == 0)
			return false;
	}
	return true;
}

bool Amigo(int var1, int var2) {
	return SumaDivisoresPropios(var1) == var2 && SumaDivisoresPropios(var2) == var1;
}

bool Perfecto(int var) {
	return SumaDivisoresPropios(var) == var;
}
