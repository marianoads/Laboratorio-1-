#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include "vectores.h"                         //&vector    |
                                           //vector     |en printf estas tres son lo mismo (REFERENCIA)(Direccion de memoria)
 void cargarVector(int[],int tam);
 int buscarValor(int[],int, int);                                      //&vector[0] |

int main()
{
    int vec[TAM];
    int vector[5] = {9,-3,5,14,-4}; //5 enteros son 20 bytes en memoria
    int i; //cuando usamos en for "i"(variable de control) tiene que valer 0
    int mayor;
    int indice;


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

    mayor= buscarMaximo(vector, TAM);
    printf("El numero maximo ingresado es %d\n", mayor);

    indice = buscarValor(vector, TAM, 14);
    if(indice == -1)
    {
        printf("No lo encontro!!\n");
    }
    else
    {printf ("Encontro el valor\n");
    }


    return 0;
}
int buscarMaximo(int vec[], int tam)
{
    int maximo;
    int i;
    int flag =0;

    for(i=0;i<tam;i++)
    {
        if(flag==0 || vec[i]>maximo)
        {
            maximo=vec[i];
            flag=1;
        }

    }


    return maximo;
}


     int buscarValor(int vec[],int tam, int valor)
     {
         int index = -1;
         int i;
         for(i=0;i<tam; i++)
         {
             if(valor == vec[i])
                {
                index= i;
                break;
                }

         }

         return index;
     }






