#include <stdio.h>

// Definición de funciones
int elevarAlCuadrado(int num);
void elevarAlCuadradoVoid(int *num);
void mostrarInfo(int var);
void invertir(int *a, int *b);

void main() {
    int numA = 10;
    int numB = 7;

    printf("El valor de A es: %d y el valor de B es: %d \n", numA, numB);

    invertir(&numA, &numB);

    printf("El nuevo valor de A es: %d y el nuevo valor de B es: %d", numA, numB);
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

void invertir(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
};
