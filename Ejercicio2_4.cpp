#include <iostream>

// Función para calcular la moda
int* calcularModa(int *array, int n) {
    if (n == 0) return nullptr; //Si el array está vacío, no hay moda
    int* moda = &array[0];
    int maxCount = 1;
    int currentCount = 1;
    //Como el array está ordenado, sabremos que cuantos hay de cada número al encontrar que el siguiente es diferente
    for (int i = 0; i < n; ++i) {
        if (array[i] == array[i+1]) {
            ++currentCount;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                moda = &array[i];
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        moda = &array[n - 1];
    }

    return moda;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 5};
    // Tamaño = tamaño array / tamaño elemento
    int n = sizeof(arr) / sizeof(arr[0]);

    int* moda = calcularModa(arr, n);

    if (moda != nullptr) {
        std::cout << "La moda es " << *moda << std::endl;
    } else {
        std::cout << "El array está vacío." << std::endl;
    }

    return 0;
}
