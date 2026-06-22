#include <stdio.h>
#include <stdlib.h>

// Definicion de "Clase"
typedef struct Persona
{
    char nombre[50];
    int edad;
    // Comportamiento (Metodos)
    void (*saludar) (struct Persona* self);
} Persona;

// Implementacion del "Metodo"
void saludar_persona(Persona* self)
{
    printf("Hola, soy %s y tengo %d anios.\n", self->nombre, self->edad)
}

// Funcion constructora para instanciar el "objeto"
Persona* crear_persona(char* nombre, int edad)
{
    Persona* nueva_persona = (Persona*)malloc(sizeof(Persona));
    snprintf(nueva_persona->nombre, sizeof(nueva_persona->nombre), "%s", nombre);
    nueva_persona->edad = edad;
    nueva_persona->saludar = saludar_persona;
    return nueva_persona;
}

int main(void)
{
    Persona* p1 = crear_persona("Ignacio", 20);
    p1->saludar(p1); // invocacion de Metodo

    free(p1);
    return 0;
}
