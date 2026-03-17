#include <iostream>
#include <iomanip>
using namespace std;

const int MODELO_MINIMO = 1900;
const int MODELO_MAXIMO = 2026;

void limpiarEntrada() {
    cin.clear();
    char caracter;
    while (cin.get(caracter) && caracter != '\n') {
    }
}

int leerEntero(const string &mensaje) {
    int valor;

    while (true) {
        cout << mensaje;
        if (cin >> valor) {
            return valor;
        }

        if (cin.eof()) {
            throw 0;
        }

        cout << "Error. Ingrese un numero entero valido.\n";
        limpiarEntrada();
    }
}

double leerReal(const string &mensaje) {
    double valor;

    while (true) {
        cout << mensaje;
        if (cin >> valor) {
            return valor;
        }

        if (cin.eof()) {
            throw 0;
        }

        cout << "Error. Ingrese un numero valido.\n";
        limpiarEntrada();
    }
}

char leerCaracter(const string &mensaje) {
    char valor;

    while (true) {
        cout << mensaje;
        if (cin >> valor) {
            return valor;
        }

        if (cin.eof()) {
            throw 0;
        }

        cout << "Error. Ingrese un caracter valido.\n";
        limpiarEntrada();
    }
}

int validarModelo() {
    int modelo = leerEntero("Modelo del vehiculo (anio entre 1900 y 2026): ");

    while (modelo < MODELO_MINIMO || modelo > MODELO_MAXIMO) {
        modelo = leerEntero("Error. Ingrese un anio entre 1900 y 2026: ");
    }

    return modelo;
}

// VALIDACIONES
int validarTipoVehiculo() {
    int tipo = leerEntero("Tipo de vehiculo (1-Particular, 2-Publico, 3-Remolque, 4-Camion): ");

    while (tipo < 1 || tipo > 4) {
        tipo = leerEntero("Error. Ingrese nuevamente: ");
    }
    return tipo;
}

char validarTipoServicio() {
    char tipo = leerCaracter("Tipo de servicio (L-Lavada, T-Tanqueo, A-Ambos): ");

    while (tipo != 'L' && tipo != 'T' && tipo != 'A') {
        tipo = leerCaracter("Error. Ingrese L, T o A: ");
    }
    return tipo;
}

// FUNCIÓN COSTO (PUNTO 10)
double calcularCosto(int tipoVehiculo, char tipoServicio) {
    double costo = 0;

    if (tipoServicio == 'L' || tipoServicio == 'A') {
        if (tipoVehiculo == 1 || tipoVehiculo == 2)
            costo += 30000;
        else
            costo += 50000;
    }

    if (tipoServicio == 'T' || tipoServicio == 'A') {
        int galones;
        char tipoGasolina;

        galones = leerEntero("Galones: ");

        tipoGasolina = leerCaracter("Tipo gasolina (C corriente / A ACPM): ");

        if (tipoGasolina == 'C')
            costo += galones * 8000;
        else
            costo += galones * 7500;
    }

    if (tipoServicio == 'A') {
        costo *= 0.95;
    }

    return costo;
}

// PROCESAMIENTO
void procesarVehiculo(int tipoVehiculo, char tipoServicio,
    double valorComercial, int kilometraje,
    int &contParticular, int &contPublico,
    int &contRemolque, int &contCamion,
    double &sumaLavado, double &sumaTanqueo, double &sumaAmbos,
    double &kmLavado, double &kmTanqueo, double &kmAmbos,
    int &contLavado, int &contTanqueo, int &contAmbos) {

    // Contadores tipo vehículo
    if (tipoVehiculo == 1) contParticular++;
    else if (tipoVehiculo == 2) contPublico++;
    else if (tipoVehiculo == 3) contRemolque++;
    else if (tipoVehiculo == 4) contCamion++;

    // Servicios
    if (tipoServicio == 'L') {
        sumaLavado += valorComercial;
        kmLavado += kilometraje;
        contLavado++;
    }
    else if (tipoServicio == 'T') {
        sumaTanqueo += valorComercial;
        kmTanqueo += kilometraje;
        contTanqueo++;
    }
    else if (tipoServicio == 'A') {
        sumaAmbos += valorComercial;
        kmAmbos += kilometraje;
        contAmbos++;
    }
}

