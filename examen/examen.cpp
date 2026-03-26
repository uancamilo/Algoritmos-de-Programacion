#include <iostream>
#include <iomanip>

using namespace std;

int validarTipoAnimal(string animal);
void contarAnimal(string animal, int& cantidadAves, int& cantidadGatos, int& cantidadConejos, int& cantidadPeces, int& cantidadTarantulas);
double convertirMesesAnios(int meses);
double convertirGramosKilogramos(int gramos);
string descripcionAnimal(string animal);
int cantidadPatas(string animal);
void calcularPorcentaje(int cantidadAves, int cantidadGatos, int cantidadConejos, int cantidadPeces, int cantidadTarantulas, int totalAnimales);
string animalMasExperimentos(int cantidadAves, int cantidadGatos, int cantidadConejos, int cantidadPeces, int cantidadTarantulas);

int validarTipoAnimal(string animal) {
    if (animal == "A" || animal == "a" || animal == "G" || animal == "g" || animal == "C" || animal == "c" || animal == "P" || animal == "p" || animal == "T" || animal == "t") {
        return 1;
    }
    return 0;
}

void contarAnimal(string animal, int& cantidadAves, int& cantidadGatos, int& cantidadConejos, int& cantidadPeces, int& cantidadTarantulas) {
    if (animal == "A" || animal == "a") {
        cantidadAves++;
    } else if (animal == "G" || animal == "g") {
        cantidadGatos++;
    } else if (animal == "C" || animal == "c") {
        cantidadConejos++;
    } else if (animal == "P" || animal == "p") {
        cantidadPeces++;
    } else if (animal == "T" || animal == "t") {
        cantidadTarantulas++;
    }
}

double convertirMesesAnios(int meses) {
    return meses / 12.0;
}

double convertirGramosKilogramos(int gramos) {
    return gramos / 1000.0;
}

string descripcionAnimal(string animal) {
    if (animal == "A" || animal == "a") {
        return "Aves";
    } else if (animal == "G" || animal == "g") {
        return "Gatos";
    } else if (animal == "C" || animal == "c") {
        return "Conejos";
    } else if (animal == "P" || animal == "p") {
        return "Peces";
    }
    return "Tarantulas";
}

int cantidadPatas(string animal) {
    if (animal == "A" || animal == "a") {
        return 2;
    } else if (animal == "G" || animal == "g") {
        return 4;
    } else if (animal == "C" || animal == "c") {
        return 4;
    } else if (animal == "P" || animal == "p") {
        return 0;
    }
    return 8;
}

void calcularPorcentaje(int cantidadAves, int cantidadGatos, int cantidadConejos, int cantidadPeces, int cantidadTarantulas, int totalAnimales) {
    double porcentajeAves = 0;
    double porcentajeGatos = 0;
    double porcentajeConejos = 0;
    double porcentajePeces = 0;
    double porcentajeTarantulas = 0;

    if (totalAnimales > 0) {
        porcentajeAves = cantidadAves * 100.0 / totalAnimales;
        porcentajeGatos = cantidadGatos * 100.0 / totalAnimales;
        porcentajeConejos = cantidadConejos * 100.0 / totalAnimales;
        porcentajePeces = cantidadPeces * 100.0 / totalAnimales;
        porcentajeTarantulas = cantidadTarantulas * 100.0 / totalAnimales;
    }

    cout << fixed << setprecision(2);
    cout << "\nPorcentaje de cada tipo de animal:\n";
    cout << "Aves: " << porcentajeAves << "%\n";
    cout << "Gatos: " << porcentajeGatos << "%\n";
    cout << "Conejos: " << porcentajeConejos << "%\n";
    cout << "Peces: " << porcentajePeces << "%\n";
    cout << "Tarantulas: " << porcentajeTarantulas << "%\n";
}

string animalMasExperimentos(int cantidadAves, int cantidadGatos, int cantidadConejos, int cantidadPeces, int cantidadTarantulas) {
    int mayor = cantidadAves;
    string animal = "A";
    if (cantidadGatos > mayor) {
        mayor = cantidadGatos;
        animal = "G";
    }
    if (cantidadConejos > mayor) {
        mayor = cantidadConejos;
        animal = "C";
    }
    if (cantidadPeces > mayor) {
        mayor = cantidadPeces;
        animal = "P";
    }
    if (cantidadTarantulas > mayor) {
        animal = "T";
    }
    return animal;
}

