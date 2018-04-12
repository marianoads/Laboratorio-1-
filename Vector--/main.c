#include <stdio.h>
#include <stdlib.h>
#define TAM 5                              //&vector    |
                                           //vector     |en printf estas tres son lo mismo (REFERENCIA)(Direccion de memoria)
                                           //&vector[0] |
void mostrarVector(int vec[], int);
void modificarValor(int[]);

int main()
{   int vector[TAM];
    int i; //cuando usamos en for "i"(variable de control) tiene que valer 0

    for(i=0;i<TAM;i++)
    {
         vector[i] = 0;
    }
         /*Carga Secuencial*/


     for(i=0;i<TAM;i++)
     {
        printf ("Ingrese un numero :");
        scanf ("%d", &vector[i]);
     }


        /*Mostrar el vector*/
    for(i=0;i<TAM;i++)
    {
            printf ("%d -- %d\n",i, vector[i]);
    }

    mostrarVector(vector, TAM);

    mostrarVector(vector, TAM);

    return 0;
}
void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
            printf ("%d -- %d\n",i, vec[i]);
    }

    void modificarValor(int vec[])
    {
        vec[3] = 789;
    }
}
