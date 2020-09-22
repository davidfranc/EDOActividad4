#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>

struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int count=0;

void capturar_personajes(){
    if (count < 5){
        printf("Nombre: ");
        scanf("%s", personajes[count].nombre);
        printf("Tipo: ");
        scanf("%s", personajes[count].tipo);
        printf("Fuerza: ");
        scanf("%f", &personajes[count].fuerza);
        printf("Salud: ");
        scanf("%d", &personajes[count].salud);
        count++;
    }
    else
    {
        printf("Arreglo de personajes esta lleno\n");
    }
}

void mostrar_personajes(){
    for (size_t i = 0; i < count; i++)
    {
        printf("Nombre: %s\n", personajes[i].nombre);
        printf("Tipo: %s\n", personajes[i].tipo);
        printf("Fuerza: %.2f\n", personajes[i].fuerza);
        printf("Salud: %d\n", personajes[i].salud);
    }
    
}
#endif