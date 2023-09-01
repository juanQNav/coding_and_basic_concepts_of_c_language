#include <stdio.h>
#include <stdlib.h>


float media(int* edades, int tam);

int main ()
{
    int tam;

    printf("¿cuantos? ");
    scanf("%d", &tam);

    //Un VLA permite declarar un arreglo sin un tamaño definido y asignar el tamaño en tiempo de ejecucón, pero no es recomendable.

    int edades[tam];
    

    for (int i = 0; i < tam; i++)
    {
        printf("Introduce la edad %d: ", i + 1);
        scanf("%d", &edades[i]);
    }

    printf("la media es: %f", media(edades, tam));

    return 0;
}

float media(int* edades, int tam)
{
    float sum = 0;

    for(int i = 0; i < tam; i++)
    {
        sum += edades[i];
    }

    return(sum / tam);
}