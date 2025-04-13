#include "combinaciones.hpp"
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int n, r;
    // Lectura y validación de entrada
    while (true) {
        cout << "Ingrese n (>=1): ";
        if (!(cin >> n) || n < 1) {
            cin.clear(); std::cin.ignore(1e6, '\n');
            cerr << "n inv\240lido. Intente de nuevo.\n";
            continue;
        }
        cout << "Ingrese r (0 <= r <= n): ";
        if (!(cin >> r) || r < 0 || r > n) {
            cin.clear(); std::cin.ignore(1e6, '\n');
            cerr << "r inv\240lido. Intente de nuevo.\n";
            continue;
        }
        break;
    }

    // Nombre de archivo CSV
    string filename = "combinaciones_n" + to_string(n)
                         + "_r" + to_string(r) + ".csv";
    ofstream ofs(filename);
    if (!ofs) {
        cerr << "Error al crear el archivo.\n";
        return 1;
    }

    // Medición del tiempo de generación
    auto t1 = chrono::high_resolution_clock::now();
    unsigned long long generated = generate_combinations_csv(n, r, ofs);
    auto t2 = chrono::high_resolution_clock::now();

    ofs.close();

    // Cálculo teórico
    unsigned long long theoretical = binomial_coefficient(n, r);

    // Mostrar resultados
    cout << "Generadas: " << generated << " combinaciones\n";
    cout << "Teóricas: " << theoretical << " combinaciones\n";
    if (generated == theoretical)
        cout << "Conteo finalizado.\n";
    else
        cout << "¡Error en el conteo!\n";

    cout << "Archivo CSV: "
              << filesystem::absolute(filename)
              << "\n";

    return 0;
}
