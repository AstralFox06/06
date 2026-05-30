#include <iostream> // Para entrada y salida de datos (cin, cout)

using namespace std; // Evita usar el prefijo std::

int main() {
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 }; // Inicializa un array desordenado
    int clave;                             // Guarda el número a buscar
    bool encontrado = false;               // Bandera para verificar el estado de la búsqueda

    // Solicita al usuario el número a buscar
    cout << "Ingresa un número a buscar: ";
    cin >> clave;

    // Calcula el número de elementos del array
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Bucle para búsqueda lineal (recorre posición por posición)
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == clave) { // Compara el elemento actual con el buscado
            cout << "Número encontrado en la posición: " << i << endl;
            encontrado = true; // Cambia el estado a verdadero
            break;             // Detiene el bucle al encontrar la primera coincidencia
        }
    }

    // Si el ciclo terminó y la bandera sigue en falso
    if (!encontrado) {
        cout << "Número no encontrado en el array" << endl;
    }

    return 0; // Fin del programa con éxito
}