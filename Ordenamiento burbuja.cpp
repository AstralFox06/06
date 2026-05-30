#include <iostream> // Para manejo de entrada y salida (cout)

using namespace std; // Evita usar el prefijo std::

// Función que ordena un array usando el método de ordenamiento de burbuja (Bubble Sort)
void bubbleSort(int arr[], int n) {
    // Bucle externo: controla el número de pasadas sobre el array
    for (int i = 0; i < n - 1; i++) {
        // Bucle interno: compara elementos adyacentes; reduce el rango en cada pasada ya que los mayores "flotan" al final
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor que el siguiente, se intercambian
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Intercambia los valores de posición
            }
        }
    }
}

// Función auxiliar para imprimir los elementos del array en pantalla
void printArray(int arr[], int n) {
    // Recorre e imprime cada elemento seguido de un espacio
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl; // Salto de línea final
}

int main() {
    int arr[] = { 5, 2, 9, 1, 5, 6 }; // Inicializa un array desordenado
    int n = sizeof(arr) / sizeof(arr[0]); // Calcula el número total de elementos

    bubbleSort(arr, n); // Llama a la función para ordenar el array
    printArray(arr, n); // Llama a la función para mostrar el array ordenado

    return 0; // Fin del programa con éxito
}