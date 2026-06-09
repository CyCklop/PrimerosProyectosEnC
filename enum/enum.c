#include <stdio.h>

// lista de constantes (internamente enteros)
enum estado_servidor
{
    APAGADO, // 0
    ENCENDIDO, // 1
    ERROR // 2
};

int main(void)
{
    enum estado_servidor mi_servidor = APAGADO;

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