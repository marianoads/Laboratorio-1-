#include <stdio.h>
#include <stdlib.h>

int contaPares(int[], int);

/** \brief Determina si un caracter esta ono dentro del array
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return -1 si no lo encuentra o el indice si lo encuentra
 *
 */
int buscarInt (char[], int, char);

int main()
{
    int vector[5]={5,2,9,6,5};
    char letras[5] = {'f','g','i','m','a'};
    int indexLetra;

    int cantidad;

    indexLetra = buscarInt(letras, 5, 'a');
    if(indexLetra==-1)
    {
        printf("No se encuentra el caracter\n");
    }
    else
    {
        printf("El caracter se encuntra en el array, en la posicion %d\n", indexLetra);
    }
    cantidad = contaPares(vector,5);

    printf("Index=%d\n", indexLetra);
    printf("Cantidad de pares : %d", cantidad);

    return 0;
}

int contaPares(int array[], int cantidad)
{
    int contPares = 0;
    int i;

    for(i=0;i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contPares++;
        }
    }

    return contPares;
}

int buscarInt (char array[], int cantidad, char caracter)
{
    int index=-1;
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]== caracter)
        {
            index=i;
            break; //rompe la estructura repetitica para no seguir iterando
        }
    }
    return index;
}
