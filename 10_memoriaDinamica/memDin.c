#include <stdio.h>
#include <stdlib.h>

/*
    Diferencias entre VLAs y MEMORIA DINAMICA

    1. VLA solo disponilbe en c99
    2. son varibles locales, quedan alamcenados en la pila del ordenador (no podra ser tan grande)
*/

///MALLOC
/*
    cuantos bytes queremos reservar para nuestro espacio y con ello devolvera un buffer que podemos guardar en una variable
    para acceder a el y guardar cosas en el

    malloc(numero_de_bytes) 

    reservar 4000 flotantes, un flotante ocupa 4 bytes, enotonces seria la sintaxis asi 

    cantidad = 4000
    malloc (cantidad * sizeof(float))


    por lo que siempre habra que indicar la cantidad y el tipo del que se quiere resver tamaño

    malloc() retorna void, por lo que tambien sera necesario hacer un cast y guardar la direccion en un puntero, por ejemplo

    float * valores = (float*) malloc(4000 * sizeof(float));
*/

int main()
{
    int sizeArray;

    printf("cuantos?");
    scanf("%d", &sizeArray);

     float * valores = (float*) malloc(sizeArray * sizeof(float));

    if(valores == NULL)
    {
        printf("Erro, no hay memoria.\n");
        return 1;
    }

     for(int i = 0; i < sizeArray; i++)
     {
        printf("ingrse valor %d: ", i);
        scanf("%f", &valores[i]);
     }

     for(int i = 0; i < sizeArray; i++)
            printf("valor %d: %.2f\n", i, valores[i]);

    free(valores);
    return 0;
}