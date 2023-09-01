#include <stdio.h>


void imprimirDia(int numDia);
int main()
{
    int x = 20;


    // condicionales 
    
    /*
    if(x == 20){
         printf("x vale 20");
    }else{
        printf("x no vale 20");
    }

    printf("\nesto se ejecuta siempre");
    */

   imprimirDia(2);

    return 0;
}

void imprimirDia(int numDia)
{
    //uso del switch
    switch (numDia)
    {
    case 1:
        printf("lunes");
        break;
    case 2:
        printf("martes");
        break;
    case 3:
        printf("miercoles");
        break;
    case 4:
        printf("jueves");
        break;
    case 5:
        printf("viernes");
        break;
    case 6:
        printf("sabado");
        break;
    case 7: 
        printf("domingo");
        break;
    default:
        printf("no es un dua de la semana\n");
        break;
    }
}