int main() {
    int cantidad;
    int cantidadAves = 0;
    int cantidadGatos = 0;
    int cantidadConejos = 0;
    int cantidadPeces = 0;
    int cantidadTarantulas = 0;
    int sumaEdades2o4Patas = 0;
    int cantidadAnimales2o4Patas = 0;
    int sumaPesos4oMasPatas = 0;
    int existeAnimalSinPatas = 0;

    string animalMenorEdad = "";
    int menorEdad = 0;
    string animalMayorEstatura = "";
    int mayorEstatura = 0;

    do {
        cout << "Ingrese la cantidad de animales: ";
        cin >> cantidad;
        if (cantidad < 0) {
            cout << "Valor invalido. Intente de nuevo.\n";
        }
    } while (cantidad < 0);

    for (int i = 0; i < cantidad; i++) {
        string animal;
        int peso;
        int edad;
        int estatura;
        int patas;

        cout << "\nAnimal " << i + 1 << " de " << cantidad << endl;

        do {
            cout << "Ingrese la inicial del animal:\n";
            cout << "A - Aves\n";
            cout << "G - Gatos\n";
            cout << "C - Conejos\n";
            cout << "P - Peces\n";
            cout << "T - Tarantulas\n";
            cin >> animal;
            if (validarTipoAnimal(animal) == 0) {
                cout << "Opcion invalida. Intente de nuevo.\n";
            }
        } while (validarTipoAnimal(animal) == 0);
        cout << "Ingrese el peso del animal en gramos: ";
        cin >> peso;
        cout << "Ingrese la edad del animal en meses: ";
        cin >> edad;
        cout << "Ingrese la estatura del animal en centimetros: ";
        cin >> estatura;
        contarAnimal(animal, cantidadAves, cantidadGatos, cantidadConejos, cantidadPeces, cantidadTarantulas);
        patas = cantidadPatas(animal);
        if (patas == 2 || patas == 4) {
            sumaEdades2o4Patas = sumaEdades2o4Patas + edad;
            cantidadAnimales2o4Patas++;
        }
        if (patas >= 4) {
            sumaPesos4oMasPatas = sumaPesos4oMasPatas + peso;
        }
        if (i == 0 || edad < menorEdad) {
            menorEdad = edad;
            animalMenorEdad = animal;
        }
        if (i == 0 || estatura > mayorEstatura) {
            mayorEstatura = estatura;
            animalMayorEstatura = animal;
        }

        if (patas == 0 && peso >= 1000 && peso <= 3000 && estatura < 50) {
            existeAnimalSinPatas = 1;
        }
    }

    int totalAnimales = cantidadAves + cantidadGatos + cantidadConejos + cantidadPeces + cantidadTarantulas;
    double promedioEdadAnios = 0;
    double sumaPesosKilogramos = convertirGramosKilogramos(sumaPesos4oMasPatas);
    string tipoMasExperimentos = animalMasExperimentos(cantidadAves, cantidadGatos, cantidadConejos, cantidadPeces, cantidadTarantulas);
    if (cantidadAnimales2o4Patas > 0) {
        promedioEdadAnios = convertirMesesAnios(sumaEdades2o4Patas) / cantidadAnimales2o4Patas;
    }
    cout << "\nCantidad de cada tipo de animal:\n";
    cout << "Aves: " << cantidadAves << endl;
    cout << "Gatos: " << cantidadGatos << endl;
    cout << "Conejos: " << cantidadConejos << endl;
    cout << "Peces: " << cantidadPeces << endl;
    cout << "Tarantulas: " << cantidadTarantulas << endl;
    calcularPorcentaje(cantidadAves, cantidadGatos, cantidadConejos, cantidadPeces, cantidadTarantulas, totalAnimales);
    cout << fixed << setprecision(2);
    cout << "\nPromedio de edad en anios de animales con 2 o 4 patas: " << promedioEdadAnios << endl;
    cout << "Suma total de pesos en kilogramos de animales con 4 o mas patas: " << sumaPesosKilogramos << endl;
    cout << "\nAnimal con menor edad en meses: " << animalMenorEdad << " - " << descripcionAnimal(animalMenorEdad) << " - " << menorEdad << " meses" << endl;
    cout << "Animal con mayor estatura en centimetros: " << animalMayorEstatura << " - " << descripcionAnimal(animalMayorEstatura) << " - " << mayorEstatura << " cm" << endl;
    if (existeAnimalSinPatas == 1) {
        cout << "\nSi existe un animal sin patas, con peso entre 1000 y 3000 gramos y estatura inferior a medio metro.\n";
    } else {
        cout << "\nNo existe un animal sin patas, con peso entre 1000 y 3000 gramos y estatura inferior a medio metro.\n";
    }
    cout << "\nAnimal con mas experimentos: " << tipoMasExperimentos << " - " << descripcionAnimal(tipoMasExperimentos) << endl;
    return 0;
}
