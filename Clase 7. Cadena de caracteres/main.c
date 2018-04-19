#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularProm(int, int);
void mostrarAlumnos(int[], char[][30],int[],int[],float[]);

int main()
{
    int legajos[3];
    char nombres[3][30]; //Guardamos los nombres en Matrices  [USAMOS Gets]
    int nota1 [3];
    int nota2 [3];
    float promedios[3];   // funcion que reciba 2 enteros y devuelva un promedio
    int i;
    for(i=0;i<3;i++)
    {
        printf("Ingrese Legajo :");
        scanf("%d", &legajos[i]);
        printf("Ingrese un Nombre :");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese Nota 1 :");
        scanf("%d", &nota1[i]);
        printf("Ingrese Nota 2 :");
        scanf("%d", &nota2[i]);
        promedios[i]=calcularProm(nota1[i], nota2[i]);

    }
    mostrarAlumnos(legajos,nombres,nota1,nota2,promedios);
/*
    for (i=0;i<3;i++)
    {
        printf("El legajo es  :%d\n El nombre es :%s\n La primer nota es :%d \nLa segunda nota es :%d\n El promedio es :%.2f\n",legajos[i],nombres[i],nota1[i],nota2[i],promedios[i]);
    }
*/

    return 0;
}


float calcularProm(int nota1, int nota2)
{
    float prom;
    prom= (float)(nota1+nota2)/2;
    return prom;
}

void mostrarAlumnos(int legajos[], char nombres[][30],int nota1[],int nota2[],float promedios[])
{
int i;
for(i=0;i<3;i++)
{


        printf("El legajo es  :%d\n El nombre es :%s\n La primer nota es :%d \nLa segunda nota es :%d\n El promedio es :%.2f\n",legajos[i],nombres[i],nota1[i],nota2[i],promedios[i]);
}
}
//tares: 1 fimcopm qie recoba eñ vetpr de ñegakp, el tmaño de vector de legajo y que reciba 1 numero de legajo
//va a devolver el indice del legajo o -1, si esta me devuelve el indice y sino -1
