#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Productos.h"
#include "Productos.c"
#define TAM 5



int main()
{
    int IdProducto[TAM]={};
    char Descripcion[TAM] [50];  //DEFINE LA FILA DE MATRIZ CANT DESCRIPCIONES, Y COLUMNA(CANTIDAD DE CARACTERES QUE PUEDO GUARDAR EN CADA MATRIZ)
    int Stock[TAM];
    float PrecioUnitario[TAM];
    int opcion;
    int i, posicion;



    do{

    printf("1. Cargar\n");
    printf("2. Mostrar\n");
    printf("3. Ordenar\n");
    printf("9. SALIR\n");
    printf("Ingrese una opcion :");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
    printf("Cargo\n");
    posicion = buscarLibre(IdProducto, TAM);
    printf("Primer libre %d\n", posicion);



    //Llamar funcion buscar Libre
    /*1- Pedir posicion
    2- Pedir dato
    3- Preguntar si quiere cargar otro*/
        if(posicion!=-1)
        {
            printf("Ingrese un ID :");
        scanf("%d", &IdProducto[posicion ]);
        printf("Ingrese descripcion :");
        fflush(stdin);
        gets(Descripcion[posicion]);
        printf("Ingrese un Stock :");
        scanf("%d", &Stock[posicion ]);
        printf("Ingrese precio unitario :");
        scanf("%f", &PrecioUnitario[posicion ]);
        }
        else{
            printf("No hay espacio \n");
        }




        break;

    case 2:
    printf("Muestro\n");
        printf(mostrarProductos);
    /*mostrar cada vector paralelo*/
        break;

    case 3:
    printf("Ordeno\n");
        break;
  }
        system("pause");
        system("cls");

    }while(opcion != 9);


    return 0;
}

