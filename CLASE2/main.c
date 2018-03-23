#include <stdio.h>
#include <stdlib.h>
/*
Se ingresan numeros (ser distintos de 0), no se sabe cuantos.
Se pide mostrar:
-Cant pares.
-Cant impares.
-Porcentaje Positivos
-Porcentaje Negativos
-Numero Maximo
-Numero Minimo
-Maximo numero par
-Cantidad de numeros comprendidos entre 125 y 236
*/


int main()
{
 int numero;
 char rta;
 int contador;
 int CantPares =0;
 int CantImpares =0;
 int CantPos = 0;
 int CantNeg = 0;
 float PorcentajePos;
 float PorcentajeNeg;
 int NumMaximo;
 int NumMinimo;
 int NumeroMaximoPar;
 int flag = 0;
 int flagPar = 0;
 int Numero126e236 = 0;

    do{
        printf("\nIngrese un numero :");
        scanf ("%d", &numero);

            while(numero == 0){

        printf("\nReingrese un numero :");
        scanf ("%d", &numero);
            }


            if(numero %2 == 0)
            {
                CantPares++;

                if(numero > NumeroMaximoPar || flagPar==0)
                    {
                     NumeroMaximoPar = numero;
                    flagPar = 1;
                    }
            }

            else
            {
                CantImpares++;
            }

            if(numero > 0)
            {
                CantPos++;
            }

            else
            {
               CantNeg++;
            }

            if(numero > NumMaximo || flag == 0)
            {
            NumMaximo = numero;
            }

            if(numero < NumMinimo || flag == 0)
            {
            NumMinimo = numero;
            flag = 1;
            }

            if(numero > 125 && numero < 236)
                {
                Numero126e236++;
                }





        printf("\nDesea continuar? :");

        rta = getche();
        }while(rta != 'n');

        contador = CantPos + CantNeg;
                                            /* CASETEO= Convertir un tipo numerico a otro tipo numerico (float)INT/INT = FLOAT (forzamos a INT(entero) convertirlo a float*/
        PorcentajePos = (float)(CantPos*100) / contador;
        PorcentajeNeg =  100 - PorcentajePos;   /*(CantNeg*100) / contador;*/





    printf("\nLa cantidad de pares ingresados son %d", CantPares);
    printf("\nLa cantidad de impares ingresados son %d", CantImpares);
    printf("\nEl porcentaje de los numeros positivos es : %.2f", PorcentajePos);
    printf("\nEl porcentaje de los numeros negativos es : %.2f", PorcentajeNeg);
    printf("\nEl numero maximo ingresado es : %d", NumMaximo);
    printf("\nEl numero minimo ingresado es : %d", NumMinimo);
    printf("\nEl maximo numero par es : %d", NumeroMaximoPar);
    printf("\nLa cantidad de numeros ingresados entre 126 y 236 es : %d", Numero126e236);
    return 0;
}
