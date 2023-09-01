#include <stdio.h>
#include <string.h>


////UNION
/*
    todos los campos comparten la misma
    dirección de memoria 
*/
union miUnion
{
    int entero;
    float flotante;
};


////ENUM
/*
    Construir un conjunto de identificadores
*/
enum diasSemana{LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};


// * typedef enum diasSemana DIAS;

////TYPEDEF
/*
     Renombrar tipos de datos
*/

enum tipoEmpleado{Analista, Programador};

struct empleadoT{
    char nombre [20];
    char apellido[20];
    char nif[10];
    char telefono[10];
    enum tipoEmpleado tipo;
};

typedef struct empleadoT Empleado;

//funcion para imprimir Empleado
void imprimirEmpl(Empleado* empl);

int main()
{
    union miUnion u;

    u.entero = 123456789;

    /*si afecto el contenido de flotante
    tambien estoy afectando el contenido de
    entero
    */
    u.flotante = 2.54E6;
    printf("entero = %d\n", u.entero);

    enum diasSemana dia;

    dia = MARTES;
    /*impirme el numero correspondiente a la
        posicion del enum
    */
    printf("%d\n", dia);


    Empleado empl;

    strcpy(empl.nombre, "Juan");
    strcpy(empl.apellido, "Quistian");
    strcpy(empl.nif, "234");
    strcpy(empl.telefono, "4446556326");
    empl.tipo = Analista;

    imprimirEmpl(&empl);
    
    return 0;
}

void imprimirEmpl(Empleado* empl)
{
    printf("Nombre: %s\n", empl->nombre);
    printf("Apellido: %s\n", empl->apellido);
    printf("nif: %s\n", empl->nif);
    printf("telefono %s\n", empl->telefono);
    printf("tipo: %d\n", empl->tipo);
}