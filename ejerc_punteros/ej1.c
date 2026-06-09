#include <stdio.h>

int main(void)
{
    int nivel = 5;
    int *ptr_nivel = &nivel;

    printf("valor normal de nivel: %d\n", nivel);

    // Se pasa el puntero, no el valor entero
    printf("direccion de memoria de nivel: %p\n", ptr_nivel);
    
    // Se usa '*' para desreferenciar (entrar a la direccion y ver el valor)
    printf("valor usando el puntero: %d\n", *ptr_nivel);
    return 0;
} 