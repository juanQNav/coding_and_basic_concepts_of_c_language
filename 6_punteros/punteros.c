#include <stdio.h>

void jugar (int* n);

int main()
{
    int x = 10;

    /*
    printf("%d\n", x);
    printf("direccion de memoria = %u\n", &x);
    */

   jugar(&x);
   printf("%d\n", x);

    return 0;
}

void jugar (int* n)
{
    /* n es recibido por referncia
        es decir que los cambios realizados en esta funcion se veran refljeados 
    */
   int y = *n; 
   y = (y + 2) / 2 + 2 - (3 * y);
   *n = y;
}