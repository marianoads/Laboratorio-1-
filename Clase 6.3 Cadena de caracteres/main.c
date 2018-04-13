#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Funciones manejo codigo de caracteres string.h

int main()
{    //char palabra [10]; {'h','o','l','a','\0' , , , , , ,} PARA TERMINAR UNA CADENA DE CARACTERES USAMOS (\0)
     // Se usa un caracter para el "\0"

    char palabra1 [15]="Hola";   //Cuando declaramos la variable se puede ingresar una palabra/cadena de caracteres
    char palabra2 [15];
    char buffer[1024];  //Declaramos buffer de 1024 caracteres
    int cant;
    int comp;
    printf("Ingrese una palabra :");
    fflush(stdin);
    gets(buffer); // Se usa para leer una cadena
    //scanf("%s", &palabra); //El espacio lo toma como un \0


        while( strlen(buffer)>14) // STRLEN: Devuelve un entero que tiene la cadena (CANTIDAD DE CARACTERES)
        {
            printf("Reingrese una palabara : ");
            fflush(stdin);
            gets(buffer);
        }
        //strcpy(/*DESTINO*/palabra1, /*ORIGEN*/ buffer); // Copia una cadena en otra
    strcpy(palabra1, buffer);
    strcpy(palabra2, "Gato");

    strupr(buffer); //Funcion para poner cadena todo en MAyusculas

    strcat(buffer, palabra2);  //Concatenar variables
    comp = stricmp(palabra2, palabra1);    // Funcion para comparar PALABRAS //strcmp con "i" (stricmp)compara pero no dectecta Mayusculas

    printf("El resultado de la comparacion es: %d\n", comp);

    printf("Palabra1 :%s\nPalabra2 :%s\n", buffer, palabra2);

    printf("Cantidad de caracteres : %d", cant);
    return 0;
}


//TAREA: Declarar 3 variables
/*
char nombre [?];
char apellido[?];
char apellidoYnombre[?];
*********************
Ingresar el apellido: Scarafilo   (Tener en cuenta variable apellido y nombre no se tocan)
inggresar el nombre: german

apellidoynombre= "Scarafilo, German"
*/
