#include <iostream>

unsigned long long factorial(int n) {
    // Caso base
    if (n == 0) {
        return 1;
    }
    //f(n) = n * f(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned numero = 19;
    unsigned long long resultado = factorial(numero);
    std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    return 0;
}
