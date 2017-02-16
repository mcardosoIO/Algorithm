#include <stdio.h>
#include <stdlib.h>
#define MAX 1
#define TAM 10000

int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int busca( int *m, int v, int n, int q)
{
    int j;

    j=0;
    for(j = 0; j <= n; j++)
    {
        //printf("valor no vetor: %d\n", m[j]);
        if (m[j] == v)
        return j;
            //break;
    }
    return 0;
}

int main()
{
    int i, N, Q, j, tc, indice, procurar;
    int marple[TAM];
    int value[TAM];

    tc = 0;
    do
    {
        scanf("%d", &N); // total de entrada de mámore
        scanf("%d", &Q);// total de consultas
        tc++;

        if(N==0 || Q==0)
        break;

        memset(marple, 0, sizeof(int) * TAM);
        memset(value, 0, sizeof(int) * TAM);


        for(j = 1; j <= N; j++)
        {
            scanf("%d", &marple[j]);//total de valores de mármore
        }

            qsort(marple, N+1, sizeof(int), cmpfunc);

            printf("CASE# %d:\n", tc);
            for(j = 1; j <= Q; j++)
            {
                indice=0;
                procurar =0;
                scanf("%d", &value[j]);//valores que quero procurar, isto vai gerar automático
                procurar = value[j];


            indice = busca(marple, procurar, N, Q);

                if(indice != 0)
                {
                    printf("%d found at %d\n", procurar, indice);
                }
                else
                {
                    printf("%d not found\n", procurar);
                }
            }

    }while(N!=0 && Q!=0);

    /* imprime matriz ordenada com quicksort
    for(j = 0; j < N; j++)
        {
            printf("%d ", marple[j]);
        }
    */
    return 0;
}
