#include <stdio.h>
#include <stdlib.h>

void capturar_enteros()
{
    int enteros[5], suma=0;
    float promedio;
    for (size_t i = 0; i < 5; i++)
    {
        printf("Ingrese el entero #%d: ",i+1);
        scanf("%d",&enteros[i]);
    }
    printf("Enteros ingresados = [");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d", enteros[i]);
        if(i<4){
            printf(", ");
        }
        else
        {
            printf("]\n");
        }
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }
    printf("Suma = %d\n",suma);
    printf("Promedio = %.2f\n", suma/5.0);
}


int main()
{
    char opc;
    do
    {
        printf("1. Capturar enteros\n");
        printf("2. Mostrar cadena n veces\n");
        printf("3. Agregar personajes\n");
        printf("4. Salir\n");
        scanf("%c", &opc);
        fflush(stdin);
        switch (opc)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        default:
            printf("Valor invalido\n");
        }
        fflush(stdin);
        system("pause");
    } while (opc != '4');
    return 0;
}