#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int main()

{


    for(i=0;i<MAX;i++)
    {
        printf("Ingrese numero :");
        scanf("%d", &vec[i]);
    }



    int i;
    int mayor;
    int vec[MAX];
    int flag;
     mayor=vec[0];
    for(i=0;i<MAX;i++)
    {
        if(vec[i]>mayor)
        {
            mayor=vec[i];

        }
    }

    return 0;
}
