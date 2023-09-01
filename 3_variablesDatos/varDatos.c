#include <stdio.h>

void imprimirDatos(char *name, int age);


int main()
{
    //declaro un caracter y un número.
    char x;
    int y;

    x = 'c';
    y = 25;

    int z = 2 * y;

    //printf("y = %d, x = %c", y, x);

    imprimirDatos("Juan luis", 18);

    return 0;
}

// referncia de cadena (puntero)
void imprimirDatos(char *name, int age)
{
    printf("hola, tu nombre es %s y tienes %d", name, age);
}