// RESULTADOS
void mostrarResultados(int n,
    int contParticular, int contPublico,
    int contRemolque, int contCamion,
    double sumaLavado, double sumaTanqueo, double sumaAmbos,
    double kmLavado, double kmTanqueo, double kmAmbos,
    int contLavado, int contTanqueo, int contAmbos) {

    double pParticular = (contParticular * 100.0) / n;
    double pPublico = (contPublico * 100.0) / n;
    double pRemolque = (contRemolque * 100.0) / n;
    double pCamion = (contCamion * 100.0) / n;

    cout << "\n--- TIPOS DE VEHICULO ---\n";
    cout << "Particulares: " << contParticular << " (" << pParticular << "%)\n";
    cout << "Publico: " << contPublico << " (" << pPublico << "%)\n";
    cout << "Remolque: " << contRemolque << " (" << pRemolque << "%)\n";
    cout << "Camion: " << contCamion << " (" << pCamion << "%)\n";

    double promL = (contLavado > 0) ? kmLavado / contLavado : 0;
    double promT = (contTanqueo > 0) ? kmTanqueo / contTanqueo : 0;
    double promA = (contAmbos > 0) ? kmAmbos / contAmbos : 0;

    cout << "\n--- SERVICIOS ---\n";
    cout << fixed << setprecision(2);
    cout << "Lavado - Suma: $" << sumaLavado << " Prom KM: " << promL << endl;
    cout << "Tanqueo - Suma: $" << sumaTanqueo << " Prom KM: " << promT << endl;
    cout << "Ambos - Suma: $" << sumaAmbos << " Prom KM: " << promA << endl;
}

// MAIN
int main() {
    try {
        int n = leerEntero("Cantidad de clientes: ");

        while (n <= 0) {
            n = leerEntero("Error. Ingrese una cantidad mayor que cero: ");
        }

        int contParticular = 0, contPublico = 0, contRemolque = 0, contCamion = 0;
        double sumaLavado = 0, sumaTanqueo = 0, sumaAmbos = 0;
        double kmLavado = 0, kmTanqueo = 0, kmAmbos = 0;
        int contLavado = 0, contTanqueo = 0, contAmbos = 0;

        for (int i = 0; i < n; i++) {

            cout << "\n--- Cliente " << i + 1 << " ---\n";

            string cedula, nombre, placa, color;
            int kilometraje;
            double valorComercial;

            cout << "Cedula: "; cin >> cedula;
            cout << "Nombre: "; cin >> nombre;
            cout << "Placa: "; cin >> placa;
            cout << "Color: "; cin >> color;
            kilometraje = leerEntero("Kilometraje: ");
            validarModelo();

            int tipoVehiculo = validarTipoVehiculo();
            valorComercial = leerReal("Valor comercial: ");
            char tipoServicio = validarTipoServicio();

            procesarVehiculo(tipoVehiculo, tipoServicio,
                valorComercial, kilometraje,
                contParticular, contPublico,
                contRemolque, contCamion,
                sumaLavado, sumaTanqueo, sumaAmbos,
                kmLavado, kmTanqueo, kmAmbos,
                contLavado, contTanqueo, contAmbos);

            double costo = calcularCosto(tipoVehiculo, tipoServicio);
            cout << "Costo del servicio: " << costo << endl;
        }

        mostrarResultados(n,
            contParticular, contPublico,
            contRemolque, contCamion,
            sumaLavado, sumaTanqueo, sumaAmbos,
            kmLavado, kmTanqueo, kmAmbos,
            contLavado, contTanqueo, contAmbos);
    }
    catch (int) {
        cout << "\nEntrada finalizada.\n";
        return 0;
    }

    return 0;
}
