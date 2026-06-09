#include <stdio.h> // Libreria para entrada y salida de datos
#include <stdlib.h> // Libreria para generar numeros random
#include <time.h> // Libreria para obtener la hora del sistema

int main()
{
    srand(time(NULL));

    int numero_random = (rand() % 10) + 1;
    int numero_intentos = 3;
    int numero_ingresado;

    printf("***Adivina el numero***\nIngresa un numero: ");
    scanf("%d", &numero_ingresado);
    
    if (numero_ingresado != numero_random)
    {
        numero_intentos--;
    }

    while (numero_ingresado != numero_random && numero_intentos != 0)
    {
        if (numero_ingresado < numero_random)
        {
            printf("Estas cerca del numero!\n");
            printf("Te quedan: %d intentos\n", numero_intentos);

            printf("Intentalo denuevo: ");
            scanf("%d", &numero_ingresado);
            numero_intentos--;
        }
        else
        {
            printf("Estas lejos del numero!\n");
            printf("Te quedan: %d intentos\n", numero_intentos);

            printf("Intentalo denuevo: ");
            scanf("%d", &numero_ingresado);
            numero_intentos--;
        }
    }

    if (numero_intentos <= 0 && numero_ingresado != numero_random)
    {
        printf("Perdiste, se te han acabado los intentos!!!");
    }

    if (numero_ingresado == numero_random)
    {
        printf("Has acertado!!\n");
        printf("El numero era: %d", numero_random);
    }

    return 0;
}