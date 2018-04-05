#include <stdio.h>
#include <stdlib.h>

 int getEntero(char* mensaje,char* mensajeError, int maximo, int minimo);

 int main()
{
    int numero;
    numero = getEntero("Ingrese su edad", "Reingrese su edad del 1 al 199", 199,1);
    printf = ("Su edad ingresada es : %d", numero);


}

int getEntero(char* mensaje, int maximo, int minimo);
{
    int retorno =-1;
    do{
        printf("%s", mensaje);
        scanf("%d", &retorno);
        if(retorno<maximo && retorno>minimo)
            {
            break;
        }
        printf("%s", mensajeError);
    }while(0);


    return retorno;

}



