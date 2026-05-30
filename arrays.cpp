#include <iostream> // Para manejo de entrada y salida
#include <vector>   // Para uso de vectores dinámicos

using namespace std; // Evita usar prefijo "std::"

int main() {
    vector<int> numeros = { 1, 2, 3, 4, 5 }; // Inicializa vector con 5 elementos

    cout << "Elementos del vector: ";
    // Imprime elementos usando referencia constante (solo lectura, evita copias)
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Modifica los elementos sumándoles 1 mediante referencia directa (&)
    for (auto& num : numeros) {
        num += 1;
    }

    cout << "Elementos modificados: ";
    // Imprime los elementos ya modificados
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0; // Fin del programa con éxito
}