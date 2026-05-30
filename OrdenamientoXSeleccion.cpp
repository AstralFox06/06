#include <iostream> // Para manejo de entrada y salida (cout)

using namespace std; // Evita usar el prefijo std::

// Función que ordena un array usando el algoritmo de ordenamiento por selección (Selection Sort)
void selectionSort(int arr[], int n) {
    // Bucle externo: recorre el array posición por posición buscando el elemento adecuado
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; // Asume inicialmente que el elemento actual es el mínimo de la sección no ordenada

        // Bucle interno: busca el valor más pequeño en el resto del array no ordenado
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) { // Si encuentra un elemento menor
                minIdx = j;             // Actualiza el índice del nuevo valor mínimo encontrado
            }
        }

        // Intercambia el elemento mínimo encontrado con el elemento de la posición actual 'i'
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };     // Inicializa un array desordenado
    int n = sizeof(arr) / sizeof(arr[0]); // Calcula el número total de elementos del array

    selectionSort(arr, n); // Llama a la función para ordenar el array

    // Bucle para imprimir en consola los elementos del array ya ordenados
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0; // Fin del programa con éxito
}