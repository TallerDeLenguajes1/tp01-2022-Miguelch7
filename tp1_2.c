#include <stdio.h>

// Definición de funciones
int elevarAlCuadrado(int num);

void main() {
    int num = 5;

    printf("El numero es: %d\n", num);

    num = elevarAlCuadrado(num);

    printf("Y su cuadrado es: %d\n", num);
};

// Declaración de funciones
int elevarAlCuadrado(int num) {
    return (num * num);
};