#include <stdio.h>
#include <string.h>

////STRUCT
/*
    agrupa variabes, cada elemento del conjunto
    tiene su direccion de memoria propia
*/
struct cuenta
{
    char nombre [30];
    char apellido[40];
    int ide;
    int saldo;
};


void imprimirDatos(struct cuenta* c);

int main()
{
    struct cuenta c1;
    
    strcpy(c1.nombre, "Pepito");
    strcpy(c1.apellido, "Perez");
    c1.ide = 12345;
    c1.saldo = 400;

    imprimirDatos(&c1);

    return 0;
}

void imprimirDatos(struct cuenta* c)
{

    //operador flecha, cuando hay un puntero de struct "(*c). = c->"
     
    printf("El cliente %s %s tiene %d pesos en cuenta.\n",c->nombre, c->apellido, c->saldo);
}