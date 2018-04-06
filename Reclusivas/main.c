#include <stdio.h>
#include <stdlib.h>
//Reclusiva: funcion que se llama a si misma
// 5!= 5.4.3.2.1= 120 (FOR)

/*TP 1= x =9
     2= y =7

     f+f
     f/f
     f-f
     f*f
     Factorial = entero!
     3.75 en factorial = error
*/
int main()
{
    int numero=5;
    int factor=1;
    int i;



    for(i=numero;i>=1;i--)
    {
        factor = factor*i;
    }

     printf("El factor es :%d", factor);

return 0;
}

/*int factorial(int numero);



int main()
{
    int numero=5;
    int factor;

    factor = factorial(numero);

    printf ("El factor es %d", factor);

    return 0;
}

int factorial(int numero)
{
    int respuesta;

    if(numero == 0)
    {
        respuesta= 1;
    }
    else
     {
         respuesta= numero*factorial(numero-1);
     }
        return respuesta;
