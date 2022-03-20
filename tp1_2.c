#include <stdio.h>

// Definición de funciones
int elevarAlCuadrado(int num);
void elevarAlCuadradoVoid(int *num);

void main() {
    int num = 4;

    printf("El numero es: %d\n", num);

    elevarAlCuadradoVoid(&num);

    printf("Y su cuadrado es: %d\n", num);
};

// Declaración de funciones
int elevarAlCuadrado(int num) {
    return (num * num);
};

void elevarAlCuadradoVoid(int *num) {
    *num = (*num) * (*num);
};
