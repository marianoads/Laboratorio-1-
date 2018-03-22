#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    float numero2;
    float suma;
    char letra;

    printf ("\nIngrese un numero entero :");
    scanf("%d", &numero1);
    printf ("\nIngrese un numero con coma :");
    scanf ("%f", &numero2);
    printf ("\nIngrese una letra :");
    letra = getche();

    suma = numero1 + numero2;

    printf("\nEl numero entero es : %d y el numero con coma es : %.2f", numero1, numero2);
    printf("\nLa suma de los dos numeros es %.2f", suma);
    printf("\nLa letra ingresada es : %c", letra);

    return 0;

}
