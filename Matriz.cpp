#include <iostream> // Para usar cout y endl
#include <vector>   // Para usar vectores dinámicos

using namespace std; // Evita escribir "std::" antes de vector o cout

int main() {
    int filas = 3, columnas = 4; // Define las dimensiones de la matriz

    // Crea una matriz dinámica de 3 filas x 4 columnas
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // Llenado de la matriz con bucles anidados convencionales
    for (int i = 0; i < filas; i++) { // Recorre filas (0 a 2)
        for (int j = 0; j < columnas; j++) { // Recorre columnas (0 a 3)
            matriz[i][j] = (i + 1) * (j + 1); // Asigna el producto de los índices + 1
        }
    }

    // Impresión de la matriz con bucles rango-for (for-each)
    for (const auto& fila : matriz) { // Recorre cada fila como referencia constante
        for (int valor : fila) { // Recorre cada elemento de la fila actual
            cout << valor << "\t"; // Imprime el valor seguido de una tabulación
        }
        cout << endl; // Salto de línea al terminar cada fila
    }

    return 0; // Fin del programa con éxito
}