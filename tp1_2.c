#include <stdio.h>

// Definición de funciones
int elevarAlCuadrado(int num);
void elevarAlCuadradoVoid(int *num);
void mostrarInfo(int var);

void main() {
    int num = 2;

    mostrarInfo(num);
};

// Declaración de funciones
int elevarAlCuadrado(int num) {
    return (num * num);
};

void elevarAlCuadradoVoid(int *num) {
    *num = (*num) * (*num);
};

void mostrarInfo(int var) {
    printf("La dirección de memoria de la variable es: %p \n", &var);
    printf("El contenido de la variable es: %d \n", var);
};
