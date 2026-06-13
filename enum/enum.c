#include <stdio.h>

// lista de constantes (internamente enteros)
typedef enum 
{
    APAGADO,
    ENCENDIDO,
    ERROR
} MiEnum;

int main(void)
{
    MiEnum mi_servidor = APAGADO;

    switch (mi_servidor)
    {
    case APAGADO:
        printf("El servidor esta apagado\n");
        break;
    case ENCENDIDO:
        printf("El servidor esta encendido\n");
        break;
    default:
        printf("El servidor tiene el error: %d\n", ERROR);
        break;
    }

    return 0;
}