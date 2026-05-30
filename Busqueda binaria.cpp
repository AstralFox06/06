#include <iostream>  // Para entrada y salida de datos (cin, cout)
#include <algorithm> // Para usar la función de ordenamiento sort

using namespace std; // Evita usar el prefijo std::

int main() {
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 }; // Inicializa un array de enteros desordenado
    int clave;                             // Variable para almacenar el número a buscar
    bool encontrado = false;               // Bandera para indicar si se halló el número
    int indice = -1;                       // Almacena la posición del número encontrado

    // Calcula el número de elementos del array dividiendo su tamaño total entre el tamaño de un elemento
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Ordena el array (requisito obligatorio para aplicar búsqueda binaria)
    sort(arreglo, arreglo + tamano);

    // Muestra el array ordenado en pantalla
    cout << "Array ordenado: ";
    for (int n : arreglo) cout << n << " ";
    cout << endl;

    // Solicita al usuario el número que desea buscar
    cout << "Ingresa un numero a buscar: ";
    cin >> clave;

    // Inicializa los límites izquierdo y derecho para la búsqueda binaria
    int izquierda = 0;
    int derecha = tamano - 1;

    // Bucle principal de la búsqueda binaria
    while (izquierda <= derecha) {
        // Calcula el punto medio de forma segura para evitar desbordamientos de memoria
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == clave) {       // Caso 1: El elemento del medio es el buscado
            encontrado = true;
            indice = medio;
            break;                           // Termina el bucle inmediatamente
        }
        else if (arreglo[medio] < clave) {   // Caso 2: El número buscado es mayor, descartar mitad izquierda
            izquierda = medio + 1;           // Mueve el límite izquierdo hacia adelante
        }
        else {                               // Caso 3: El número buscado es menor, descartar mitad derecha
            derecha = medio - 1;             // Mueve el límite derecho hacia atrás
        }
    }

    // Verifica el resultado de la búsqueda
    if (encontrado) {
        // Muestra la posición en pantalla si el número fue hallado
        cout << "Numero encontrado en la posicion: " << indice << endl;
    }
    else {
        // Informa al usuario si el número no está en el array
        cout << "Numero no encontrado" << endl;
    }

    return 0; // Fin del programa con éxito
}