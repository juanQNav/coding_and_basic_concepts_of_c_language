#include <stdio.h>

int main ()
{
    int k = 10;

    //pirmero comprueba la condición y luego ejecuta el codigo (0 o mas veces)

    /*
    while (k < 20)
    {
        printf("k vale %d\n", k);
        k++;
    }
    */

   //se ejecuta primero y luego comprueba la condición (1 o más veces)

   /*
   do{
        printf("k vale %d\n", k);
        k++;
   }while(k < 20);
    */
   
   for(int i = 0; i < 5 ; i++ )
   {
        printf("ahora estoy en la iteracion %d.\n", i);
   }

    return 0;
}