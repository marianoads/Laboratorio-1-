
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
