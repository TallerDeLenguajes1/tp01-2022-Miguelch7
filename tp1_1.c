#include <stdio.h>

void main() {
    int num = 1;
    int *p_num = &num;

    printf("El contenido del puntero: %d\n", *p_num);
    printf("La dirección de memoria almacenada por el puntero: %p\n", p_num);
    printf("La dirección de memoria de la variable: %p\n", &num);
    printf("La dirección de memoria del puntero: %p\n", &p_num);
    printf("El tamaño de memoria utilizado por la variable: %d bytes\n", sizeof(num));
};
