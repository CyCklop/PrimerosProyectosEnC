#include <stdio.h>

int main(void)
{
    int clave = 2233;
    int intentos = 3;
    int clave_ingresada;

    printf("INTENTOS RESTANTES: %d\n", intentos);

    while (intentos >= 0)
    {
        printf("Ingrese la clave: ");
        scanf("%d", &clave_ingresada);
     
        if(clave_ingresada == clave)
        {
            printf("Accediendo al sistema...");
            break;
        }
        else
        {
            intentos --;
            printf("Clave incorrecta...\n");
            printf("INTENTOS RESTANTES: %d\n", intentos);
        }
    }

    return 0;
}