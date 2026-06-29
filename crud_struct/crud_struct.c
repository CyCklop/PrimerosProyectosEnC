#include <stdio.h>
#include <stdlib.h>
// "clase"
.
#define MAX 5 // numero maximo de pokemons a crear
// "clase"
typedef struct Pokemon
{
    char nombre[50];
    char tipo[50];
    int nivel;
    float danio;

    void (*chequear) (struct Pokemon* self) 
} Pokemon;

void chequear_pokemon(Pokemon* self)
{
    printf("Nombre pok: %s\nTipo pok: %s\n", self->nombre, self->tipo);
    printf("Nivel pok: %d\nDanio pok: %f\n", self->nivel, self->danio);
}
// "Constructor"
Pokemon* crear_pokemon(char* nombre, char* tipo, int nivel, float danio)
{
    Pokemon* nuevo_pokemon = (Pokemon*)malloc(sizeof(Pokemon));
    snprintf(nuevo_pokemon->nombre, sizeof(nuevo_pokemon->nombre), "%s", nombre);
    snprintf(nuevo_pokemon->tipo, sizeof(nuevo_pokemon->tipo), "%s", tipo);
    nuevo_pokemon->nivel = nivel;
    nuevo_pokemon->danio = danio;
    return nuevo_pokemon;
}

int main(void)
{
    Pokemon pok[MAX];
    int opcion;
    int contador = 0;

    printf("/// INGRESAR POKEMON ///\n1.- Ingresar Pokemon\n2.-\n");
    printf("3.-\n4.-\nIngresar opcion: ");

    scanf("%d", &opcion);

    do
    {
        switch (opcion)
        {
            case 1:
            {
                if (contador >= MAX)
                {
                    printf("Error, llegaste al maximo de pokemons a crear...");
                    break;
                }

                printf("Asigne un nombre al pokemon: \n");
                scanf("%s", &pok[contador].nombre);

                printf("Asigne el tipo al pokemon: \n")
                scanf("%s", &pok[contador].tipo);

                printf("Asigne el nivel al pokemon\n");
                scanf("%d", &pok[contador].nivel);
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                printf("Saliendo...");
                break;
            }
        }
    } while (opcion != 4);

    return 0;
}
