#include <stdio.h>
#include <stdlib.h>
//Ordenamiento
int main()
{
    //int vector[5]={5,2,8,6,5};
    int auxiliar;
    char vector[5]={'w','a','v','e','b'};
    int i;
    int j; //Donde se guarda el dato
    for(i=0; i<4;i++) // termina en cant de elementos del array -1
    {
        for(j=i+1;j<5; j++) //Siempre se inicia en el valor de i+1
        {
            if(vector[i]>vector[j]) // Criterio de ordenamiento(ordena [< de mayor a menor ] o [>de menor a mayor])
            {
                auxiliar= vector[i];
                vector[i]= vector[j];
                vector[j] = auxiliar;
            }
        }
    } for(i=0;i<5; i++)
    {
        printf("%c\n" ,vector[i]);
    }
    /* int a = 9;
    int b = 5;
    int c;

   //swap
    c=a;
    a=b;
    b=c;

    printf("a = %d -- b = %d",a,b);   //Mostrar intercambio de caracteres A=5 y B=9
    return 0;
}

// Se usan dos For, uno para */return 0;
}
