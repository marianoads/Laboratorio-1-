#include <stdio.h>
#include <stdlib.h>
//Reclusiva: funcion que se llama a si misma
// 5!= 5.4.3.2.1= 5.4!
// 4!= 4.3.2.1= 4.3!
// 3!= 3.2.1= 3.2!
// 2!= 2.1= 2.1!

/** \brief (Calcula el factorial de un numero)
 *
 * \param int (Recibe un numero)
 * \return int (Devuelve el factorial del numero ingresado como parametro)
 *
 */
int factorial(int numero);



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

}
