#include <stdio.h>

// Declaración de funciones
int elevarAlCuadrado(int num);
void elevarAlCuadradoVoid(int *num);
void mostrarInfo(int var);
void invertir(int *a, int *b);
void orden(int *a, int *b);

void main() {
    int numA, numB;

    printf("Ingrese un numero: ");
    scanf("%d", &numA);

    printf("Ingrese otro numero: ");
    scanf("%d", &numB);

    orden(&numA, &numB);

    printf("El menor es: %d \n", numA);
    printf("El mayor es: %d \n", numB);
};

// Definición de funciones
int elevarAlCuadrado(int num) {
    return (num * num);
};

void elevarAlCuadradoVoid(int *num) {
    *num = elevarAlCuadrado(*num);
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

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    };
};
