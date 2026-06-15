#include <stdio.h>
#define MAX 100 //se define 'MAX' como 100 para mejorar legibilidad del codigo

typedef struct Producto
{
    int id;
    char nombre_producto[50];
    float precio;
}Producto;

int main(void)
{
    Producto inventario[MAX];
    int opcion;
    int contador = 0;

    do
    {
        printf("INVENTARIO DE PRODUCTOS\n1.- Agregar Producto\n2.- Ver Inventario\n3.- Eliminar Producto\n4.- Salir");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
        {
            if(contador >= MAX)
            {
                printf("Error, el inventario esta lleno...\n");
                break;
            }

            printf("Asigne un id al producto: ");
            scanf("%d", &inventario[contador].id);

            printf("Asigne un nombre al producto: ");
            scanf("%s", &inventario[contador].nombre_producto);

            printf("Asigne un precio al producto: ");
            scanf("%f", &inventario[contador].precio);

            contador ++;
            break;
        }
        case 2:
        {
            if(contador == 0)
            {
                printf("Error, el inventario esta vacio...\n");
                break;
            }

            for (int i = 0; i < contador; i++)
            {
                printf("///*LISTA DE PRODUCTOS*///");
                printf("///*ID: %d\n", &inventario[i].id);
                printf("///*Nombre Producto: %s\n", &inventario[i].nombre_producto);
                printf("///*Precio: %f\n", &inventario[i].precio);
                printf("///*******************///");
            }
            break;
        }
        case 3:
            // agregar la forma de eliminar un producto
            break;

        case 4:
            printf("Saliendo del sistema de inventario...");
            break;

        default:
            printf("Error, ingrese una opción valida...");
            break;
        }
    } while (opcion != 4);

    return 0;
}