int buscarLibre(int IdProducto[], int T)
{
    int i;
    int index=-1;
    int libre;

for(i=0;i<T; i++)

{
    if(IdProducto[i] ==0)
    {
        index=i;
        break;
    }
}
return index;
}

void mostrarProductos(int IdProducto[], char Descripcion[] [50], int Stock[], float PrecioUnitario[], int tamanio)
{


int i;
int T;
for(i=0;i<T;i++)
{


    printf("%d %s %d %.2f\n", IdProducto[i], Descripcion[i], Stock[i], PrecioUnitario[i]);

     if(IdProducto[i] != 0)
        {
        printf("%d %s %d %.2f\n", IdProducto[i], Descripcion[i], Stock[i], PrecioUnitario[i]);
        }
}
}

